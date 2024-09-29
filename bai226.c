#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy xác định số lượng các phần tử kề nhau mà cả hai đều chẵn
// (demkechan)


///khong sai ham

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

	printf("\nCac phan tu ke nhau ma ca hai deu chan trong mang la:\n");
	
	//Xu ly de
	int demkechan = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if((a[i] % 2 == 0) && (a[i + 1] % 2 == 0))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
		else if(i == N - 1)
		{
			if((a[i] % 2 == 0) && (a[i - 1] % 2 == 0))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
		else
		{
			if((a[i] % 2 == 0) && ((a[i - 1] % 2 == 0) || (a[i + 1] % 2 == 0)))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
	}

	printf("\nSo luong cac phan tu ke nhau ma ca hai deu chan trong mang la: %d.", demkechan);

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
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\nCac phan tu ke nhau ma ca hai deu chan trong mang la:\n");

	//Xu ly de
	Xuly();

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
void Xuly()
{
	int demkechan = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if((a[i] % 2 == 0) && (a[i + 1] % 2 == 0))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
		else if(i == N - 1)
		{
			if((a[i] % 2 == 0) && (a[i - 1] % 2 == 0))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
		else
		{
			if((a[i] % 2 == 0) && ((a[i - 1] % 2 == 0) || (a[i + 1] % 2 == 0)))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
	}

	printf("\nSo luong cac phan tu ke nhau ma ca hai deu chan trong mang la: %d.", demkechan);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac phan tu ke nhau ma ca hai deu chan trong mang la:\n");

	//Xu ly de
	Xuly(a, N);

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

void Xuly(int a[], int N)
{
	int demkechan = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if((a[i] % 2 == 0) && (a[i + 1] % 2 == 0))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
		else if(i == N - 1)
		{
			if((a[i] % 2 == 0) && (a[i - 1] % 2 == 0))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
		else
		{
			if((a[i] % 2 == 0) && ((a[i - 1] % 2 == 0) || (a[i + 1] % 2 == 0)))
			{
				printf("%d  ", a[i]);
				demkechan++;
			}
		}
	}

	printf("\nSo luong cac phan tu ke nhau ma ca hai deu chan trong mang la: %d.", demkechan);
}
*/