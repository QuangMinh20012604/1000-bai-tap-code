#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “số dương cuối cùng” trong mảng số thực (duongcuoi). Nếu mảng
//không có giá trị dương thì trả về giá trị - 1.


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
	float duongcuoi = -1;
	for(int i = N - 1; i>= 0; i--)
	{
		if(a[i] > 0)
		{
			duongcuoi = a[i];
			break;
		}
	}

	printf("%0.3f", duongcuoi);

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

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de


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

float SoDuongCuoi(float a[], int N)
{
	float duongcuoi = -1;
	for (int i = N - 1; i >= 0; i--)
	{
		if (a[i] > 0)
		{
			duongcuoi = a[i];
			break;
		}
	}

	return duongcuoi;
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

float SoDuongCuoi(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	float duongcuoi = SoDuongCuoi(a, N);

	printf("%0.3f", duongcuoi);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
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

float SoDuongCuoi(float a[], int N)
{
	float duongcuoi = -1;
	for (int i = N - 1; i >= 0; i--)
	{
		if (a[i] > 0)
		{
			duongcuoi = a[i];
			break;
		}
	}

	return duongcuoi;
}
*/