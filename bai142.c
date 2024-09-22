#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “giá trị nhỏ nhất” trong mảng một chiều số thực (nhonhat).


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
	float nhonhat = a[0];
	for(int i = 0; i < N; i++)
	{
		if(a[i] < nhonhat)
			nhonhat = a[i];
	}

	printf("Gia tri nho nhat trong mang la %0.3f.", nhonhat);

	_getch();
	return 0;
}
*/

//sai ham

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void GiaTriNhoNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	GiaTriNhoNhat(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
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

void GiaTriNhoNhat(float a[], int N)
{
	float nhonhat = a[0];
	for (int i = 0; i < N; i++)
	{
		if (a[i] < nhonhat)
			nhonhat = a[i];
	}

	printf("Gia tri nho nhat trong mang la %0.3f.", nhonhat);
}

*/


//	
#define MAX 100

int N;
float a[MAX];

void nhap();

void xuat();

void GiaTriNhoNhat();

int main()
{

	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	GiaTriNhoNhat();

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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
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

void GiaTriNhoNhat()
{
	float nhonhat = a[0];
	for (int i = 0; i < N; i++)
	{
		if (a[i] < nhonhat)
			nhonhat = a[i];
	}

	printf("Gia tri nho nhat trong mang la %0.3f.", nhonhat);
}

//