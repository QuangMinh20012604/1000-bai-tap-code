#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các giá trị cực đại trong mảng một chiều các số thực. một
//phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận.


///khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX];

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
		scanf_s("%f", &a[i]);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\nCac gia tri cuc dai trong mang la: \n");
	
	//Xu ly de
	int count = 0;
	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] > a[i+1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}

		else if(i == N - 1)
		{
			if(a[i] > a[i-1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}

		else
		{
			if(a[i] > a[i - 1] && a[i] > a[i + 1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}
	}

	if(count == 0)	//xay ra khi cac phan tu cua mang deu bang nhau
		printf("\nKhong ton tai gia tri cuc dai nao trong mang.");

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX];

void nhap();
void xuat();
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\n");

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
		scanf_s("%f", &a[i]);
	}
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void SoThoaManDieuKien()
{
	int count = 0;
	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] > a[i+1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}

		else if(i == N - 1)
		{
			if(a[i] > a[i-1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}

		else
		{
			if(a[i] > a[i - 1] && a[i] > a[i + 1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}
	}

	if(count == 0)	//xay ra khi cac phan tu cua mang deu bang nhau
		printf("\nKhong ton tai gia tri cuc dai nao trong mang.");
}
//

/*
//Test o visual
#define MAX 100



void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoThoaManDieuKien();

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);

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
		scanf_s("%f", &a[i]);
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void SoThoaManDieuKien(int a[], int N)
{
	int count = 0;
	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] > a[i+1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}

		else if(i == N - 1)
		{
			if(a[i] > a[i-1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}

		else
		{
			if(a[i] > a[i - 1] && a[i] > a[i + 1])
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}
	}

	if(count == 0)	//xay ra khi cac phan tu cua mang deu bang nhau
		printf("\nKhong ton tai gia tri cuc dai nao trong mang.");
}
*/