#include<stdio.h>
#include<conio.h>
#include<math.h>


//Liệt kê tất cả các số chính phương nhỏ hơn n.


//khong sai ham

/*
int main()
{
	int N;	
	do
	{
	printf("Nhap N: ");
	scanf_s("%d", &N);
	if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	
	printf("\n");

	if (N == 1)
	{
		printf("Khong ton tai so chinh phuong nao nho hon %d.", N);
	}
	else
	{
		printf("  Cac so chinh phuong nho hon %d la: \n", N);

		for(int i = 1; i < N; i++)
		{
			int count = 0;	//count = 0: false	- count = 1: true;
			if( (int)sqrt( (float)i ) == sqrt( (float)i ) )
			{
				count = 1;
			}

			if(count == 1)
			{
				printf("%4d", i);
			}
		}

	}

	_getch();
	return 0;
}
*/

//sai ham

void KiemtraSoChinhPhuong(int N);

int main()
{
	int N;	
	do
	{
	printf("Nhap N: ");
	scanf_s("%d", &N);
	if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	
	printf("\n");

	KiemtraSoChinhPhuong(N);

	_getch();
	return 0;
}

void KiemtraSoChinhPhuong(int N)
{
	if (N == 1)
	{
		printf("Khong ton tai so chinh phuong nao nho hon %d.", N);
	}
	else
	{
		printf("  Cac so chinh phuong nho hon %d la: \n", N);

		for(int i = 1; i < N; i++)
		{
			int count = 0;	//count = 0: false	- count = 1: true;
			if( (int)sqrt( (float)i ) == sqrt( (float)i ) )
			{
				count = 1;
			}

			if(count == 1)
			{
				printf("%4d", i);
			}
		}

	}
}


