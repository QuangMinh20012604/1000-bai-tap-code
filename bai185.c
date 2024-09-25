#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các vị trí mà giá trị tại vị trí đó là số chính phương trong
//mảng một chiều các số nguyên.


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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\nCac so chinh phuong co trong mang la: ");
	
	//Xu ly de
	int sochinhphuong = 0;

	for(int i = 0; i < N; i++)
	{
		if(sqrt((float) a[i]) == (int) sqrt((float) a[i]))
		{
			sochinhphuong++;
			printf("%d, ", a[i]);
		}
	}

	if(sochinhphuong == 0)
		printf("\n\nKhong ton tai so chinh phuong nao trong mang.");

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
void SoChinhPhuongThoaMan();

int main()
{
	nhap();
	xuat();

	printf("\nCac so chinh phuong co trong mang la: ");

	//Xu ly de
	SoChinhPhuongThoaMan();

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
		scanf_s("%d", &a[i]);
	}
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void SoChinhPhuongThoaMan()
{
	int sochinhphuong = 0;
	
	for(int i = 0; i < N; i++)
	{
		if(sqrt((float) a[i]) == (int) sqrt((float) a[i]))
		{
			sochinhphuong++;
			printf("%d, ", a[i]);
		}
	}

	if(sochinhphuong == 0)
		printf("\n\nKhong ton tai so chinh phuong nao trong mang.");
}
//

/*
//Test o visual
#define MAX 100



void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoChinhPhuongThoaMan(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac so chinh phuong co trong mang la: ");

	//Xu ly de
	SoChinhPhuongThoaMan(a, N);

	_getch();
	return 0;
}

void nhap(int a[], int &N)
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
		scanf_s("%d", &a[i]);
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void SoChinhPhuongThoaMan(int a[], int N)
{
	int sochinhphuong = 0;
	
	for(int i = 0; i < N; i++)
	{
		if(sqrt((float) a[i]) == (int) sqrt((float) a[i]))
		{
			sochinhphuong++;
			printf("%d, ", a[i]);
		}
	}

	if(sochinhphuong == 0)
		printf("\n\nKhong ton tai so chinh phuong nao trong mang.");
}
*/