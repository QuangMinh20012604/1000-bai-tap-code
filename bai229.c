#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng các giá trị phân biệt có tỏng mảng (demphanbiet


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


	printf("\nCac gia tri phan biet co trong mang la:\n");
	
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
			demphanbiet++;
			printf("%0.3f  ", a[i]);
		}
	}

	printf("\n\nSo luong cac gia tri phan biet co trong mang la: %d.", demphanbiet);

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

	printf("\nCac gia tri phan biet co trong mang la:\n");

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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
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
			demphanbiet++;
			printf("%0.3f  ", a[i]);
		}
	}

	printf("\n\nSo luong cac gia tri phan biet co trong mang la: %d.", demphanbiet);
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

	printf("\nCac gia tri phan biet co trong mang la:\n");

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

void Xuly(float a[], int N)
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
			demphanbiet++;
			printf("%0.3f  ", a[i]);
		}
	}

	printf("\n\nSo luong cac gia tri phan biet co trong mang la: %d.", demphanbiet);
}
*/