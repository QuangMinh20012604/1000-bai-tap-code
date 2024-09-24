#include<stdio.h>
#include<conio.h>
#include<math.h>


//(*) Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng
//khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a,b)
//trong mảng thỏa điều kiện a <= b


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
void lietkecap();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	lietkecap();

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

void lietkecap()
{
	for(int i = 0; i < N; i++)
	{
		for(int j = i +1; j < N; j++)
		{
			if(a[i] < a[j])
			{
				printf("\n(%0.3f; %0.3f)", a[i], a[j]);
			}
			else if(a[i] > a[j])
			{
				printf("\n(%0.3f; %0.3f)", a[j], a[i]);
			}
		}
		printf("\n");
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);
void xuat(float a[], int N);
void lietkecap(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a,N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	lietkecap(a, N);

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

void lietkecap(float a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (a[i] < a[j])
			{
				printf("\n(%0.3f; %0.3f)", a[i], a[j]);
			}
			else if (a[i] > a[j])
			{
				printf("\n(%0.3f; %0.3f)", a[j], a[i]);
			}
		}
		printf("\n");
	}
}
*/