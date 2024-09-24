#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các số có giá trị chẵn trong mảng một chiều các số nguyên
//thuộc đoạn [x,y] cho trước (x, y là các số nguyên).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX], x, y;

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

	printf("\nNhap x: ");
	scanf_s("%d", &x);

	do
	{
		printf("Nhap y: ");
		scanf_s("%d", &y);
		if (y <= x)
			printf("\ny phai lon hon x. Xin kiem tra lai!\n");
	} while (y <= x);

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n\nCac so chan thuoc doan trong mang [%d; %d] la: \n\n", x, y);

	//Xu ly de
	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2 == 0) && a[i] >= x && a[i] <= y)
			printf("%d  ", a[i]);
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX], x, y;

void nhap();
void xuat();
void CacGiaTriChanThoaMan();

int main()
{
	nhap();
	xuat();

	printf("\n");

	printf("\n\nCac so chan thuoc doan trong mang [%d; %d] la: \n\n", x, y);

	CacGiaTriChanThoaMan();

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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	printf("\nNhap x: ");
	scanf_s("%d", &x);

	do
	{
		printf("Nhap y: ");
		scanf_s("%d", &y);
		if (y <= x)
			printf("\ny phai lon hon x. Xin kiem tra lai!\n");
	} while (y <= x);
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

void CacGiaTriChanThoaMan()
{
	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2 == 0) && a[i] >= x && a[i] <= y)
			printf("%d  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N, int &x, int &y);
void xuat(int a[], int N);
void CacGiaTriChanThoaMan(int a[], int N, int x, int y);

int main()
{
	int N, a[MAX], x, y;

	nhap(a, N, x, y);
	xuat(a, N);

	printf("\n");

	printf("\n\nCac so chan thuoc doan trong mang [%d; %d] la: \n\n", x, y);

	CacGiaTriChanThoaMan(a, N, x, y);

	_getch();
	return 0;
}

void nhap(int a[], int& N, int &x, int& y)
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

	printf("\nNhap x: ");
	scanf_s("%d", &x);

	do
	{
		printf("Nhap y: ");
		scanf_s("%d", &y);
		if (y <= x)
			printf("\ny phai lon hon x. Xin kiem tra lai!\n");
	} while (y <= x);
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

void CacGiaTriChanThoaMan(int a[], int N, int x, int y)
{
	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2 == 0) && a[i] >= x && a[i] <= y)
			printf("%d  ", a[i]);
	}
}
*/