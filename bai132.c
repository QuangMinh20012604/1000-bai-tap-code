#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm liệt kê các giá trị chẵn trong mảng một chiều các số nguyên.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX];

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
		scanf_s("%d", &a[i]);
	}
	printf("\n\nCac gia tri chan trong mang:  ");

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%d  ", a[i]);
		}
	}

	_getch();
	return 0;
}
*/

//sai ham

/*
// Test ben visual
#define MAX 100

void nhap(int a[], int& N);
void LietkeSoChan(int a[], int N);

int main()
{
	int N, a[MAX];

	
	nhap(a, N);
	LietkeSoChan(a, N);

	_getch();
	return 0;
}

void nhap(int a[], int& N)
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
		scanf_s("%d", &a[i]);
	}
}

void LietkeSoChan(int a[], int N)
{
	printf("\n\nCac gia tri chan trong mang:  ");

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%d  ", a[i]);
		}
	}
}
*/



#define MAX 100

int N, a[MAX];

void nhap();
void LietkeSoChan();

int main()
{
	
	nhap();
	LietkeSoChan();

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
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}

void LietkeSoChan()
{
	printf("\nCac gia tri chan trong mang:  ");

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%d  ", a[i]);
		}
	}
}