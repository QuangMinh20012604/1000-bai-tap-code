#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “vị trí của giá trị chẵn đầu tiên” trong mảng một chiều các số
//nguyên (vitrichandau). Nếu mảng không có giá trị chẵn thì hàm sẽ trả
//về giá trị là – 1.


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

	int n = -1, vitrichandau = -1;
	
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			n = a[i];
			vitrichandau = i + 1;
			break;
		}
	}

	if(n == -1)	printf("\n%d", vitrichandau);
	else	printf("\nVi tri gia tri chan dau tien la %d, voi gia tri la %d.", vitrichandau, n);

	_getch();
	return 0;
}
*/

//sai ham

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void ViTriChanDauTien(int a[], int N);

int main()
{
	int N, a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	ViTriChanDauTien(a, N);

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

void ViTriChanDauTien(int a[], int N)
{
	int n = -1, vitrichandau = -1;
	
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			n = a[i];
			vitrichandau = i + 1;
			break;
		}
	}

	if(n == -1)	printf("\n%d", vitrichandau);
	else	printf("\nVi tri gia tri chan dau tien la %d, voi gia tri la %d.", vitrichandau, n);

}
*/


//
#define MAX 100

int N, a[MAX];

void nhap();
void xuat();
void ViTriChanDauTien();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	ViTriChanDauTien();

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

void ViTriChanDauTien()
{
	int n = -1, vitrichandau = -1;
	
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			n = a[i];
			vitrichandau = i + 1;
			break;
		}
	}

	if(n == -1)	printf("\n%d", vitrichandau);
	else	printf("\nVi tri gia tri chan dau tien la %d, voi gia tri la %d.", vitrichandau, n);

}
//