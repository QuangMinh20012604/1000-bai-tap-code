#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm tìm “giá trị lớn nhất” trong mảng một chiều số thực (lonnhat).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX];

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
	printf("\n\n");

	float lonnhat = a[0];

	for(int i = 0; i < N; i++)
	{
		if(a[i] > lonnhat)	lonnhat = a[i];
	}
	printf("Gia tri lon nhat trong mang la %0.2f", lonnhat);

	_getch();
	return 0;
}
*/

//sai ham

/*
//Test ben visual
#define MAX 100

void nhap(float a[], int& N);
void InSoLonNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	InSoLonNhat(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
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

void InSoLonNhat(float a[], int N)
{
	printf("\n\n");

	float lonnhat = a[0];

	for(int i = 0; i < N; i++)
	{
		if(a[i] > lonnhat)	lonnhat = a[i];
	}
	printf("Gia tri lon nhat trong mang la %0.2f", lonnhat);

}
*/


//
//Test ben visual
#define MAX 100

int N;
float a[MAX];

void nhap();
void InSoLonNhat();

int main()
{


	nhap();
	InSoLonNhat();

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

void InSoLonNhat()
{
	printf("\n\n");

	float lonnhat = a[0];

	for(int i = 0; i < N; i++)
	{
		if(a[i] > lonnhat)	lonnhat = a[i];
	}
	printf("Gia tri lon nhat trong mang la %0.2f", lonnhat);

}
//
