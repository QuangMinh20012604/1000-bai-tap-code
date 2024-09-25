#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các vị trí mà giá trị đó là số nguyên tố trong mảng một
//chiều các số nguyên (lkvitringuyento).


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


	printf("\nCac so nguyen to co trong mang la:\n");
	
	//Xu ly de
	int count = 0, ngto = 0;

	for(int i = 0; i < N; i++)
	{
		count = 0;

		if(a[i] < 2)
		{
			count++;
		}
		else if(a[i] > 2)
		{
			for(int j = 2; j < a[i]; j ++)
			{
				if(a[i] % j == 0)
				{
					count++;
				}
			}
		}
		
		if(count == 0)
		{
			printf("%d, ",a[i]);
			ngto = 1;
		}
	}

	if(ngto == 0)
		printf("\nKhong ton tai so nguyento nao trong mang.");
	

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
void SoNguyenToThoaMan();

int main()
{
	nhap();
	xuat();

	printf("\nCac so nguyen to co trong mang la:\n");

	//Xu ly de
	SoNguyenToThoaMan();

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
void SoNguyenToThoaMan()
{
	int count = 0, ngto = 0;

	for(int i = 0; i < N; i++)
	{
		count = 0;

		if(a[i] < 2)
		{
			count++;
		}
		else if(a[i] > 2)
		{
			for(int j = 2; j < a[i]; j ++)
			{
				if(a[i] % j == 0)
				{
					count++;
				}
			}
		}
		
		if(count == 0)
		{
			printf("%d, ",a[i]);
			ngto = 1;
		}
	}

	if(ngto == 0)
		printf("\nKhong ton tai so nguyento nao trong mang.");
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoNguyenToThoaMan(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\nCac so nguyen to co trong mang la:\n");

	//Xu ly de
	SoNguyenToThoaMan(a, N);

	_getch();
	return 0;
}

void nhap(int a[], int &N)
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

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void SoNguyenToThoaMan(int a[], int N)
{
	int count = 0, ngto = 0;

	for(int i = 0; i < N; i++)
	{
		count = 0;

		if(a[i] < 2)
		{
			count++;
		}
		else if(a[i] > 2)
		{
			for(int j = 2; j < a[i]; j ++)
			{
				if(a[i] % j == 0)
				{
					count++;
				}
			}
		}
		
		if(count == 0)
		{
			printf("%d, ",a[i]);
			ngto = 1;
		}
	}

	if(ngto == 0)
		printf("\nKhong ton tai so nguyento nao trong mang.");
}
*/