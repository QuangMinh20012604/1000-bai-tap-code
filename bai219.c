#include<stdio.h>
#include<conio.h>
#include<math.h>


//Đếm số lần xuất hiện của giá trị x trong mảng một chiều các số thực
// (tanxuat)


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX], x;

	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\nNhap x: ");
	scanf_s("%f", &x);

	//In mang
	printf("\n");

	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}

	printf("\n");
	
	//Xu ly de
	int tanxuat = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == x)
		{
			tanxuat++;
		}
	}

	printf("\n\nSo lan xuat hien cua gia tri %0.3f trong mang la: %d.", x, tanxuat);

	_getch();
	return 0;
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX], x;

void nhap();
void xuat();
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	Xuly();

	_getch();
	return 0;
}

void nhap()
{
	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\nNhap x: ");
	scanf_s("%f", &x);
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void Xuly()
{
	int tanxuat = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == x)
		{
			tanxuat++;
		}
	}

	printf("\n\nSo lan xuat hien cua gia tri %0.3f trong mang la: %d.", x, tanxuat);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void Xuly(float a[], int N);

int main()
{
	int N;
	float a[MAX], x;
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly();

	_getch();
	return 0;
}

void nhap(float a[], int& N)
{
	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\nNhap x: ");
	scanf_s("%f", &x);
}

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}

void Xuly()
{
	int tanxuat = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == x)
		{
			tanxuat++;
		}
	}

	printf("\n\nSo lan xuat hien cua gia tri %0.3f trong mang la: %d.", x, tanxuat);
}
*/