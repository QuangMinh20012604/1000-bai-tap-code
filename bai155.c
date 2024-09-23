#include<stdio.h>
#include<conio.h>
#include<math.h>

//Hãy tìm giá trị trong mảng các sô thực “xa giá trị x nhất” (xanhat).
//Ví dụ:
//24 45 23 13 43 -12
//Giá trị x = 15
//Khoảng cách từ x = 15 tới các phần tử khác trong mảng là:
//9 30 8 2 28 27
//Giá trị trong mảng xa giá trị x nhất: 45

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

	//In ket qua

	printf("Khoang cach tu %0.3f den cac phan tu khac trong mang:\n", x);
	
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", mangIn[i]);
	}


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
void xuly();
void in();

int main()
{
	nhap();
	xuat();

	printf("\n");

	///Xu ly de
	xuly();

	//In ket qua

	in();

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

void xuly()
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
}

void in()
{
	printf("Khoang cach tu %0.3f den cac phan tu khac trong mang:\n", x);
	
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", mangIn[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

int N;
float a[MAX], x, mangIn[MAX];

void nhap(float &x, float a[], int &N);
void xuat(float a[], int N);
void xuly(float x, float a[], int N, float mangIn[]);
void in(int N, float mangIn[]);

int main()
{
	nhap(x, a, N);
	xuat(a, N);
	
	in(N, mangIn);

	printf("\n");

	//Xu ly de
	xuly(x, a, N, mangIn);

	//In ket qua

	in(N, mangIn);

	_getch();
	return 0;
}

void nhap(float &x, float a[], int &N)
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

void xuly(float x, float a[], int N, float mangIn[])
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
}

void in(int N, float mangIn[])
{
	printf("Khoang cach tu %0.3f den cac phan tu khac trong mang:\n", x);

	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", mangIn[i]);
	}
}
*/