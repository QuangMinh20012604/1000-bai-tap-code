#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập vào ngày, tháng, năm. 
//Tính xem ngày đó là ngày thứ bao nhiêu trong năm.


//khong sai ham

/*
const int minYear = 1900, maxYear = 10000;

int main()
{
	int day, month, year;
	int ngayTrongThang;

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
		if (day < 1 || day > ngayTrongThang)
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	} while (day < 1 || day > ngayTrongThang);

	printf("\nNgay: %2d/%2d/%4d.\n", day, month, year);

	int S = 0;

	for(int i = 1; i < month; i++)
	{
		switch(i)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			S +=  31;
			break;
		case 4: case 6: case 9: case 11:
			S +=  30;
			break;
		case 2:
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				S +=  29;
			}
			else
			{
				S +=  28;
			}
		}
		printf("Het thang%2d la ngay thu %3d.\n", i, S);
	}
	S += day;
	printf("\nNgay: %2d/%2d/%4d.\n", day, month, year);
	printf("Ngay nay la ngay thu %d.", S);

	_getch();
	return 0;
}
*/

//sai ham

const int minYear = 1900, maxYear = 10000;

int KiemtraNam(int year);
int TimSoNgayTrongThang(int month, int year);
void DemNgay(int day, int month, int year);

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

	printf("\nNgay: %2d/%2d/%4d.\n", day, month, year);

	DemNgay( day, month, year);

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

void DemNgay(int day, int month, int year)
{
	int S = 0;

	for(int i = 1; i < month; i++)
	{
		switch(i)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			S +=  31;
			break;
		case 4: case 6: case 9: case 11:
			S +=  30;
			break;
		case 2:
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				S +=  29;
			}
			else
			{
				S +=  28;
			}
		}
		printf("Het thang%2d la ngay thu %3d.\n", i, S);
	}
	S += day;
	printf("\nNgay: %2d/%2d/%4d.\n", day, month, year);
	printf("Ngay nay la ngay thu %d.", S);
}