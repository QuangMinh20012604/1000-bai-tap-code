#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ
//nhất trong mảng một chiều các số thực.


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
	float duongnhonhat, count_duong = 0;
	int vitriduongnhonhat;

	//Tim duong dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			duongnhonhat = a[i];
			vitriduongnhonhat = i;
			count_duong++;
			break;
		}
	}

	if(count_duong == 0)
		printf("\nKhong ton tai so duong nao trong mang.");
	else
	{
		//tim duong nho nhat
		for(int i = vitriduongnhonhat + 1; i < N; i++)
		{
			if(a[i] > 0 && a[i] < duongnhonhat)
			{
				duongnhonhat = a[i];
				count_duong = 1;
				vitriduongnhonhat = i;
			}
		}

		printf("Gia tri duong nho nhat trong mang la %0.3f, o vi tri %d.\n", duongnhonhat, vitriduongnhonhat+1);
		printf("Cac vi tri co gia tri bang gia tri duong nho nhat trong mang la: ");

		int count = 0;	//count = 0: ko tồn tai gia tri nao bang gia tri duong nho nhat
		
		for(int i = vitriduongnhonhat + 1; i < N; i++)
		{
			if(a[i] == duongnhonhat)
			{	
				count++;
				vitriduongnhonhat = i + 1;
				printf("%d ", vitriduongnhonhat);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri duong nho nhat o trong mang.");
	}

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
void SoThoaManDieuKien()
{
	float duongnhonhat, count_duong = 0;
	int vitriduongnhonhat;

	//Tim duong dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			duongnhonhat = a[i];
			vitriduongnhonhat = i;
			count_duong++;
			break;
		}
	}

	if(count_duong == 0)
		printf("\nKhong ton tai so duong nao trong mang.");
	else
	{
		//tim duong nho nhat
		for(int i = vitriduongnhonhat + 1; i < N; i++)
		{
			if(a[i] > 0 && a[i] < duongnhonhat)
			{
				duongnhonhat = a[i];
				count_duong = 1;
				vitriduongnhonhat = i;
			}
		}

		printf("Gia tri duong nho nhat trong mang la %0.3f, o vi tri %d.\n", duongnhonhat, vitriduongnhonhat+1);
		printf("Cac vi tri co gia tri bang gia tri duong nho nhat trong mang la: ");

		int count = 0;	//count = 0: ko tồn tai gia tri nao bang gia tri duong nho nhat
		
		for(int i = vitriduongnhonhat + 1; i < N; i++)
		{
			if(a[i] == duongnhonhat)
			{	
				count++;
				vitriduongnhonhat = i + 1;
				printf("%d ", vitriduongnhonhat);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri duong nho nhat o trong mang.");
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int &N);
void xuat(float a[], int N);
void SoThoaManDieuKien(float a[], int N);


int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int &N)
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

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void SoThoaManDieuKien(float a[], int N)
{
	float duongnhonhat, count_duong = 0;
	int vitriduongnhonhat;

	//Tim duong dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			duongnhonhat = a[i];
			vitriduongnhonhat = i;
			count_duong++;
			break;
		}
	}

	if(count_duong == 0)
		printf("\nKhong ton tai so duong nao trong mang.");
	else
	{
		//tim duong nho nhat
		for(int i = vitriduongnhonhat + 1; i < N; i++)
		{
			if(a[i] > 0 && a[i] < duongnhonhat)
			{
				duongnhonhat = a[i];
				count_duong = 1;
				vitriduongnhonhat = i;
			}
		}

		printf("Gia tri duong nho nhat trong mang la %0.3f, o vi tri %d.\n", duongnhonhat, vitriduongnhonhat+1);
		printf("Cac vi tri co gia tri bang gia tri duong nho nhat trong mang la: ");

		int count = 0;	//count = 0: ko tồn tai gia tri nao bang gia tri duong nho nhat
		
		for(int i = vitriduongnhonhat + 1; i < N; i++)
		{
			if(a[i] == duongnhonhat)
			{	
				count++;
				vitriduongnhonhat = i + 1;
				printf("%d ", vitriduongnhonhat);
			}
		}

		if(count == 0)
			printf("\n\nKhong ton tai gia tri nao khac bang gia tri duong nho nhat o trong mang.");
	}
}
*/