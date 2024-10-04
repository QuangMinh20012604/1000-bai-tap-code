#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy thêm một phần tử có giá trị x vào mảng tại vị trí k (themvitri).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX], x, k;

	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N >= MAX)
			printf("\nSo phan tu phai lon hon 0 va nho hon 100. Xin kiem tra lai !");
	}while(N < 1 || N >= MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//Gan phan tu x, vi tri k
	printf("\n\nNhap gia tri x: ");
	scanf_s("%d", &x);
	do
	{
		printf("\nNhap vi tri k: ");
		scanf_s("%d", &k);
		if(k < 1 || k > N)	printf("\nVi tri k phai lon hon 0 va nho hon N. Xin moi nhap lai!!!\n");
	}while(k < 1 || k > N);
	
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
	
	printf("\n");
	
	//Xu ly de
	for(int i = N; i > k - 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[k - 1] = x;

	printf("\nMang sau khi them:\n");

	for (int i = 0; i < N + 1; i++)
	{
		printf("%d  ", a[i]);
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX], x, k;

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
		if(N < 1 || N >= MAX)
			printf("\nSo phan tu phai lon hon 0 va nho hon 100. Xin kiem tra lai !");
	}while(N < 1 || N >= MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//Gan phan tu x, vi tri k
	printf("\n\nNhap gia tri x: ");
	scanf_s("%d", &x);
	do
	{
		printf("\nNhap vi tri k: ");
		scanf_s("%d", &k);
		if(k < 1 || k > N)	printf("\nVi tri k phai lon hon 0 va nho hon N. Xin moi nhap lai!!!\n");
	}while(k < 1 || k > N);
}

void xuat()
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	for(int i = N; i > k - 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[k - 1] = x;

	printf("\nMang sau khi them:\n");

	for (int i = 0; i < N + 1; i++)
	{
		printf("%d  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N, int &x, int &k);

void xuat(int a[], int N);

void Xuly(int a[], int N, int x, int k);

int main()
{
	int N, a[MAX], x, k;

	nhap(a, N, x, k);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N, x, k);

	_getch();
	return 0;
}

void nhap(int a[], int& N, int &x, int &k)
{
	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N >= MAX)
			printf("\nSo phan tu phai lon hon 0 va nho hon 100. Xin kiem tra lai !");
	}while(N < 1 || N >= MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//Gan phan tu x, vi tri k
	printf("\n\nNhap gia tri x: ");
	scanf_s("%d", &x);
	do
	{
		printf("\nNhap vi tri k: ");
		scanf_s("%d", &k);
		if(k < 1 || k > N)	printf("\nVi tri k phai lon hon 0 va nho hon N. Xin moi nhap lai!!!\n");
	}while(k < 1 || k > N);
}

void xuat(int a[], int N)
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[], int N, int x, int k)
{
	for(int i = N; i > k - 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[k - 1] = x;

	printf("\nMang sau khi them:\n");

	for (int i = 0; i < N + 1; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/