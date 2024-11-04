#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính trung bình cộng các số dương trong ma trận các số thực.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, M;
	float a[MAX][MAX];

	//Do dai dong
	do
	{
		printf("\nNhap so dong: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Do dai cot
	do
	{
		printf("\nNhap so cot: ");
		scanf_s("%d", &M);
		if(N < 1 || M > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || M > MAX);
	
	printf("\n");

	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
		scanf_s("%f", &a[i][j]);
		}
		
	}

	//In mang
	printf("\nMang ban dau la:\n\n");
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%0.3f  ", a[i][j]);
		}
		printf("\n\n");
	}


	printf("\n");
	
	//Xu ly de
	int count = 0;
	float tong = 0, avg;
	
	for(int i = 0; i < N; i++)
	{

		for(int j = 0; j < M; j++)
		{
			if(a[i][j] > 0)
			{
				count++;
				tong += a[i][j];
			}
		}
	}
	
	//printf("\n%f, %d", tong, count);
	
	avg = tong / count;

	printf("\nTrung binh cong cac so duong trong ma tran la: %0.4f.", avg);
	
	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, M;
float a[MAX][MAX];

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
	//Do dai dong
	do
	{
		printf("\nNhap so dong: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Do dai cot
	do
	{
		printf("\nNhap so cot: ");
		scanf_s("%d", &M);
		if(N < 1 || M > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || M > MAX);
	
	printf("\n");

	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf_s("%f", &a[i][j]);
		}	
	}
}

void xuat()
{
	//In mang
	printf("\nMang ban dau la:\n\n");
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%0.3f  ", a[i][j]);
		}
		printf("\n\n");
	}
}
void Xuly()
{
	int count = 0;
	float tong = 0, avg;

	for(int i = 0; i < N; i++)
	{

		for(int j = 0; j < M; j++)
		{
			if(a[i][j] > 0)
			{
				count++;
				tong += a[i][j];
			}
		}
	}
	
	//printf("\n%f, %d", tong, count);
	
	avg = tong / count;

	printf("\nTrung binh cong cac so duong trong ma tran la: %0.4f.", avg);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[MAX][MAX], int& N, int& M);

void xuat(float a[MAX][MAX], int N, int M);

void Xuly(float a[MAX][MAX], int N, int M);

int main()
{
	int N, M;
	float a[MAX][MAX];

	nhap(a, N, M);
	xuat(a, N, M);

	printf("\n");

	//Xu ly de
	Xuly(a, N, M);

	_getch();
	return 0;
}

void nhap(float a[MAX][MAX], int& N, int& M)
{
	//Do dai dong
	do
	{
		printf("\nNhap so dong: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Do dai cot
	do
	{
		printf("\nNhap so cot: ");
		scanf_s("%d", &M);
		if(N < 1 || M > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || M > MAX);
	
	printf("\n");

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf_s("%f", &a[i][j]);
		}
	}
}

void xuat(float a[MAX][MAX], int N, int M)
{
	//In mang
	printf("\nMang ban dau la:\n\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%0.3f  ", a[i][j]);
		}
		printf("\n\n");
	}
}

void Xuly(float a[MAX][MAX], int N, int M)
{
	int count = 0;
	float tong = 0, avg;
	
	for(int i = 0; i < N; i++)
	{

		for(int j = 0; j < M; j++)
		{
			if(a[i][j] > 0)
			{
				count++;
				tong += a[i][j];
			}
		}
	}
	
	//printf("\n%f, %d", tong, count);
	
	avg = tong / count;

	printf("\nTrung binh cong cac so duong trong ma tran la: %0.4f.", avg);
}
*/
