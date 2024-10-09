#include<stdio.h>
#include<conio.h>
#include<math.h>

//Hãy biến đổi mảng bằng cách thay các giá trị lớn nhất bằng giá trị nhỏ
//nhất và ngược lại (biendoi)


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
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int a_min = a[0], a_max = a[0];

	//Tim so lon nhat va nho nhat trong mang
	for(int i = 0; i < N; i++)
	{
		if(a[i] < a_min)
		{
			a_min = a[i];
		}
		else if(a[i] > a_max)
		{
			a_max = a[i];
		}
	}

	printf("\nGia tri nho nhat trong mang la: %d.\n\nGia tri lon nhat trong mang la: %d.\n", a_min, a_max);
	//Hoan doi gia tri nho nhat bang gia tri lon nhat va nguoc lai
	for(int i = 0; i < N; i ++)
	{
		if(a[i] == a_min)
		{
			a[i] = a_max;
		}
		else if(a[i] == a_max)
		{
			a[i] = a_min;
		}
	}

	printf("\nMang sau khi thay gia tri lon nhat bang gia tri nho nhat va nguoc lai:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
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
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	Xuly();

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
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	int a_min = a[0], a_max = a[0];

	//Tim so lon nhat va nho nhat trong mang
	for(int i = 0; i < N; i++)
	{
		if(a[i] < a_min)
		{
			a_min = a[i];
		}
		else if(a[i] > a_max)
		{
			a_max = a[i];
		}
	}

	printf("\nGia tri nho nhat trong mang la: %d.\n\nGia tri lon nhat trong mang la: %d.\n", a_min, a_max);
	//Hoan doi gia tri nho nhat bang gia tri lon nhat va nguoc lai
	for(int i = 0; i < N; i ++)
	{
		if(a[i] == a_min)
		{
			a[i] = a_max;
		}
		else if(a[i] == a_max)
		{
			a[i] = a_min;
		}
	}

	printf("\nMang sau khi thay gia tri lon nhat bang gia tri nho nhat va nguoc lai:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N);

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
		scanf_s("%d", &a[i]);
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[], int N)
{
	int a_min = a[0], a_max = a[0];

	//Tim so lon nhat va nho nhat trong mang
	for(int i = 0; i < N; i++)
	{
		if(a[i] < a_min)
		{
			a_min = a[i];
		}
		else if(a[i] > a_max)
		{
			a_max = a[i];
		}
	}

	printf("\nGia tri nho nhat trong mang la: %d.\n\nGia tri lon nhat trong mang la: %d.\n", a_min, a_max);
	//Hoan doi gia tri nho nhat bang gia tri lon nhat va nguoc lai
	for(int i = 0; i < N; i ++)
	{
		if(a[i] == a_min)
		{
			a[i] = a_max;
		}
		else if(a[i] == a_max)
		{
			a[i] = a_min;
		}
	}

	printf("\nMang sau khi thay gia tri lon nhat bang gia tri nho nhat va nguoc lai:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/