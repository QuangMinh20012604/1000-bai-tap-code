#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//(*) Hãy liệt kê các giá trị có số lần xuất hiện nhiều nhất trong mảng các
// số nguyên (lietkenhieunhat)


//Cho 1 mang 

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
	int count_temp, countMax = 0;
	
	for(int i = 0; i < N; i++)
	{
		count_temp = 0;

		for(int j = 0; j < N; j++)
		{
			if(a[i] == a[j])
			{
				if( i <= j)
					count_temp++;
				else
					break;
			}
		}

		if(count_temp > countMax)
		{
			countMax = count_temp;
		}
	}
	printf("\nSo lan xuat hien nhieu nhat la: %d.\n", countMax);

	for(int i = 0; i < N; i++)
	{
		count_temp = 0;

		for(int j = 0; j < N; j++)
		{
			if(a[i] == a[j])
			{
				if( i <= j)
					count_temp++;
				else
					break;
			}
		}

		if(count_temp == countMax)
		{
			
			printf("\nGia tri co so lan xuat hien nhieu nhat trong mang la: %d.", a[i]);
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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	int count_temp, countMax = 0;
	
	for(int i = 0; i < N; i++)
	{
		count_temp = 0;

		for(int j = 0; j < N; j++)
		{
			if(a[i] == a[j])
			{
				if( i <= j)
					count_temp++;
				else
					break;
			}
		}

		if(count_temp > countMax)
		{
			countMax = count_temp;
		}
	}
	printf("\nSo lan xuat hien nhieu nhat la: %d.\n", countMax);

	for(int i = 0; i < N; i++)
	{
		count_temp = 0;

		for(int j = 0; j < N; j++)
		{
			if(a[i] == a[j])
			{
				if( i <= j)
					count_temp++;
				else
					break;
			}
		}

		if(count_temp == countMax)
		{
			
			printf("\nGia tri co so lan xuat hien nhieu nhat trong mang la: %d.", a[i]);
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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[],int N)
{
	int count_temp, countMax = 0;
	
	for(int i = 0; i < N; i++)
	{
		count_temp = 0;

		for(int j = 0; j < N; j++)
		{
			if(a[i] == a[j])
			{
				if( i <= j)
					count_temp++;
				else
					break;
			}
		}

		if(count_temp > countMax)
		{
			countMax = count_temp;
		}
	}
	printf("\nSo lan xuat hien nhieu nhat la: %d.\n", countMax);

	for(int i = 0; i < N; i++)
	{
		count_temp = 0;

		for(int j = 0; j < N; j++)
		{
			if(a[i] == a[j])
			{
				if( i <= j)
					count_temp++;
				else
					break;
			}
		}

		if(count_temp == countMax)
		{
			
			printf("\nGia tri co so lan xuat hien nhieu nhat trong mang la: %d.", a[i]);
		}
	}
}
*/