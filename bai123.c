#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm tìm một vị trí mà giá trị tại vị trí đó là một giá trị nhỏ nhất
//trong mảng một chiều các số nguyên.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, vitri = 0;
	double a[MAX], a_min = a[0];;

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)	printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%lf", &a[i]);
	}


	for (int i = 0; i < N; i++)
	{
		if( a[i] < a_min)	
		{
			a_min = a[i];
			vitri = i + 1;
		}
	}

	printf("Gia tri nho nhat trong mang la %0.2lf.\nO vi tri thu %d trong mang.", a_min, vitri);

	_getch();
	return 0;
}
*/

//sai ham

#define MAX 100

void Vitri_GiaTriMin(double a[], int N);

int main()
{
	int N;
	double a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)	printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%lf", &a[i]);
	}

	Vitri_GiaTriMin(a, N);
	_getch();
	return 0;
}

void Vitri_GiaTriMin(double a[], int N)
{
	int vitri = 0;
	double a_min = a[0];

	for (int i = 0; i < N; i++)
	{
		if( a[i] < a_min)	
		{
			a_min = a[i];
			vitri = i + 1;
		}
	}

	printf("Gia tri nho nhat trong mang la %0.2lf.\nO vi tri thu %d trong mang.", a_min, vitri);
}


