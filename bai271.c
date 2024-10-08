#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Xóa các phần tử có chỉ số k trong mảng (xoavitri)



/*
#define MAX 100

int main()
{
	int N, k;
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

	do
	{
		printf("Nhap vi tri phan tu k muon xoa: ");
		scanf_s("%d", &k);

		if(k < 1 || k > N)
			printf("vi tri khong hop le. Xin moi nhap lai!!!\n");
	}while(k < 1 || k > N);

	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	for(int i = k - 1; i < N; i++)
	{
		a[i] = a[i+1];
	}

	N--;

	printf("\nMang sau khi xoa phan tu co chi so k trong mang:\n");
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

int N, k;
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

	do
	{
		printf("Nhap vi tri phan tu k muon xoa: ");
		scanf_s("%d", &k);
		
		if(k < 1 || k > N)
			printf("vi tri khong hop le. Xin moi nhap lai!!!\n");
	}while(k < 1 || k > N);
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
	for(int i = k - 1; i < N; i++)
	{
		a[i] = a[i+1];
	}

	N--;

	printf("\nMang sau khi xoa phan tu co chi so k trong mang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N,int &K);

void xuat(float a[], int N);

void Xuly(float a[], int N, int k);

int main()
{
	int N, k;
	float a[MAX];
	
	nhap(a, N, k);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	Xuly(a, N, k);

	_getch();
	return 0;
}

void nhap(float a[], int& N, int &k)
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

	printf("Nhap phan tu k muon xoa: ");
	scanf_s("%d", &k);
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

void Xuly(float a[], int N, int k)
{
	for(int i = 0; i < N; i++)
	{
		if(a[i] == k)
		{
			
			for(int j = i; j < N; j++)
			{
				a[j] = a[j+1];
			}
			N--;	//sau khi xoa phan tu thi tang vi tri cac phan tu sau len truoc 1 dv va giam tong so phan tu co trong mang
			
			i--;	//kiem tra lai sau khi gan thi phan tu gan co bang so can xoa khong
		}
	}

	printf("\nMang sau khi xoa phan tu co chi so k trong mang:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f ", a[i]);
	}
}
*/
