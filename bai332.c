#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tổng các giá trị lẻ trên một cột của ma trận các số nguyên.



//khong sai ham

/*
#define MAX 100

int main()
{
	int N, M, a[MAX][MAX];

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
		scanf_s("%d", &a[i][j]);
		}
		
	}

	//In mang
	printf("\nMang ban dau la:\n\n");
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%d  ", a[i][j]);
		}
		printf("\n\n");
	}


	printf("\n");
	
	//Xu ly de
	for(int j = 0; j < M; j++)
	{
		int S = 0;
		for(int i = 0; i < N; i++)
		{
			if(a[i][j] % 2 != 0)
			{
				S += a[i][j];
			}
		}

		if(S == 0)
		{
			printf("\nKhong ton tai so le nao o cot thu %d.", j+1);
		}
		else
		{
			printf("\nTong cac gia tri le o cot thu %d la: %d.", j+1, S);
		}
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, M, a[MAX][MAX];

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
			scanf_s("%d", &a[i][j]);
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
		printf("%d  ", a[i][j]);
		}
		printf("\n\n");
	}
}
void Xuly()
{
	for(int j = 0; j < M; j++)
	{
		int S = 0;
		for(int i = 0; i < N; i++)
		{
			if(a[i][j] % 2 != 0)
			{
				S += a[i][j];
			}
		}

		if(S == 0)
		{
			printf("\nKhong ton tai so le nao o cot thu %d.", j+1);
		}
		else
		{
			printf("\nTong cac gia tri le o cot thu %d la: %d.", j+1, S);
		}
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[MAX][MAX], int& N, int& M);

void xuat(int a[MAX][MAX], int N, int M);

void Xuly(int a[MAX][MAX], int N, int M);

int main()
{
	int N, M, a[MAX][MAX];

	nhap(a, N, M);
	xuat(a, N, M);

	printf("\n");

	//Xu ly de
	Xuly(a, N, M);

	_getch();
	return 0;
}

void nhap(int a[MAX][MAX], int& N, int& M)
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
			scanf_s("%d", &a[i][j]);
		}
	}
}

void xuat(int a[MAX][MAX], int N, int M)
{
	//In mang
	printf("\nMang ban dau la:\n\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n\n");
	}
}

void Xuly(int a[MAX][MAX], int N, int M)
{
	for(int j = 0; j < M; j++)
	{
		int S = 0;
		for(int i = 0; i < N; i++)
		{
			if(a[i][j] % 2 != 0)
			{
				S += a[i][j];
			}
		}

		if(S == 0)
		{
			printf("\nKhong ton tai so le nao o cot thu %d.", j+1);
		}
		else
		{
			printf("\nTong cac gia tri le o cot thu %d la: %d.", j+1, S);
		}
	}
}
*/
