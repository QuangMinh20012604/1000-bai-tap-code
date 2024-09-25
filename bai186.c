#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các vị trí trong mảng một chiều các số thực mà giá trị tại vị
//trí đó bằng giá trị âm đầu tiên trong mảng


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX];

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

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	float amDauTien, count_am = 0;
	int vitriamdau;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amDauTien = a[i];
			count_am = 1;
			vitriamdau = i;
			break;
		}
	}

	if(count_am == 0)
		printf("\nKhong ton tai so am nao trong mang.");
	else
	{
		int count = 0;
		printf("Gia tri am dau tien trong mang la %0.3f, o vi tri %d.\n", amDauTien, vitriamdau+1);
		printf("Cac tri co gia tri bang gia tri am dau tien trong mang la: ");
		
		for(int i = vitriamdau + 1; i < N; i++)
		{
			if(a[i] == amDauTien)
			{	
				count++;
				vitriamdau = i + 1;
				printf("%d ", vitriamdau);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri am dau tien o trong mang.");
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX];

void nhap();
void xuat();
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien();

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
void SoThoaManDieuKien()
{
	float amDauTien, count_am = 0;
	int vitriamdau;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amDauTien = a[i];
			count_am = 1;
			vitriamdau = i;
			break;
		}
	}

	if(count_am == 0)
		printf("\nKhong ton tai so am nao trong mang.");
	else
	{
		int count = 0;
		printf("Gia tri am dau tien trong mang la %0.3f, o vi tri %d.\n", amDauTien, vitriamdau+1);
		printf("Cac vi tri co gia tri bang gia tri am dau tien trong mang la: ");
		
		for(int i = vitriamdau + 1; i < N; i++)
		{
			if(a[i] == amDauTien)
			{	
				count++;
				vitriamdau = i + 1;
				printf("%d ", vitriamdau);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri am dau tien o trong mang.");
	}
}
//

/*
//Test o visual
#define MAX 100

int N;
float a[MAX];

void nhap(float a[], int &N);
void xuat(float a[], int N);
void SoThoaManDieuKien(float a[], int N);

int main()
{
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int &N)
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
void SoThoaManDieuKien(float a[], int N)
{
	float amDauTien, count_am = 0;
	int vitriamdau;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amDauTien = a[i];
			count_am = 1;
			vitriamdau = i;
			break;
		}
	}

	if(count_am == 0)
		printf("\nKhong ton tai so am nao trong mang.");
	else
	{
		int count = 0;
		printf("Gia tri am dau tien trong mang la %0.3f, o vi tri %d.\n", amDauTien, vitriamdau+1);
		printf("Cac vi tri co gia tri bang gia tri am dau tien trong mang la: ");
		
		for(int i = vitriamdau + 1; i < N; i++)
		{
			if(a[i] == amDauTien)
			{	
				count++;
				vitriamdau = i + 1;
				printf("%d ", vitriamdau);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri am dau tien o trong mang.");
	}
}
*/