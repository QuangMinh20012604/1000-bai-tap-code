#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng một chiều các số nguyên.


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


	printf("\n");
	
	//Xu ly de
	int chuso, count_chan, count_toanle = 0;

	printf("\nCac gia tri co toan so le trong mang la:\n");

	for(int i = 0; i < N; i++)
	{	
		count_chan = 0;
		if(a[i] == 0)
			count_chan++;
		else
		{	
			for(int temp = a[i]; temp != 0; temp /= 10)
			{
				chuso = temp % 10;
				if(chuso % 2 == 0)
				{
					count_chan++;
				}
			}
			if(count_chan == 0 || a[i] != 0)
			{
				printf("%d ", a[i]);
				count_toanle++;
			}
		}
	}
	if(count_toanle == 0)
		printf("\nKhong ton tai gia tri co toan chu so le trong mang.");

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
	int chuso, count_chan, count_toanle = 0;

	printf("\nCac gia tri co toan so le trong mang la:\n");

	for(int i = 0; i < N; i++)
	{	
		count_chan = 0;
		if(a[i] == 0)
			count_chan++;
		else
		{	
			for(int temp = a[i]; temp != 0; temp /= 10)
			{
				chuso = temp % 10;
				if(chuso % 2 == 0)
				{
					count_chan++;
				}
			}
		}

		if(count_chan == 0)
		{
			printf("%d ", a[i]);
			count_toanle++;
		}
	}

	if(count_toanle == 0)
		printf("\nKhong ton tai gia tri co toan chu so le trong mang.");
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
	int chuso, count_chan, count_toanle = 0;

	printf("\nCac gia tri co toan so le trong mang la:\n");

	for(int i = 0; i < N; i++)
	{	
		count_chan = 0;
		if(a[i] == 0)
			count_chan++;
		else
		{	
			for(int temp = a[i]; temp != 0; temp /= 10)
			{
				chuso = temp % 10;
				if(chuso % 2 == 0)
				{
					count_chan++;
				}
			}
		}

		if(count_chan == 0)
		{
			printf("%d ", a[i]);
			count_toanle++;
		}
	}

	if(count_toanle == 0)
		printf("\nKhong ton tai gia tri co toan chu so le trong mang.");
}
*/