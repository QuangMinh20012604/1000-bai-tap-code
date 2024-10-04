#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy sắp xếp các số hoàn thiện trong mảng giảm dần các giá trị khác giữ
//nguyên giá trị và vị trí (nguyentotang).


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
		printf("%8d", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N - 1; i++)
	{
		int S1 = 0;
		
		for(int j = 1; j < a[i]; j++)
		{
			if(a[i] % j == 0)
				S1 += j;
		}

		if(S1 == a[i])
		{
			for(int j = i + 1; j < N; j++)
			{
				int S2 = 0;
				
				for(int k = 1; k < a[j]; k++)
				{
					if(a[j] % k == 0)
						S2 += k;
				}

				if(S2 == a[j] && a[i] < a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%8d", a[i]);
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
		printf("%8d", a[i]);
	}
}
void Xuly()
{
	for(int i = 0; i < N - 1; i++)
	{
		int S1 = 0;
		
		for(int j = 1; j < a[i]; j++)
		{
			if(a[i] % j == 0)
				S1 += j;
		}

		if(S1 == a[i])
		{
			for(int j = i + 1; j < N; j++)
			{
				int S2 = 0;
				
				for(int k = 1; k < a[j]; k++)
				{
					if(a[j] % k == 0)
						S2 += k;
				}

				if(S2 == a[j] && a[i] < a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%8d", a[i]);
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
		printf("%8d", a[i]);
	}
}

void Xuly(int a[], int N)
{
	for(int i = 0; i < N - 1; i++)
	{
		int S1 = 0;
		
		for(int j = 1; j < a[i]; j++)
		{
			if(a[i] % j == 0)
				S1 += j;
		}

		if(S1 == a[i])
		{
			for(int j = i + 1; j < N; j++)
			{
				int S2 = 0;
				
				for(int k = 1; k < a[j]; k++)
				{
					if(a[j] % k == 0)
						S2 += k;
				}

				if(S2 == a[j] && a[i] < a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%8d", a[i]);
	}
}
*/