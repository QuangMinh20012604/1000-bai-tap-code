#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số thực hãy tìm giá trị đầu tiên lớn hơn giá trị
//2003 (dautien). Nếu mảng không có giá trị thỏa điều kiện trên thì hàm
//trả về giá trị là 0.


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
		printf("%0.3f ", a[i]);
	}


	printf("\n");
	
	//Xu ly de

	float dautien = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 2003)
		{
			dautien = a[i];
			break;
		}
	}
	if(dautien == 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien lon hon gia tri 2003 trong mang la %0.3f.", dautien);


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
void GiaTriDauTien();
int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	GiaTriDauTien();

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

void GiaTriDauTien()
{
	float dautien = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 2003)
		{
			dautien = a[i];
			break;
		}
	}
	if(dautien == 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien lon hon gia tri 2003 trong mang la %0.3f.", dautien);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void GiaTriDauTien(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	GiaTriDauTien(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
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

void GiaTriDauTien(float a[], int N)
{
	float dautien = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 2003)
		{
			dautien = a[i];
			break;
		}
	}
	if(dautien == 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien lon hon gia tri 2003 trong mang la %0.3f.", dautien);
}

*/