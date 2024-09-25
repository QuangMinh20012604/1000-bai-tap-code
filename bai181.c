#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên. Hãy viết hàm liệt kê các giá trị
//chẵn có ít nhất một lân cận cũng là giá trị chẵn.


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

	printf("\n\n");
	
	//Xu ly de
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] % 2 == 0 && a[i + 1] % 2 == 0)
			{
				printf("%d  ", a[i]);
				count++;
			}
		}
		else if(i == N - 1)
		{
			if(a[i] % 2 == 0 && a[i - 1] % 2 == 0)
			{
				printf("%d  ", a[i]);
				count++;
			}
		}		
		else if((a[i] % 2 == 0) && (a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0))
		{
			printf("%d  ", a[i]);
			count++;
		}
	}

	if(count == 0)
	{
		printf("Khong ton gia tri nao thoa man dieu kien.");
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
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\n\n");

	//Xu ly de
	SoThoaManDieuKien();
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
void SoThoaManDieuKien()
{
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] % 2 == 0 && a[i + 1] % 2 == 0)
			{
				printf("%d  ", a[i]);
				count++;
			}
		}
		else if(i == N - 1)
		{
			if(a[i] % 2 == 0 && a[i - 1] % 2 == 0)
			{
				printf("%d  ", a[i]);
				count++;
			}
		}		
		else if((a[i] % 2 == 0) && (a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0))
		{
			printf("%d  ", a[i]);
			count++;
		}
	}

	if(count == 0)
	{
		printf("Khong ton gia tri nao thoa man dieu kien.");
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoThoaManDieuKien(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);
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
void SoThoaManDieuKien(int a[], int N)
{
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			if (a[i] % 2 == 0 && a[i + 1] % 2 == 0)
			{
				printf("%d  ", a[i]);
				count++;
			}
		}
		else if (i == N - 1)
		{
			if (a[i] % 2 == 0 && a[i - 1] % 2 == 0)
			{
				printf("%d  ", a[i]);
				count++;
			}
		}
		else if ((a[i] % 2 == 0) && (a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0))
		{
			printf("%d  ", a[i]);
			count++;
		}
	}

	if (count == 0)
	{
		printf("Khong ton gia tri nao thoa man dieu kien.");
	}
}
*/