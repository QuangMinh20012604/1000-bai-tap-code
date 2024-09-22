#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “số chẵn cuối cùng” trong mảng một chiều các số nguyên
//(chancuoi). Nếu mảng không có giá trị chẵn thì trả về giá trị -1


//khong sai ham

////////////////Tim tu vi tri 1 den vi tri N
/*
#define MAX 100

int main()
{
	int N, a[MAX], chancuoi = -1;
	
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

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2) == 0)	chancuoi = a[i];

	}

	printf("\n");

	printf("%d  ", chancuoi);

	_getch();
	return 0;
}
*/

////////////////Tim tu vi tri N den vi tri i
/*
#define MAX 100

int main()
{
	int N, a[MAX], chancuoi = -1;

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

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2) == 0)	chancuoi = a[i];

	}

	printf("\n");

	printf("%d  ", chancuoi);

	_getch();
	return 0;
}
*/

//sai ham

////////////////Tim tu vi tri 1 den vi tri N
/*
//test bang visual
#define MAX 100

void nhap(int a[], int& N);
int SoChanCuoi(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);

	int chancuoi = SoChanCuoi(a, N);
	
	printf("\n");
	
	printf("%d  ", chancuoi);

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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}

int SoChanCuoi(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	//Xu ly de
	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2) == 0)
			return a[i];
	}
	return -1;
}
*/

////////////////Tim tu vi tri N den vi tri i
/*
#define MAX 100

void nhap(int a[], int& N);
int SoChanCuoi(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);

	int chancuoi = SoChanCuoi(a, N);
	
	printf("\n");
	
	printf("%d  ", chancuoi);

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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}

int SoChanCuoi(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	//Xu ly de
	for (int i = N - 1; i >= 0; i++)
	{
		if ((a[i] % 2) == 0)
		{
			return a[i];
			break;
		}
	}
	return -1;
}
*/


#define MAX 100

int N, a[MAX];

void nhap();
int SoChanCuoi();

int main()
{
	nhap();

	int chancuoi = SoChanCuoi();
	
	printf("\n");
	
	printf("%d  ", chancuoi);

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
		scanf_s("%d", &a[i]);
	}
}

int SoChanCuoi()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	//Xu ly de
	for (int i = N - 1; i >= 0; i--)
	{
		if ((a[i] % 2) == 0)
		{
			return a[i];
			break;
		}
	}
	return -1;
}
