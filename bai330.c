#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy biến đổi ma trận bằng cách thay các giá trị bằng giá trị nguyên gần nó nhất.


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
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			float phan_thapphan = a[i][j] - (int)a[i][j];

			if((phan_thapphan < 0.5 && phan_thapphan >= 0) || (phan_thapphan > -0.5 && phan_thapphan <= 0))
			{
				a[i][j] = (int)a[i][j];
			}
			else if(phan_thapphan >= 0.5 && phan_thapphan < 1)
			{
				a[i][j] = (int)a[i][j] + 1;
			}
			else if(phan_thapphan <= -0.5 && phan_thapphan > -1)
			{
				a[i][j] = (int)a[i][j] - 1;
			}
		}
	}

	printf("\nMang sau khi bien doi la:\n\n");
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%0.3f  ", a[i][j]);
		}
		printf("\n\n");
	}

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
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			float phan_thapphan = a[i][j] - (int)a[i][j];

			if((phan_thapphan < 0.5 && phan_thapphan >= 0) || (phan_thapphan > -0.5 && phan_thapphan <= 0))
			{
				a[i][j] = (int)a[i][j];
			}
			else if(phan_thapphan >= 0.5 && phan_thapphan < 1)
			{
				a[i][j] = (int)a[i][j] + 1;
			}
			else if(phan_thapphan <= -0.5 && phan_thapphan > -1)
			{
				a[i][j] = (int)a[i][j] - 1;
			}
		}
	}

	printf("\nMang sau khi bien doi la:\n\n");
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%0.3f  ", a[i][j]);
		}
		printf("\n\n");
	}
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
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			float phan_thapphan = a[i][j] - (int)a[i][j];

			if((phan_thapphan < 0.5 && phan_thapphan >= 0) || (phan_thapphan > -0.5 && phan_thapphan <= 0))
			{
				a[i][j] = (int)a[i][j];
			}
			else if(phan_thapphan >= 0.5 && phan_thapphan < 1)
			{
				a[i][j] = (int)a[i][j] + 1;
			}
			else if(phan_thapphan <= -0.5 && phan_thapphan > -1)
			{
				a[i][j] = (int)a[i][j] - 1;
			}
		}
	}

	printf("\nMang sau khi bien doi la:\n\n");
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%0.3f  ", a[i][j]);
		}
		printf("\n\n");
	}
}
*/