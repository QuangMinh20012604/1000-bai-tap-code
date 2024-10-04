#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy sắp xếp các số nguyên tố trong mảng các số nguyên tăng dần các
//giá trị khác giữ nguyên giá trị và vị trí (nguyentotang).


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
		printf("%4d", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	for(int i = 0; i < N - 1; i++)
	{
		int ngto = 0;

		if(a[i] < 2)
			ngto++;
		else
		{
			if(a[i] > 2)
			{
				for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						ngto++;
				}
			}
		}

		if(ngto == 0)
		{
			

			for(int k = i + 1; k < N; k++)
			{
				int ngto2 = 0;
				
				if(a[k] < 2)
					ngto2++;
				else
				{
					if(a[k] > 2)
					{
						for(int j = 2; j < a[k]; j++)
						{
							if(a[k] % j == 0)
								ngto2++;
						}
					}
				}

				if(ngto2 == 0 && a[i] > a[k])
				{
					int temp = a[i];
					a[i] = a[k];
					a[k] = temp;
				}
			}
		}

	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%4d", a[i]);
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
		printf("%4d", a[i]);
	}
}
void Xuly()
{
	for(int i = 0; i < N - 1; i++)
	{
		int ngto = 0;

		if(a[i] < 2)
			ngto++;
		else
		{
			if(a[i] > 2)
			{
				for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						ngto++;
				}
			}
		}

		if(ngto == 0)
		{
			

			for(int k = i + 1; k < N; k++)
			{
				int ngto2 = 0;
				
				if(a[k] < 2)
					ngto2++;
				else
				{
					if(a[k] > 2)
					{
						for(int j = 2; j < a[k]; j++)
						{
							if(a[k] % j == 0)
								ngto2++;
						}
					}
				}

				if(ngto2 == 0 && a[i] > a[k])
				{
					int temp = a[i];
					a[i] = a[k];
					a[k] = temp;
				}
			}
		}

	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%4d", a[i]);
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
		printf("%4d", a[i]);
	}
}

void Xuly(int a[], int N)
{
	for(int i = 0; i < N - 1; i++)
	{
		int ngto = 0;

		if(a[i] < 2)
			ngto++;
		else
		{
			if(a[i] > 2)
			{
				for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						ngto++;
				}
			}
		}

		if(ngto == 0)
		{
			

			for(int k = i + 1; k < N; k++)
			{
				int ngto2 = 0;
				
				if(a[k] < 2)
					ngto2++;
				else
				{
					if(a[k] > 2)
					{
						for(int j = 2; j < a[k]; j++)
						{
							if(a[k] % j == 0)
								ngto2++;
						}
					}
				}

				if(ngto2 == 0 && a[i] > a[k])
				{
					int temp = a[i];
					a[i] = a[k];
					a[k] = temp;
				}
			}
		}

	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%4d", a[i]);
	}
}
*/


