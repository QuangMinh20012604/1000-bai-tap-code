#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các vị trí chẵn lớn nhất trong mảng một chiều các số nguyên.


///khong sai ham

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
	int chanlonnhat, count_chan = 0;
	int vitrichanlonnhat;

	//Tim so chan dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			chanlonnhat = a[i];
			vitrichanlonnhat = i;
			count_chan++;
			break;
		}
	}

	if(count_chan == 0)
		printf("\nKhong ton tai so chan nao trong mang.");
	else
	{
		//tim duong nho nhatƯ
		for(int i = vitrichanlonnhat + 1; i < N; i++)
		{
			if(a[i] > 0 && a[i] > chanlonnhat)
			{
				chanlonnhat = a[i];
				count_chan = 1;
				vitrichanlonnhat = i;
			}
		}

		printf("Gia tri chan lon nhat trong mang la %d, o vi tri %d.\n", chanlonnhat, vitrichanlonnhat+1);
		printf("Cac vi tri co gia tri bang gia tri chan lon nhat trong mang la: ");

		int count = 0;	//count = 0: ko tồn tai gia tri nao bang gia tri duong nho nhat
		
		for(int i = vitrichanlonnhat + 1; i < N; i++)
		{
			if(a[i] == chanlonnhat)
			{	
				count++;
				vitrichanlonnhat = i + 1;
				printf("%d ", vitrichanlonnhat);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri dchan lon nhat o trong mang.");
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
int a[MAX];

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
	int chanlonnhat, count_chan = 0;
	int vitrichanlonnhat;

	//Tim so chan dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			chanlonnhat = a[i];
			vitrichanlonnhat = i;
			count_chan++;
			break;
		}
	}

	if(count_chan == 0)
		printf("\nKhong ton tai so chan nao trong mang.");
	else
	{
		//tim duong nho nhatƯ
		for(int i = vitrichanlonnhat + 1; i < N; i++)
		{
			if(a[i] > 0 && a[i] > chanlonnhat)
			{
				chanlonnhat = a[i];
				count_chan = 1;
				vitrichanlonnhat = i;
			}
		}

		printf("Gia tri chan lon nhat trong mang la %d, o vi tri %d.\n", chanlonnhat, vitrichanlonnhat+1);
		printf("Cac vi tri co gia tri bang gia tri chan lon nhat trong mang la: ");

		int count = 0;	//count = 0: ko tồn tai gia tri nao bang gia tri duong nho nhat
		
		for(int i = vitrichanlonnhat + 1; i < N; i++)
		{
			if(a[i] == chanlonnhat)
			{	
				count++;
				vitrichanlonnhat = i + 1;
				printf("%d ", vitrichanlonnhat);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri dchan lon nhat o trong mang.");
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
	int chanlonnhat, count_chan = 0;
	int vitrichanlonnhat;

	//Tim so chan dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			chanlonnhat = a[i];
			vitrichanlonnhat = i;
			count_chan++;
			break;
		}
	}

	if(count_chan == 0)
		printf("\nKhong ton tai so chan nao trong mang.");
	else
	{
		//tim duong nho nhatƯ
		for(int i = vitrichanlonnhat + 1; i < N; i++)
		{
			if(a[i] > 0 && a[i] > chanlonnhat)
			{
				chanlonnhat = a[i];
				count_chan = 1;
				vitrichanlonnhat = i;
			}
		}

		printf("Gia tri chan lon nhat trong mang la %d, o vi tri %d.\n", chanlonnhat, vitrichanlonnhat+1);
		printf("Cac vi tri co gia tri bang gia tri chan lon nhat trong mang la: ");

		int count = 0;	//count = 0: ko tồn tai gia tri nao bang gia tri duong nho nhat
		
		for(int i = vitrichanlonnhat + 1; i < N; i++)
		{
			if(a[i] == chanlonnhat)
			{	
				count++;
				vitrichanlonnhat = i + 1;
				printf("%d ", vitrichanlonnhat);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri dchan lon nhat o trong mang.");
	}
}
*/