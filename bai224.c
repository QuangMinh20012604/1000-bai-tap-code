#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng “số hoàn thiện” có trong mảng một chiều các số
// thực (demhoanthien).


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


	printf("\nSo hoan thien co trong mang la:\n");
	
	//Xu ly de
	int demhoanthien = 0, S = 0;

	for(int i = 0; i < N; i++)
	{
		S = 0;

		if(a[i] > 0)
		{
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
				{
					S += j;
				}
			}
			
			if(S == a[i])
			{
				printf("%d  ", a[i]);
				demhoanthien++;
			}
		}
	}

	printf("\n\nSo luong so hoan thien co trong mang la: %d.", demhoanthien);

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

	printf("\nSo hoan thien co trong mang la:\n");

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
	int demhoanthien = 0, S = 0;

	for(int i = 0; i < N; i++)
	{
		S = 0;

		if(a[i] > 0)
		{
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
				{
					S += j;
				}
			}
			
			if(S == a[i])
			{
				printf("%d  ", a[i]);
				demhoanthien++;
			}
		}
	}

	printf("\n\nSo luong so hoan thien co trong mang la: %d.", demhoanthien);
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

	printf("\nSo hoan thien co trong mang la:\n");

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
	int demhoanthien = 0, S = 0;

	for(int i = 0; i < N; i++)
	{
		S = 0;
		if(a[i] > 0)
		{
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
				{
					S += j;
				}
			}
			
			if(S == a[i])
			{
				printf("%d  ", a[i]);
				demhoanthien++;
			}
		}
	}

	printf("\n\nSo luong so hoan thien co trong mang la: %d.", demhoanthien);
}
*/
