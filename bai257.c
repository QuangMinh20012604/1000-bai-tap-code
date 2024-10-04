#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy sắp xếp các giá trị tại các vị trí lẻ trong mảng tăng dần các giá trị
//khác giữ nguyên giá trị và vị trí (vitriletang).
//Ví dụ:
//Chỉ số 0 1 2 3 4 5
//Giá trị 14.0 -5.7 23.0 13.5 43.1 -12.7Mảng sau khi sắp xếp các vị trí lẻ tăng
//Chỉ số 0 1 2 3 4 5
//Giá trị 14.0 -12.7 23.0 -5.7 43.1 13.5



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
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 != 0)
		{
			for(int j = i + 1; j < N; j++)
			{
				if(a[j] % 2 != 0)
				{
					if(a[i] > a[j])
					{
						float temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}

				}
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

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
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 != 0)
		{
			for(int j = i + 1; j < N; j++)
			{
				if(a[j] % 2 != 0)
				{
					if(a[i] > a[j])
					{
						float temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}

				}
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

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
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 != 0)
		{
			for(int j = i + 1; j < N; j++)
			{
				if(a[j] % 2 != 0)
				{
					if(a[i] > a[j])
					{
						float temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}

				}
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/