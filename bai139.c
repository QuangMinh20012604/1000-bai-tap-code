#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “vị trí số hoàn thiện cuối cùng” trong mảng một chiều các số
//nguyên (vitrihoanthiencuoi). Nếu mảng không có số hoàn thiện thì trả
//về giá trị - 1.

//Các số hoàn thiện là 6, 28, 496, 8128

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
	
	int sohoanthien = 0, vitrihoanthiencuoi = -1;

	for(int i = 0; i < N; i++)
	{
		int S = 0;
		for(int j = 1; j < a[i]; j++)
		{
			if(a[i] % j == 0)
			{
				S += j;
			}
		}

		if(S == a[i])
		{
			vitrihoanthiencuoi = i + 1;
			sohoanthien = a[i];
		}
	}

	if(vitrihoanthiencuoi == -1)
		printf("\n%d", vitrihoanthiencuoi);
	else
	{
		printf("\nSo hoan thien cuoi cung la %d, o vi tri thu %d.", sohoanthien, vitrihoanthiencuoi);
	}

	_getch();
	return 0;
}
*/

//sai ham

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

int ViTriHoanThienCuoi(int a[], int N);

int main()
{
	int N, a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	int vitrihoanthiencuoi = ViTriHoanThienCuoi(a, N);

	printf("\n%d", vitrihoanthiencuoi);

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

int ViTriHoanThienCuoi(int a[], int N)
{
	int sohoanthien = 0, vitrihoanthiencuoi = -1;

	for(int i = 0; i < N; i++)
	{
		int S = 0;
		for(int j = 1; j < a[i]; j++)
		{
			if(a[i] % j == 0)
			{
				S += j;
			}
		}

		if(S == a[i])
		{
			vitrihoanthiencuoi = i + 1;
			sohoanthien = a[i];
		}
	}
	return vitrihoanthiencuoi;
}
*/


//
#define MAX 100

int N, a[MAX];

void nhap();
void xuat();
int ViTriHoanThienCuoi();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	int vitrihoanthiencuoi = ViTriHoanThienCuoi();

	printf("\n%d", vitrihoanthiencuoi);

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

int ViTriHoanThienCuoi()
{
	int sohoanthien = 0, vitrihoanthiencuoi = -1;

	for(int i = N - 1; i >= 0; i--)
	{
		int S = 0;
		for(int j = 1; j < a[i]; j++)
		{
			if(a[i] % j == 0)
			{
				S += j;
			}
		}

		if(S == a[i])
		{
			vitrihoanthiencuoi = i + 1;
			sohoanthien = a[i];
			break;
		}
		
	}
	return vitrihoanthiencuoi;
}


//

