#include<stdio.h>
#include<conio.h>
#include<math.h>


//Bài 128: Viết hàm nhập mảng một chiều các số thực.
//Bài 130: Viết hàm xuất mảng một chiều các số thực.


//sai ham

/*
// Test ben visual
#define MAX 100

void nhap(float a[], int &N);
void xuat(float a[], int N);

int main()
{
	int N;
	float mang[MAX];

	nhap(mang, N);
	xuat(mang, N);

	_getch();
	return 0;
}

void nhap(float a[], int &N)
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

void xuat(float a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("\n a[%d]: %0.4f", i, a[i]);
	}
}
*/

//Cách khác

//
#define MAX 100

int N;
float mang[MAX];

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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	for (int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &mang[i]);
	}
}

void xuat()
{
	for (int i = 0; i < N; i++)
	{
		printf("\n a[%d]: %0.4f", i, mang[i]);
	}
}

//