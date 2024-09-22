#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “giá trị dương nhỏ nhất” trong mảng các số thực
//(duongnhonhat). Nếu mảng không có giá trị dương thì trả về giá trị
//không dương là – 1.


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
		printf("%f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	float duongnhonhat = -1;

	for(int i = 0; i < N; i++)
	{
		
		if(a[i] > 0 && (duongnhonhat < 0 || a[i] < duongnhonhat))
		{
			duongnhonhat = a[i];
		}
	}

	if(duongnhonhat == -1)
	{
		printf("\n%0.f", duongnhonhat);
	}
	else
		printf("\nGia tri duong nho nhat la %0.3f.", duongnhonhat);

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

float DuongNhoNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	float duongnhonhat = DuongNhoNhat(a, N);

	printf("\n%0.3f", duongnhonhat);

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

float DuongNhoNhat(float a[], int N)
{
	float duongnhonhat = -1;

	for (int i = 0; i < N; i++)
	{

		if (a[i] > 0 && (duongnhonhat < 0 || a[i] < duongnhonhat))
		{
			duongnhonhat = a[i];
		}
	}

	return duongnhonhat;
}

*/


//
#define MAX 100

int N;
float a[MAX];

void nhap();

void xuat();

float DuongNhoNhat();

int main()
{

	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	float duongnhonhat = DuongNhoNhat();

	printf("\n%0.3f", duongnhonhat);

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

float DuongNhoNhat()
{
	float duongnhonhat = -1;

	for (int i = 0; i < N; i++)
	{

		if (a[i] > 0 && (duongnhonhat < 0 || a[i] < duongnhonhat))
		{
			duongnhonhat = a[i];
		}
	}

	return duongnhonhat;
}
//