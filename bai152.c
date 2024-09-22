#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “hoàn thiện nhỏ nhất” trong mảng một chiều các số nguyên
//(hoanthiennhonhat). Nếu mảng không có số hoàn thiện thì trả về giá trị 0.


//khong sai ham

//
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
	int hoanthiennhonhat = 0, S, vitridautien = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 1)
		{
			S = 0;
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
					S += j;
			}
			if(S == a[i])
			{
				hoanthiennhonhat = a[i];
				vitridautien = i;
				break;
			}
		}
	}

	for(int i = vitridautien + 1; i < N; i++)
	{
		if(a[i] > 1)
		{
			S = 0;
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
					S += j;
			}
			if(S == a[i])
			{
				if(hoanthiennhonhat > a[i])
				{
				hoanthiennhonhat = a[i];
				}
			}
		}
	}

	if(hoanthiennhonhat == 0)
		printf("%d", hoanthiennhonhat);
	else
		printf("So hoan thien nho nhat trong mang la %d.", hoanthiennhonhat);


	_getch();
	return 0;
}
//

//sai ham

/*
#define MAX 100

int N, a[MAX];

void nhap();
void xuat();
int SoHoanThienNhoNhat();
int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	int hoanthiennhonhat = SoHoanThienNhoNhat();
	
	if(hoanthiennhonhat == 0)
		printf("%d", hoanthiennhonhat);
	else
		printf("So hoan thien nho nhat trong mang la %d.", hoanthiennhonhat);

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

int SoHoanThienNhoNhat()
{
	int hoanthiennhonhat = 0, S, vitridautien = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 1)
		{
			S = 0;
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
					S += j;
			}
			if(S == a[i])
			{
				hoanthiennhonhat = a[i];
				vitridautien = i;
				break;
			}
		}
	}

	for(int i = vitridautien + 1; i < N; i++)
	{
		if(a[i] > 1)
		{
			S = 0;
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
					S += j;
			}
			if(S == a[i])
			{
				if(hoanthiennhonhat > a[i])
				{
				hoanthiennhonhat = a[i];
				}
			}
		}
	}

	return hoanthiennhonhat;
}
*/

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

int SoHoanThienNhoNhat(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	int hoanthiennhonhat = SoHoanThienNhoNhat(a, N);

	if(hoanthiennhonhat == 0)
		printf("%d", hoanthiennhonhat);
	else
		printf("So hoan thien nho nhat trong mang la %d.", hoanthiennhonhat);

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

int SoHoanThienNhoNhat(int a[], int N)
{
	int hoanthiennhonhat = 0, S, vitridautien = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 1)
		{
			S = 0;
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
					S += j;
			}
			if(S == a[i])
			{
				hoanthiennhonhat = a[i];
				vitridautien = i;
				break;
			}
		}
	}

	for(int i = vitridautien + 1; i < N; i++)
	{
		if(a[i] > 1)
		{
			S = 0;
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
					S += j;
			}
			if(S == a[i])
			{
				if(hoanthiennhonhat > a[i])
				{
				hoanthiennhonhat = a[i];
				}
			}
		}
	}

	return hoanthiennhonhat;
}

*/