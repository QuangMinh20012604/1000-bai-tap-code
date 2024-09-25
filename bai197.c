#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các giá trị trong mảng các số nguyên có chữ số đầu tiên là
//chữ số lẻ (lietkele).


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


	printf("\nCac so nguyen co chu so dau tien la chu so le trong mang la: ");
	
	//Xu ly de
	int lietkedaule, count_daule = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i];

		if(a[i] == 0)
		{
			count_daule = 0;
		}
		else
		{
			for(temp; temp != 0; temp /= 10)
			{
				lietkedaule = temp % 10;
			}

			if(lietkedaule % 2 != 0)
			{
				printf("%d  ", a[i]);
				count_daule++;
			}
		}
	}

	if(count_daule == 0)
		printf("\n\nKhong ton tai so nguyen co chu so dau tien la chu so le trong mang.");

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
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\nCac so nguyen co chu so dau tien la chu so le trong mang la: ");

	//Xu ly de
	SoThoaManDieuKien();

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
void SoThoaManDieuKien()
{
	int lietkedaule, count_daule = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i];
		
		if(a[i] == 0)
		{
			count_daule = 0;
		}
		else
		{
			for(temp; temp != 0; temp /= 10)
			{
				lietkedaule = temp % 10;
			}

			if(lietkedaule % 2 != 0)
			{
				printf("%d  ", a[i]);
				count_daule++;
			}
		}
	}

	if(count_daule == 0)
		printf("\n\nKhong ton tai so nguyen co chu so dau tien la chu so le trong mang.");
}
//

/*
//Test o visual
#define MAX 100



void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoThoaManDieuKien(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac so nguyen co chu so dau tien la chu so le trong mang la: ");

	//Xu ly de
	SoThoaManDieuKien(a, n);

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
void SoThoaManDieuKien(int a[], int N)
{
	int lietkedaule, count_daule = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i];
		
		if(a[i] == 0)
		{
			count_daule = 0;
		}
		else
		{
			for(temp; temp != 0; temp /= 10)
			{
				lietkedaule = temp % 10;
			}

			if(lietkedaule % 2 != 0)
			{
				printf("%d  ", a[i]);
				count_daule++;
			}
		}
	}

	if(count_daule == 0)
		printf("\n\nKhong ton tai so nguyen co chu so dau tien la chu so le trong mang.");
}
*/