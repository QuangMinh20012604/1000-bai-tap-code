#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm sắp xếp ma trận các số thực tăng dần từ trên xuống dưới và từ trái sang phải.


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
	int count = 0, temp, b[MAX*MAX];

	//chuyen tu mang 2 chieu sang mang 1 chieu
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			b[count] = a[i][j];
			count++;
		}
	}

	printf("\nMang 1 chieu ban dau:\n");

	for(int i = 0; i < count; i++)	
	{
		printf("%d  ", b[i]);
	}

	//sap xep mang 1 chieu
	for(int i = 0; i < count; i++)	
	{
		for(int j = i+1; j < count; j++)
		{
			if(b[j]< b[i])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	printf("\nMang 1 chieu sau khi xep:\n");

	for(int i = 0; i < count; i++)	
	{
		printf("%d  ", b[i]);
	}

	//chuyen tu mang 1 chieu sang mang 2 chieu
	count = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			a[i][j] = b[count];
			count++;
		}
		
	}

	printf("\nMang 1 chieu sau khi xep:\n");

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%4d  ", a[i][j]);
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

//Sai mang phu
void Xuly()
{
	int count = 0, temp, b[MAX*MAX];

	//chuyen tu mang 2 chieu sang mang 1 chieu
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			b[count] = a[i][j];
			count++;
		}
	}

	printf("\nMang 1 chieu ban dau:\n");

	for(int i = 0; i < count; i++)	
	{
		printf("%d  ", b[i]);
	}

	//sap xep mang 1 chieu
	for(int i = 0; i < count; i++)	
	{
		for(int j = i+1; j < count; j++)
		{
			if(b[j]< b[i])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	printf("\nMang 1 chieu sau khi xep:\n");

	for(int i = 0; i < count; i++)	
	{
		printf("%d  ", b[i]);
	}

	//chuyen tu mang 1 chieu sang mang 2 chieu
	count = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			a[i][j] = b[count];
			count++;
		}
		
	}

	printf("\nMang 1 chieu sau khi xep:\n");

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%4d  ", a[i][j]);
		}
		printf("\n\n");
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
	int count = 0, temp, b[MAX*MAX];

	//chuyen tu mang 2 chieu sang mang 1 chieu
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			b[count] = a[i][j];
			count++;
		}
	}

	printf("\nMang 1 chieu ban dau:\n");

	for(int i = 0; i < count; i++)	
	{
		printf("%d  ", b[i]);
	}

	//sap xep mang 1 chieu
	for(int i = 0; i < count; i++)	
	{
		for(int j = i+1; j < count; j++)
		{
			if(b[j]< b[i])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	printf("\nMang 1 chieu sau khi xep:\n");

	for(int i = 0; i < count; i++)	
	{
		printf("%d  ", b[i]);
	}

	//chuyen tu mang 1 chieu sang mang 2 chieu
	count = 0;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			a[i][j] = b[count];
			count++;
		}
		
	}

	printf("\nMang 1 chieu sau khi xep:\n");

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
		printf("%4d  ", a[i][j]);
		}
		printf("\n\n");
	}
}
*/
