#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy “dịch phải xoay vòng” k lần các phần tử trong mảng (dichphai).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX], k;

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
	}

	printf("\nNhap so lan dich phai k: ");
	scanf_s("%d", &k);

	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int dichphai = k;
	
	while(dichphai--)
	{
		int temp = a[N - 1];
		
		for(int i = N - 1; i > 0; i--)
		{
			a[i] = a[i - 1];
		}

		a[0] = temp;
	}

	printf("\nMang sau khi dich phai xoay vong %d lan:\n", k);
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

int N, a[MAX], k;

void nhap();
void xuat();
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	Xuly();

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
	}

	printf("\nNhap so lan dich phai k: ");
	scanf_s("%d", &k);
}

void xuat()
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	int dichphai = k;
	
	while(dichphai--)
	{
		int temp = a[N - 1];
		
		for(int i = N - 1; i > 0; i--)
		{
			a[i] = a[i - 1];
		}

		a[0] = temp;
	}

	printf("\nMang sau khi dich phai xoay vong %d lan:\n", k);
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N, int &k);

void xuat(int a[], int N);

void Xuly(int a[], int N, int k);

int main()
{
	int N, a[MAX] , k;
	
	nhap(a, N, k);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N, k);

	_getch();
	return 0;
}

void nhap(int a[], int& N, int &k)
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
		scanf_s("%d", &a[i]);
	}

	printf("\nNhap so lan dich phai k: ");
	scanf_s("%d", &k);
}

void xuat(int a[], int N)
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[], int N, int k)
{
	int dichphai = k;
	
	while(dichphai--)
	{
		int temp = a[N - 1];
		
		for(int i = N - 1; i > 0; i--)
		{
			a[i] = a[i - 1];
		}

		a[0] = temp;
	}

	printf("\nMang sau khi dich phai xoay vong %d lan:\n", k);
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/