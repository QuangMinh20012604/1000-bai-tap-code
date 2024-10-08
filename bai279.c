#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy xóa tất cả các phần tử có tần suất xuất hiện trong mảng nhiều hơn
//một lần (xoatrungtatcar).


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
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}

	printf("\n");
	
	//Xu ly de
	
	for(int i = 0; i < N; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(a[j] == a[i])
			{
				for(int k = j; k < N; k++)
				{
					a[k] = a[k+1];
				}
				N--;
				j--;
			}
		}
	}

	printf("\nMang sau khi xoa phan tu trung:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}

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

	printf("\n");

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
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	for(int i = 0; i < N; i++)
	{
		int count = 1;
		for(int j = i + 1; j < N; j++)
		{
			if(a[j] == a[i])
				count++;
		}

		if(count > 1)
		{
			int soxoa = a[i];

			for(int j = i; j < N; j++)
			{
				if(a[j] == soxoa)
				{
					for(int k = j; k < N; k++)
					{
						a[k] = a[k+1];
					}
					N--;
					j--;
				}
			}
			i--;
		}

	}

	printf("\nMang sau khi xoa cac phan tu co tan suat xuat hien nhieu hon 1:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
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

	printf("\n");

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
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[], int i)
{
	for(int i = 0; i < N; i++)
	{
		int count = 1;
		for(int j = i + 1; j < N; j++)
		{
			if(a[j] == a[i])
				count++;
		}

		if(count > 1)
		{
			int soxoa = a[i];

			for(int j = i; j < N; j++)
			{
				if(a[j] == soxoa)
				{
					for(int k = j; k < N; k++)
					{
						a[k] = a[k+1];
					}
					N--;
					j--;
				}
			}
			i--;
		}

	}

	printf("\nMang sau khi xoa cac phan tu co tan suat xuat hien nhieu hon 1:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/