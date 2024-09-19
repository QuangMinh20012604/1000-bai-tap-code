#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng một chiều các số thực


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

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
			printf("Gia tri am a[%d] = %0.4f, o vi tri thu %d trong mang.\n", i, a[i], i+1);
	}

	_getch();
	return 0;
}
*/
//sai ham

/*	// Test ben visual
#define MAX 100

void nhap(float a[], int& N);
void xuat(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	xuat(a, N); 

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

void xuat(float a[], int N)
{
	printf("\n\n");

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
			printf("Gia tri am a[%d] = %0.4f, o vi tri thu %d trong mang.\n", i, a[i], i+1);
	}
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
	printf("\n\n");

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
			printf("Gia tri am a[%d] = %0.4f, o vi tri thu %d trong mang.\n", i, a[i], i+1);
	}
}
//