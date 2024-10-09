#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đảo ngược thứ tự các số chẵn và các số lẻ trong mảng mà vẫn giữ
//nguyên vị trí tương đối của chúng (daonguocchanle)


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
		for(int j = i+1; j < N; j++)
		{
			if(a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if(a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
		for(int j = i+1; j < N; j++)
		{
			if(a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if(a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
		for(int j = i+1; j < N; j++)
		{
			if(a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if(a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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