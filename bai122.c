#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm giá trị lớn nhất trong mảng một chiều các số thực.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, vitri = 0;;
	double a[MAX], a_max;

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

	a_max = a[0];

	for(int i = 0; i < N; i++)
	{
		if(a[i] > a_max)	
		{
			a_max = a[i];
			vitri = i + 1;
		}
	}

	printf("Gia tri lon nhat trong mang la %0.2lf, o vi tri thu %d trong mang.", a_max, vitri);

	_getch();
	return 0;

}
*/

//sai ham
//
#define MAX 100

void MaxInArray(double a[], int N);

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

	MaxInArray(a, N);

	_getch();
	return 0;

}

void MaxInArray(double a[], int N)
{
	int vitri = 0;
	double a_max = a[0];

	for(int i = 0; i < N; i++)
	{
		if(a[i] > a_max)	
		{
			a_max = a[i];
			vitri = i + 1;
		}
	}

	printf("Gia tri lon nhat trong mang la %0.2lf, o vi tri thu %d trong mang.", a_max, vitri);

}
//