#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên. Hãy viết hàm liệt kê các giá trị
//trong mảng có dạng 3^k thì hàm sẽ trả về giá trị 0.


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


	printf("\nCac gia tri trong mang co dang 3^k la: ");

	//Xu ly de
	int count_3k = 0;	//count_3k = 0: khong ton tai so 3^k trong mang

	for (int i = 0; i < N; i++)
	{
		int count = 0, temp = a[i];

		if (temp < 3)
		{
			count++;
		}
		else
		{
			for (temp; temp > 1; temp /= 3)
			{
				if (temp % 3 != 0)
					count++;
			}
		}
		//printf("%d %d\n", a[i], count);

		if (count == 0)
		{
			printf("%d  ", a[i]);
			count_3k++;
		}
	}

	if(count_3k == 0)
	{	
		printf("0\n\nKhong ton tai gia tri trong mang co dang 3^k.");
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

	printf("\nCac gia tri trong mang co dang 3^k la: ");

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
	int count_3k = 0;	//count_3k = 0: khong ton tai so 3^k trong mang

	for (int i = 0; i < N; i++)
	{
		int count = 0, temp = a[i];

		if (temp < 3)
		{
			count++;
		}
		else
		{
			for (temp; temp > 1; temp /= 3)
			{
				if (temp % 3 != 0)
					count++;
			}
		}
		//printf("%d %d\n", a[i], count);

		if (count == 0)
		{
			printf("%d  ", a[i]);
			count_3k++;
		}
	}

	if(count_3k == 0)
	{	
		printf("0\n\nKhong ton tai gia tri trong mang co dang 3^k.");
	}
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

	printf("\nCac gia tri trong mang co dang 3^k la: ");

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
	int count_3k = 0;	//count_3k = 0: khong ton tai so 3^k trong mang

	for (int i = 0; i < N; i++)
	{
		int count = 0, temp = a[i];

		if (temp < 3)
		{
			count++;
		}
		else
		{
			for (temp; temp > 1; temp /= 3)
			{
				if (temp % 3 != 0)
					count++;
			}
		}
		//printf("%d %d\n", a[i], count);

		if (count == 0)
		{
			printf("%d  ", a[i]);
			count_3k++;
		}
	}

	if(count_3k == 0)
	{	
		printf("0\n\nKhong ton tai gia tri trong mang co dang 3^k.");
	}
}
*/