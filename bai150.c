#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “giá trị âm lớn nhất” trong mảng các số thực (amlonnhat). Nếu
//mảng không có giá trị âm thì trả về giá trị 0.

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
	float amlonnhat = 0;

	//Tim so am dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amlonnhat = a[i];
			break;
		}
	}

	for(int i = 0; i < N; i++)
	{
		if((a[i] < 0) && (a[i] > amlonnhat))
		{
			amlonnhat = a[i];
		}
	}
	if(amlonnhat == 0)
		printf("\n0");
	else
		printf("\nGia tri am lon nhat trong mang la %0.3f.", amlonnhat);

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
float GiaTriAmLonNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	float amlonnhat = GiaTriAmLonNhat();

	if(amlonnhat == 0)
		printf("\n0");
	else
		printf("\nGia tri am lon nhat trong mang la %0.3f.", amlonnhat);

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

float GiaTriAmLonNhat()
{
	float amlonnhat = 0;

	//Tim so am dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amlonnhat = a[i];
			break;
		}
	}

	for(int i = 0; i < N; i++)
	{
		if((a[i] < 0) && (a[i] > amlonnhat))
		{
			amlonnhat = a[i];
		}
	}
	return amlonnhat;
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

float GiaTriAmLonNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	float amlonnhat = GiaTriAmLonNhat(a, N);

	if(amlonnhat == 0)
		printf("\n0");
	else
		printf("\nGia tri am lon nhat trong mang la %0.3f.", amlonnhat);

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

float GiaTriAmLonNhat(float a[], int N)
{
	float amlonnhat = 0;

	//Tim so am dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amlonnhat = a[i];
			break;
		}
	}

	for(int i = 0; i < N; i++)
	{
		if((a[i] < 0) && (a[i] > amlonnhat))
		{
			amlonnhat = a[i];
		}
	}
	return amlonnhat;
}

*/