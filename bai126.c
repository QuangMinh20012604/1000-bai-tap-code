#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm tính tổng các giá trị âm trong mảng một chiều các số thực.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX], S = 0;

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\n");

	for(int i = 0; i < N; i++)
	{
		float temp = a[i];
		if(temp < 0)
		{
			printf("%0/4f ", temp);
			S += temp;
		}
	}

	printf("\n\nTong S = %0.4f", S);

	_getch();
	return 0;
}
*/

//sai ham


#define MAX 100

void Tong(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	printf("\n");

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	
	Tong(a, N);

	_getch();
	return 0;
}

void Tong(float a[], int N)
{
	float S = 0;

	for(int i = 0; i < N; i++)
	{
		float temp = a[i];
		if(temp < 0)
		{
			printf("%0.4f ", temp);
			S += temp;
		}
	}

	printf("\n\nTong S = %0.4f", S);
}