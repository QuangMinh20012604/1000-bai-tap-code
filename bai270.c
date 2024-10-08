#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình thực hiện các yêu cầu sau: Nhập mảng n số nguyên
//từ bàn phím sao cho khi nhập xong các phần tử trong mảng được sắp
//theo thứ tự tăng dần (nhapbaotoan)


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
		for(int j = 0; j < i; j++)
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				//gan k bang vi tri lon nhat hien co i. tru dan ve j
				for(int k = i; k > j; k--)
				{
					a[k] = a[k - 1];
				}
				a[j] = temp;
			}
		}
	}

	//In mang
	printf("\nMang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
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

int main()
{
	nhap();
	xuat();

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
		for(int j = 0; j < i; j++)
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				//gan k bang vi tri lon nhat hien co i. tru dan ve j
				for(int k = i; k > j; k--)
				{
					a[k] = a[k - 1];
				}
				a[j] = temp;
			}
		}
	}
}

void xuat()
{
	//In mang
	printf("\nMang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

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
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
		for(int j = 0; j < i; j++)
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				//gan k bang vi tri lon nhat hien co i. tru dan ve j
				for(int k = i; k > j; k--)
				{
					a[k] = a[k - 1];
				}
				a[j] = temp;
			}
		}
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\nMang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/