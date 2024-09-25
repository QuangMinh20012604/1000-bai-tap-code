#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị
//trong mảng có ít nhất một lân cận trái dấu với nó.


//khong sai ham

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


	printf("\n");
	
	//Xu ly de
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] * a[i + 1] < 0)
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}
		else if(i == N - 1)
		{
			if(a[i] * a[i - 1] < 0)
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}		
		else if( (a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0) )
		{
			printf("%0.3f  ", a[i]);
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
			if(a[i] * a[i + 1] < 0)
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}
		else if(i == N - 1)
		{
			if(a[i] * a[i - 1] < 0)
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}		
		else if( (a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0) )
		{
			printf("%0.3f  ", a[i]);
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

void nhap(float a[], int N);
void xuat(float a[], int N);
void SoThoaManDieuKien(float a[], int N);

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

void nhap(float a[], int &N)
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

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void SoThoaManDieuKien(float a[], int N)
{
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] * a[i + 1] < 0)
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}
		else if(i == N - 1)
		{
			if(a[i] * a[i - 1] < 0)
			{
				printf("%0.3f  ", a[i]);
				count++;
			}
		}		
		else if( (a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0) )
		{
			printf("%0.3f  ", a[i]);
			count++;
		}
	}

	if(count == 0)
	{
		printf("Khong ton gia tri nao thoa man dieu kien.");
	}
}
*/