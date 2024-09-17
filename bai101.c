#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày



//khong sai ham

/*
const int minYear = 1900, maxYear = 10000;

int main()
{
	int month, year;
	
	printf("\nmin year = %d; max year = %d\n\n", minYear, maxYear);

	do
	{
		printf("Nhap thang: ");
		scanf_s("%d", &month);
		if(month < 1 || month > 12)	
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	}while(month < 1 || month > 12);

	do
	{
		printf("Nhap nam: ");
		scanf_s("%d", &year);
		if(year < minYear || year > maxYear)	
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	}while(year < minYear || year > maxYear);

	if(month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12)
		{
			printf("\nThang %d cua nam %d co 31 ngay.", month, year);
		}
	else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
	{
		printf("\nThang %d cua nam %d co 30 ngay.", month, year);
	}
	else if(month == 2)
	{
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("\nThang 2 cua nam %d co 29 ngay.", year);
		}
		else
		{
			printf("\nThang 2 cua nam %d co 28 ngay.", year);
		}
	}

	_getch();
	return 0;
}
*/

//sai ham


const int minYear = 1900, maxYear = 10000;

void KiemtraNam(int year);
void KiemtraThang(int month, int year);

int main()
{
	int month, year;
	
	printf("\nmin year = %d; max year = %d\n\n", minYear, maxYear);

	do
	{
		printf("Nhap thang: ");
		scanf_s("%d", &month);
		if(month < 1 || month > 12)	
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	}while(month < 1 || month > 12);

	do
	{
		printf("Nhap nam: ");
		scanf_s("%d", &year);
		if(year < minYear || year > maxYear)	
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!\n");
	}while(year < minYear || year > maxYear);

	KiemtraThang(month, year);

	_getch();
	return 0;
}

void KiemtraNam(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("\nThang 2 cua nam %d co 29 ngay.", year);
	}
	else
	{
		printf("\nThang 2 cua nam %d co 28 ngay.", year);
	}
}
void KiemtraThang(int month, int year)
{


	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nThang %d cua nam %d co 31 ngay.", month, year);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nThang %d cua nam %d co 31 ngay.", month, year);
			break;
		case 2:
			{
				KiemtraNam(year);
			}
	}
}
