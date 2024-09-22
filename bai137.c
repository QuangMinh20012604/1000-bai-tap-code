#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “một vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất” trong mảng
//một chiều các số thực (vitrinhonhat).


//khong sai ham


/*
#define MAX 100

int main()
{
	int N, vitrinhonhat = 1;
	float a[MAX], min;

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

	min = a[0];
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%f  ", a[i]);
	}
	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N; i++)
	{
		if(a[i] < min)	
		{
			min = a[i];
			vitrinhonhat = i + 1;
		}
	}

	printf("\n");

	printf("So nho nhat trong mang la %0.3f, o vi tri %d.", min, vitrinhonhat);

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

void VitriNhoNhat(int a[], int N);

int main()
{
	int N;
	float a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	VitriNhoNhat(a, N);


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
		scanf_s("%f", &a[i]);
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%f  ", a[i]);
	}
}

void VitriNhoNhat(int a[], int N)
{
	float min = a[0];
	int vtnn = 1;

	for (int i = 0; i < N; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			vtnn = i + 1;
		}
	}

	printf("\n");

	printf("So nho nhat trong mang la %0.3f, o vi tri %d.", min, vtnn);
}
*/


//
#define MAX 100

int N;
float a[MAX];

void nhap();
void xuat();
void VitriNhoNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	
	//Xu ly de
	VitriNhoNhat(a, N);

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
		printf("%f  ", a[i]);
	}
}

void VitriNhoNhat()
{
	float min = a[0];
	int vtnn = 1;

	for (int i = 0; i < N; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			vtnn = i + 1;
		}
	}

	printf("\n");

	printf("So nho nhat trong mang la %0.3f, o vi tri %d.", min, vtnn);
}
//

