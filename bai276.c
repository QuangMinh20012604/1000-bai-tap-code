#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy xóa tất cả các phần tử có giá trị trùng với x (xoatrungx).


//khong sai ham


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

	printf("\nNhap gia tri x: ");
	scanf_s("%f", &x);

	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N; i++)
	{
		if(a[i] == x)
		{
			
			for(int j = i; j < N; j++)
			{
				a[j] = a[j+1];
			}
			N--;	//sau khi xoa phan tu thi tang vi tri cac phan tu sau len truoc 1 dv va giam tong so phan tu co trong mang
			
			i--;	//kiem tra lai sau khi gan thi phan tu gan co bang so can xoa khong
		}
	}

	printf("\nMang sau khi xoa phan tu co gia tri trung voi x trong mang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}

	_getch();
	return 0;
}
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

	printf("\nNhap gia tri x: ");
	scanf_s("%f", &x);
}

void xuat()
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void Xuly()
{
	for(int i = 0; i < N; i++)
	{
		if(a[i] == x)
		{
			
			for(int j = i; j < N; j++)
			{
				a[j] = a[j+1];
			}
			N--;	//sau khi xoa phan tu thi tang vi tri cac phan tu sau len truoc 1 dv va giam tong so phan tu co trong mang
			
			i--;	//kiem tra lai sau khi gan thi phan tu gan co bang so can xoa khong
		}
	}

	printf("\nMang sau khi xoa phan tu co gia tri trung voi x trong mang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(float	a[], int &N, float &x);
void xuat(float a[], int N);
void Xuly(float a[], int N, float x);

int main()
{
	int N;
	float a[MAX], x;

	nhap(a, N, x);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N, x);

	_getch();
	return 0;
}

void nhap(float	a[], int& N, float& x)
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

	printf("\nNhap gia tri x: ");
	scanf_s("%f", &x);
}

void xuat(float	a[], int N)
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void Xuly(float	a[], int N, float x)
{
	for (int i = 0; i < N; i++)
	{
		if (a[i] == x)
		{

			for (int j = i; j < N; j++)
			{
				a[j] = a[j + 1];
			}
			N--;	//sau khi xoa phan tu thi tang vi tri cac phan tu sau len truoc 1 dv va giam tong so phan tu co trong mang

			i--;	//kiem tra lai sau khi gan thi phan tu gan co bang so can xoa khong
		}
	}

	printf("\nMang sau khi xoa phan tu co gia tri trung voi x trong mang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
*/