#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính trung bình cộng các số dương trong mảng một chiều các số thực
// (trungbinhcong)


//khong sai ham

//
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

	printf("\nCac so duong trong mang la:\n");
	
	//Xu ly de
	int count = 0, S = 0;
	float trungbinhcong = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			S += a[i];
			count++;
			
			printf("%0.3f  ", a[i]);
		}
	}

	if(count != 0)
	{
		trungbinhcong = (float) S / count;
	}

	printf("\nTrung binh cong cac so duong trong mang la: %0.3f.", trungbinhcong);

	_getch();
	return 0;
}
//

//sai ham

/*
#define MAX 100

int N;
float a[MAX];

void nhap();
void xuat();
float Xuly();

int main()
{
	nhap();
	xuat();

	printf("\nCac so duong trong mang la:\n");

	//Xu ly de
	float trungbinhcong = Xuly();

	printf("\nTrung binh cong cac so duong trong mang la: %0.3f.", trungbinhcong);

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
void Xuly()s
{
	int count = 0;
	float S = 0, trungbinhcong = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			S += a[i];
			count++;
			
			printf("%0.3f  ", a[i]);
		}
	}

	if(count != 0)
	{
		trungbinhcong = (float) S / count;
	}
}
*/

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

float Xuly(float a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac so duong trong mang la:\n");

	//Xu ly de
	float trungbinhcong = Xuly(a, N);

	printf("\nTrung binh cong cac so duong trong mang la: %0.3f.", trungbinhcong);

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

float Xuly(float a[], int N)
{
	int count = 0;
	float S = 0, trungbinhcong = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			S += a[i];
			count++;
			
			printf("%0.3f  ", a[i]);
		}
	}

	if(count != 0)
	{
		trungbinhcong = S / count;
	}
}
*/