#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn có trong mảng
// các số nguyên (tongdauchan).


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
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\nCac gia tri co chu so dau tien la chu so chan trong mang la:\n");
	
	//Xu ly de
	int sodauchan, tongdauchan = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == 0)
		{
			sodauchan = 0;
		}
		else
		{
			for(int temp = a[i]; temp != 0; temp /= 10)
			{
					sodauchan = temp % 10;
			}
		}
		if(sodauchan % 2 == 0)
		{
			tongdauchan += a[i];
			printf("%d  ", a[i]);
		}
	}

	printf("\nTong cac gia tri co chu so dau tien la chu so chan trong mang la: S = %d.", tongdauchan);

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
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\nCac gia tri co chu so dau tien la chu so chan trong mang la:\n");

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
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	int sodauchan, tongdauchan = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == 0)
		{
			sodauchan = 0;
		}
		else
		{
			for(int temp = a[i]; temp != 0; temp /= 10)
			{
					sodauchan = temp % 10;
			}
		}
		if(sodauchan % 2 == 0)
		{
			tongdauchan += a[i];
			printf("%d  ", a[i]);
		}
	}

	printf("\nTong cac gia tri co chu so dau tien la chu so chan trong mang la: S = %d.", tongdauchan);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac gia tri co chu so dau tien la chu so chan trong mang la:\n");

	//Xu ly de
	Xuly(a, N);

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

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[], int N)
{
	int sodauchan, tongdauchan = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == 0)
		{
			sodauchan = 0;
		}
		else
		{
			for(int temp = a[i]; temp != 0; temp /= 10)
			{
					sodauchan = temp % 10;
			}
		}
		if(sodauchan % 2 == 0)
		{
			tongdauchan += a[i];
			printf("%d  ", a[i]);
		}
	}

	printf("\nTong cac gia tri co chu so dau tien la chu so chan trong mang la: S = %d.", tongdauchan);
}
*/