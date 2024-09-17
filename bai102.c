#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập vào một ngày (ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm).


//khong sai ham

////dùng if
const int minYear = 1900, maxYear = 10000;

int main()
{
	int day, month, year;
	int ngayTrongThang;
	int check = 0;

	printf("\nmin year = %d; max year = %d\n\n", minYear, maxYear);
	
	do
	{
		printf("\nNhap nam: ");
		scanf_s("%d", &year);
		if(year < minYear || year > maxYear)
			printf("\nDu lieu nam khong hop le. Xin kiem tra lai!\n");
	}while(year < minYear || year > maxYear);

	do
	{
		printf("Nhap thang: ");
		scanf_s("%d", &month);
		if(month < 1 || month > 12)
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	}while(month < 1 || month > 12);

	if((month == 1) || (month == 3) || (month == 5) || (month == 7)
		|| (month == 8) || (month == 10) || (month == 12))
		{
			ngayTrongThang =  31;
		}
	else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			ngayTrongThang =  30;
		}
	else if(month == 2)
	{
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			ngayTrongThang =  29;
		}
		else
		{
			ngayTrongThang =  28;
		}
	}
	
	do
	{
		printf("Nhap ngay: ");
		scanf_s("%d", &day);
		if(day < 1 || day > ngayTrongThang)
		printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");	
	}while(day < 1 || day > ngayTrongThang);

	printf("\nNgay hien tai la: %2d/%2d/%4d.\n", day, month, year);

	if(day < ngayTrongThang)
	{
		day++;
	}
	else if(month < 12)	//ngay dau tien cua thang
	{
		day = 1;
		month++;
	}
	else	//ngay dau tien cua nam
	{
		day = month = 1;
		year++;
	}

	printf("Ngay ke tiep la: %3d/%2d/%4d.", day, month, year);

	_getch();
	return 0;
}
//

////dùng switch case

/*
const int minYear = 1900, maxYear = 10000;

int main()
{
	int day, month, year;
	int ngayTrongThang;
	int check = 0;

	printf("\nmin year = %d; max year = %d\n\n", minYear, maxYear);
	
	do
	{
		printf("\nNhap nam: ");
		scanf_s("%d", &year);
		if(year < minYear || year > maxYear)
			printf("\nDu lieu nam khong hop le. Xin kiem tra lai!\n");
	}while(year < minYear || year > maxYear);

	do
	{
		printf("Nhap thang: ");
		scanf_s("%d", &month);
		if(month < 1 || month > 12)
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	}while(month < 1 || month > 12);

	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ngayTrongThang =  31;
			break;
		case 4: case 6: case 9: case 11:
			ngayTrongThang =  30;
			break;
		case 2:
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				ngayTrongThang =  29;
			}
			else
			{
				ngayTrongThang =  28;
			}
	}

	do
	{
		printf("Nhap ngay: ");
		scanf_s("%d", &day);
		if(day < 1 || day > ngayTrongThang)
		printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");	
	}while(day < 1 || day > ngayTrongThang);

	printf("\nNgay hien tai la: %2d/%2d/%4d.\n", day, month, year);

	if(day < ngayTrongThang)
	{
		day++;
	}
	else if(month < 12)	//ngay dau tien cua thang
	{
		day = 1;
		month++;
	}
	else	//ngay dau tien cua nam
	{
		day = month = 1;
		year++;
	}

	printf("Ngay ke tiep la: %3d/%2d/%4d.", day, month, year);

	_getch();
	return 0;
}
*/

//sai ham
/*
const int minYear = 1900, maxYear = 10000;

int KiemtraNam(int year);
int TimSoNgayTrongThang(int month, int year);

void NgayKeTiep(int day, int month, int year);

int main()
{
	int day, month, year;

	printf("\nmin year = %d; max year = %d\n\n", minYear, maxYear);

	do
	{
		printf("\nNhap nam: ");
		scanf_s("%d", &year);
		if (year < minYear || year > maxYear)
			printf("\nDu lieu nam khong hop le. Xin kiem tra lai!\n");
	} while (year < minYear || year > maxYear);

	do
	{
		printf("Nhap thang: ");
		scanf_s("%d", &month);
		if (month < 1 || month > 12)
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	} while (month < 1 || month > 12);

	int ngayTrongThang = TimSoNgayTrongThang(month, year);

	do
	{
		printf("Nhap ngay: ");
		scanf_s("%d", &day);
		if (day < 1 || day > ngayTrongThang)
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	} while (day < 1 || day > ngayTrongThang);

	printf("\nNgay hien tai la: %2d/%2d/%4d.\n", day, month, year);
	
	NgayKeTiep(day, month, year);

	_getch();
	return 0;
}

int KiemtraNam(int year)
{
	int check;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return check;
}

int TimSoNgayTrongThang(int month, int year)
{
	int ngayTrongThang;

	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		ngayTrongThang = 31;
		break;
	case 4: case 6: case 9: case 11:
		ngayTrongThang = 30;
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			ngayTrongThang = 29;
		}
		else
		{
			ngayTrongThang = 28;
		}
	}

	return ngayTrongThang;
}


void NgayKeTiep(int day, int month, int year)
{
	int ngayTrongThang = TimSoNgayTrongThang(month, year);
	if (day < ngayTrongThang)
	{
		day++;
	}
	else if (month < 12)	//ngay dau tien cua thang
	{
		day = 1;
		month++;
	}
	else	//ngay dau tien cua nam
	{
		day = month = 1;
		year++;
	}

	printf("Ngay ke tiep la: %3d/%2d/%4d.", day, month, year);
}
*/