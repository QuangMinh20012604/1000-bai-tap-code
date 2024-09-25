#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng số nguyên có nhiều hơn hai giá trị. Hãy liệt kê tất cả các cặp
//giá trị gần nhau nhất trong mảng (gannhaunhat)


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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
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

	//Tim khoang cach nho nhat
	int gannhaunhat = abs(a[0] - a[1]), vitrigannhaunhat = 0;

	for (int i = 1; i < N - 1; i++)
	{
		int khoangcach = abs(a[i] - a[i + 1]);
		if (khoangcach < gannhaunhat)
		{
			gannhaunhat = khoangcach;
			vitrigannhaunhat = i;
		}
	}

	printf("\nKhoang cach gan nhat giua hai phan tu trong mang la: %d.\n", gannhaunhat);
	printf("\nCac cap gia tri gan nhau nhat trong mang la: ");
	for (int i = vitrigannhaunhat; i < N - 1; i++)
	{
		int khoangcach = abs(a[i] - a[i + 1]);
		if (khoangcach == gannhaunhat)
		{
			printf("(%d, %d)  ", a[i], a[i + 1]);
		}
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
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\n");

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
	int gannhaunhat = abs(a[0] - a[1]), vitrigannhaunhat = 0;

	for (int i = 1; i < N - 1; i++)
	{
		int khoangcach = abs(a[i] - a[i + 1]);
		if (khoangcach < gannhaunhat)
		{
			gannhaunhat = khoangcach;
			vitrigannhaunhat = i;
		}
	}

	printf("\nKhoang cach gan nhat giua hai phan tu trong mang la: %d.\n", gannhaunhat);
	printf("\nCac cap gia tri gan nhau nhat trong mang la: ");
	for (int i = vitrigannhaunhat; i < N - 1; i++)
	{
		int khoangcach = abs(a[i] - a[i + 1]);
		if (khoangcach == gannhaunhat)
		{
			printf("(%d, %d)  ", a[i], a[i + 1]);
		}
	}
}
//

/*
//Test o visual
#define MAX 100

int N, a[MAX];

void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoThoaManDieuKien(int a[], int N);

int main()
{
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);

	_getch();
	return 0;
}

void nhap(int a[], int &N)
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
	int gannhaunhat = abs(a[0] - a[1]), vitrigannhaunhat = 0;

	for (int i = 1; i < N - 1; i++)
	{
		int khoangcach = abs(a[i] - a[i + 1]);
		if (khoangcach < gannhaunhat)
		{
			gannhaunhat = khoangcach;
			vitrigannhaunhat = i;
		}
	}

	printf("\nKhoang cach gan nhat giua hai phan tu trong mang la: %d.\n", gannhaunhat);
	printf("\nCac cap gia tri gan nhau nhat trong mang la: ");
	for (int i = vitrigannhaunhat; i < N - 1; i++)
	{
		int khoangcach = abs(a[i] - a[i + 1]);
		if (khoangcach == gannhaunhat)
		{
			printf("(%d, %d)  ", a[i], a[i + 1]);
		}
	}
}
*/