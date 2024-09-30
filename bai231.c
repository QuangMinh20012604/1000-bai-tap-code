#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các giá trị xuất hiện trong mảng một chiều các số nguyên
// đúng một lần (lieketduynhat)


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
		scanf_s("%d", &a[i]);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}


	printf("\n\nCac gia tri xuat hien dung mot lan trong mang la:\n");
	
	//Xu ly de
	int flat, demphanbiet = 0;

	for(int i = 0; i < N; i++)
	{
		flat = 0;
		
		for(int j = 0; (j < N); j++)
		{
			if(j != i)
			{	
				if(a[i] == a[j])
				{
					flat++;
					
				}
			}
		}
		
		if(flat == 0)
		{
			
			printf("%d  ", a[i]);
		}
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

	printf("\n\nCac gia tri xuat hien dung mot lan trong mang la:\n");

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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	int flat, demphanbiet = 0;

	for(int i = 0; i < N; i++)
	{
		flat = 0;
		
		for(int j = 0; (j < N); j++)
		{
			if(j != i)
			{	
				if(a[i] == a[j])
				{
					flat++;
					
				}
			}
		}
		
		if(flat == 0)
		{
			
			printf("%d  ", a[i]);
		}
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

	printf("\n\nCac gia tri xuat hien dung mot lan trong mang la:\n");

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
		scanf_s("%f", &a[i]);
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}

void Xuly(int a[], int N)
{
	int flat, demphanbiet = 0;

	for(int i = 0; i < N; i++)
	{
		flat = 0;
		
		for(int j = 0; (j < N); j++)
		{
			if(j != i)
			{	
				if(a[i] == a[j])
				{
					flat++;
					
				}
			}
		}
		
		if(flat == 0)
		{
			
			printf("%d  ", a[i]);
		}
	}
}
*/