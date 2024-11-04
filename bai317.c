#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm đếm số lượng số nguyên tố trong ma trận các số nguyên.


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
	int check_ngto, count_ngto = 0;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			check_ngto = 1;
			if (a[i][j] < 2)
			{
				check_ngto = 0;
			}
			else
			{
				if (a[i][j] == 2)
				{
					check_ngto = 1;

				}
				else if (a[i][j] > 2)
				{
					for (int k = 2; k < a[i][j]; k++)
					{
						if (a[i][j] % k == 0)
						{
							check_ngto = 0;
							break;
						}
					}
				}
			}

			if (check_ngto == 1)
			{
				count_ngto++;
			}
		}
	}

	printf("\nSo luong so nguyen to co trong mang la: %d.", count_ngto);
	
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
	int check_ngto, count_ngto = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			check_ngto = 1;
			if (a[i][j] < 2)
			{
				check_ngto = 0;
			}
			else
			{
				if (a[i][j] == 2)
				{
					check_ngto = 1;

				}
				else if (a[i][j] > 2)
				{
					for (int k = 2; k < a[i][j]; k++)
					{
						if (a[i][j] % k == 0)
						{
							check_ngto = 0;
							break;
						}
					}
				}
			}

			if (check_ngto == 1)
			{
				count_ngto++;
			}
		}
	}

	printf("\nSo luong so nguyen to co trong mang la: %d.", count_ngto);	
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
	int check_ngto, count_ngto = 0;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			check_ngto = 1;
			if (a[i][j] < 2)
			{
				check_ngto = 0;
			}
			else
			{
				if (a[i][j] == 2)
				{
					check_ngto = 1;

				}
				else if (a[i][j] > 2)
				{
					for (int k = 2; k < a[i][j]; k++)
					{
						if (a[i][j] % k == 0)
						{
							check_ngto = 0;
							break;
						}
					}
				}
			}

			if (check_ngto == 1)
			{
				count_ngto++;
			}
		}
	}

	printf("\nSo luong so nguyen to co trong mang la: %d.", count_ngto);
}
*/
