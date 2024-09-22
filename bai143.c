#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm tìm “số chẵn đầu tiên” trong mảng các số nguyên (chandau).
//Nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị không chẵn là - 1


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
	int chandau = -1, count = 0;	//count = 0: false	-	count != 0: true

	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2) == 0)
		{
			chandau = a[i];
			count++;
			break;
		}
	}

	if(count == 0)
	{
		printf("%d", chandau);
	}
	else
	{
		printf("So chan dau tien trong mang la %d.", chandau);
	}

	_getch();
	return 0;
}
*/

//sai ham

/*
#define MAX 100

int N, a[MAX];

void nhap();
void xuat();
void ChanDauTien();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	ChanDauTien();

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

void ChanDauTien()
{
	int chandau = -1, count = 0;	//count = 0: false	-	count != 0: true

	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2) == 0)
		{
			chandau = a[i];
			count++;
			break;
		}
	}

	if(count == 0)
	{
		printf("%d", chandau);
	}
	else
	{
		printf("So chan dau tien trong mang la %d.", chandau);
	}
}
*/

/*
//Test o visual

#define MAX 100

void nhap(int a[], int& N);
void xuat(int a[], int N);
int ChanDauTien(int a[], int N);

int main()
{
	int N;
	int a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	int chandau = ChanDauTien(a, N);

	if (chandau == -1)
	{
		printf("%d", chandau);
	}
	else
	{
		printf("So chan dau tien trong mang la %d.", chandau);
	}

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

int ChanDauTien(int a[], int N)
{
	int chandau = -1;

	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2) == 0)
		{
			chandau = a[i];
			break;
		}
	}
	return chandau;
}
*/