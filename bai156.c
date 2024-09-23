#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm một vị trí trong mảng một chiều các số thực mà giá trị tại vị trí
//đó là giá trị “gần giá trị x nhất”.
//Ví dụ:
//24 45 23 13 43 -12
//Giá trị x = 15
//Khoảng cách từ x = 15 tới các phần tử khác trong mảng là:
//9 30 8 2 28 27
//Giá trị trong mảng xa giá trị x nhất: 13


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX], x, mangIn[MAX];

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
		
	printf("Nhap x: ");
	scanf_s("%f", &x);

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N; i++)
	{
		if(a[i] <= x)
		{
			mangIn[i] = x - a[i];
		}
		else
		{
			mangIn[i] = a[i] - x;
		}
	}
	
	printf("Khoang cach tu %0.3f den cac phan tu khac trong mang:\n", x);
	
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", mangIn[i]);
	}

	float GiaTriXaXNhat = 0, khoangcachxanhat = abs(x - a[0]);

	for(int i = 1; i < N; i++)
	{
		mangIn[i] = abs(x - a[i]);

		if(mangIn[i] > khoangcachxanhat)
		{
			khoangcachxanhat = mangIn[i];
			GiaTriXaXNhat = a[i];
		}
	}

	//In ket qua

	printf("\n\nGia tri trong mang xa gia tri %0.3f la %0.3f.", x, GiaTriXaXNhat);
	

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX], x, mangIn[MAX];


void nhap();
void xuat();
void xuly_in();

int main()
{
	nhap();
	xuat();

	printf("\n");

	///Xu ly de
	//In ket qua
	xuly_in();

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
		
	printf("Nhap x: ");
	scanf_s("%f", &x);
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", a[i]);
	}
}

void xuly_in()
{
	for(int i = 0; i < N; i++)
	{
		if(a[i] <= x)
		{
			mangIn[i] = x - a[i];
		}
		else
		{
			mangIn[i] = a[i] - x;
		}
	}
	
	printf("Khoang cach tu %0.3f den cac phan tu khac trong mang:\n", x);
	
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", mangIn[i]);
	}

	float GiaTriXaXNhat = 0, khoangcachxanhat = abs(x - a[0]);

	for(int i = 1; i < N; i++)
	{
		mangIn[i] = abs(x - a[i]);

		if(mangIn[i] > khoangcachxanhat)
		{
			khoangcachxanhat = mangIn[i];
			GiaTriXaXNhat = a[i];
		}
	}

	printf("\n\nGia tri trong mang xa gia tri %0.3f la %0.3f.", x, GiaTriXaXNhat);
}
//

/*
//Test o visual

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<cmath>

#define MAX 100

void nhap(float& x, float a[], int& N);
void xuat(float a[], int N);
void xuly_in(float x, float a[], int N, float mangIn[]);


int main()
{
	int N;
	float a[MAX], x, mangIn[MAX];

	nhap(x, a, N);
	xuat(a, N);

	printf("\n");

	///Xu ly de
	//In ket qua
	xuly_in(x, a, N, mangIn);

	_getch();
	return 0;
}

void nhap(float& x, float a[], int& N)
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
		
	printf("Nhap x: ");
	scanf_s("%f", &x);
}

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", a[i]);
	}
}

void xuly_in(float x, float a[], int N, float mangIn[])
{
	for (int i = 0; i < N; i++)
	{
		if (a[i] <= x)
		{
			mangIn[i] = x - a[i];
		}
		else
		{
			mangIn[i] = a[i] - x;
		}
	}

	printf("Khoang cach tu %0.3f den cac phan tu khac trong mang:\n", x);

	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", mangIn[i]);
	}

	float GiaTriXaXNhat = 0, khoangcachxanhat = abs(x - a[0]);

	for (int i = 1; i < N; i++)
	{
		mangIn[i] = abs(x - a[i]);

		if (mangIn[i] > khoangcachxanhat)
		{
			khoangcachxanhat = mangIn[i];
			GiaTriXaXNhat = a[i];
		}
	}

	printf("\n\nGia tri trong mang xa gia tri %0.3f la %0.3f.", x, GiaTriXaXNhat);
}
*/