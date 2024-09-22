#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “giá trị dương đầu tiên” trong mảng một chiều các số thực
//(duongdau). Nếu mảng không có giá trị dương thì trả về giá trị -1


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX], duongdau = -1;

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
	
	printf("\n");


	for (int i = 0; i < N; i++)
	{
		printf("%.3f  ", a[i]);
	}

	printf("\n");

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			duongdau = a[i];
			break;
		}
	}

	printf("\n%0.2f", duongdau);
	
	_getch();
	return 0;
}
*/

//sai ham

/*
//Test ben visual
#define MAX 100

void nhap(float a[], int& N);
float duongdautien(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	float duongdau = duongdautien(a, N);

	printf("\n%0.2f", duongdau);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
{
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	for (int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
}

float duongdautien(float a[], int N)
{
	printf("\n");


	for (int i = 0; i < N; i++)
	{
		printf("%.3f  ", a[i]);
	}

	printf("\n");

	for (int i = 0; i < N; i++)
	{
		if (a[i] > 0)
		{
			return a[i];
			break;
		}
	}
	return -1;
}
*/


//
#define MAX 100

int N;	
float a[MAX];

void nhap();
void xuat();

int main()
{
	nhap();
	xuat();	
	
	_getch();
	return 0;
}

void nhap()
{
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
}

void xuat()
{
	printf("\n");


	for (int i = 0; i < N; i++)
	{
		printf("%.3f  ", a[i]);
	}
	
	printf("\n");

	float duongdau = -1;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			duongdau = a[i];
			break;
		}
	}

	printf("\n%0.2f", duongdau);
}
//

//sai ham


