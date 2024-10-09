#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy biến đổi mảng bằng cách thay tất cả các phần tử trong mảng bằng
//số nguyên gần nó nhất (nguyenhoa).


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
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	
	for(int i = 0; i < N; i++)
	{
		int phannguyen = (int)a[i];
		float phanle = a[i] - phannguyen;
		
		if(phanle < 0.5)
		{
			a[i] = (float)phannguyen;
		}
		else
		{
			a[i] = (float)phannguyen + 1;
		}
	}

	printf("\nMang sau khi da thay:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
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
		scanf_s("%f", &a[i]);
	}
}

void xuat()
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void Xuly()
{
	for(int i = 0; i < N; i++)
	{
		int phannguyen = (int)a[i];
		float phanle = a[i] - phannguyen;
		
		if(phanle < 0.5)
		{
			a[i] = (float)phannguyen;
		}
		else
		{
			a[i] = (float)phannguyen + 1;
		}
	}

	printf("\nMang sau khi da thay:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void Xuly(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N);

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
		scanf_s("%d", &a[i]);
	}
}

void xuat(float a[], int N)
{
	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}

void Xuly(float a[], int N)
{
	for(int i = 0; i < N; i++)
	{
		int phannguyen = (int)a[i];
		float phanle = a[i] - phannguyen;
		
		if(phanle < 0.5)
		{
			a[i] = (float)phannguyen;
		}
		else
		{
			a[i] = (float)phannguyen + 1;
		}
	}

	printf("\nMang sau khi da thay:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
*/