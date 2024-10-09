#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Liệt kê tất cả các mảng con có độ dài lớn hơn 2 trong mảng một chiều
//các số nguyên (conlonhonhai).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX];

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
		scanf_s("%d", &a[i]);
	}

	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int chieudaimangcon;

	printf("\nCac mang con:\n");
	for(int i = 0; i < N; i++)
	{
		//for() de tang so luong cua mang con
		for(chieudaimangcon = 3 + i; chieudaimangcon <= N; chieudaimangcon++)
		{
			printf("{");
			for(int j = i; j < chieudaimangcon; j++)
			{
				printf(" %d ", a[j]);
			}
			printf("}  ");
		}
		printf("\n");
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX];

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
		if(N < 3 || N > MAX)
			printf("\nSo phan tu phai lon hon 3. Xin kiem tra lai !");
	}while(N < 3 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
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
	int chieudaimangcon;

	printf("\nCac mang con:\n");
	for(int i = 0; i < N; i++)
	{
		//for() de tang so luong cua mang con
		for(chieudaimangcon = 3 + i; chieudaimangcon <= N; chieudaimangcon++)
		{
			printf("{");
			for(int j = i; j < chieudaimangcon; j++)
			{
				printf(" %d ", a[j]);
			}
			printf("}  ");
		}
		printf("\n");
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N);

	_getch();
	return 0;
}

void nhap(int a[], int& N)
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
		scanf_s("%d", &a[i]);
	}
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

void Xuly(int a[], int N)
{
	int chieudaimangcon;

	printf("\nCac mang con:\n");
	for(int i = 0; i < N; i++)
	{
		//for() de tang so luong cua mang con
		for(chieudaimangcon = 3 + i; chieudaimangcon <= N; chieudaimangcon++)
		{
			printf("{");
			for(int j = i; j < chieudaimangcon; j++)
			{
				printf(" %d ", a[j]);
			}
			printf("}  ");
		}
		printf("\n");
	}
}
*/