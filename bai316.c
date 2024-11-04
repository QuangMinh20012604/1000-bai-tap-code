#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm kiểm tra trong ma trận các số nguyên có tồn tại giá trị chẵn
//nhỏ hơn 2004 hay không?


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
	int check_chan = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if( (a[i][j] % 2 == 0) && a[i][j] < 2004)
			{
				check_chan = 1;
				break;
			}
		}
		
	}

	if(check_chan == 0)
	{
		printf("\nKhong ton tai gia tri chan nao nho hon 2004 trong mang.");
	}
	else
	{
		printf("\nCo ton tai gia tri chan nho hon 2004 trong mang.");
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
	int check_chan = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if( (a[i][j] % 2 == 0) && a[i][j] < 2004)
			{
				check_chan = 1;
				break;
			}
		}
		
	}

	if(check_chan == 0)
	{
		printf("\nKhong ton tai gia tri chan nao nho hon 2004 trong mang.");
	}
	else
	{
		printf("\nCo ton tai gia tri chan nho hon 2004 trong mang.");
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
	int check_chan = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if( (a[i][j] % 2 == 0) && a[i][j] < 2004)
			{
				check_chan = 1;
				break;
			}
		}
		
	}

	if(check_chan == 0)
	{
		printf("\nKhong ton tai gia tri chan nao nho hon 2004 trong mang.");
	}
	else
	{
		printf("\nCo ton tai gia tri chan nho hon 2004 trong mang.");
	}
}
*/


