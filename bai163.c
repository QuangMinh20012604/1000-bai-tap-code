#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm số chính phương đầu tiên trong mảng một chiều các số nguyên.


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


	printf("\n");
	
	//Xu ly de
	int sochinhphuong = 0;

	for(int i = 0; i < N; i++)
	{
		if(sqrt( (float)a[i] ) == (int) sqrt( (float)a[i] ))
		{
			sochinhphuong = a[i];
			break;
		}
	}

	if(sochinhphuong == 0)
		printf("\nKhong ton tai so chinh phuong trong mang.");
	else
		printf("\nSo chinh phuong dau tien trong mang la: %d.", sochinhphuong);

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
void KiemtraSoChinhPhuong();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	KiemtraSoChinhPhuong();

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

void KiemtraSoChinhPhuong()
{
	int sochinhphuong = 0;
	
	for(int i = 0; i < N; i++)
	{
		if(sqrt( (float)a[i] ) == (int) sqrt( (float)a[i] ))
		{
			sochinhphuong = a[i];
			break;
		}
	}

	if(sochinhphuong == 0)
		printf("\nKhong ton tai so chinh phuong trong mang.");
	else
		printf("\nSo chinh phuong dau tien trong mang la: %d.", sochinhphuong);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int &N);
void xuat(int a[], int N);
void KiemtraSoChinhPhuong(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	KiemtraSoChinhPhuong(a, N);

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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void KiemtraSoChinhPhuong(int a[], int N)
{
	int sochinhphuong = 0;

	for (int i = 0; i < N; i++)
	{
		if (sqrt((float)a[i]) == (int)sqrt((float)a[i]))
		{
			sochinhphuong = a[i];
			break;
		}
	}

	if (sochinhphuong == 0)
		printf("\nKhong ton tai so chinh phuong trong mang.");
	else
		printf("\nSo chinh phuong dau tien trong mang la: %d.", sochinhphuong);
}
*/
