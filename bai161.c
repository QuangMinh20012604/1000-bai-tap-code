#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên, hãy tìm giá trị đầu tiên trong mảng
//nằm trong khoảng (x,y) cho trước (dautientrongdoan). Nếu mảng
//không có giá trị thỏa điều kiện trên thì hàm trả về giá trị là x.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX], x, y;

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

	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
	printf("Nhap gia tri y: ");
	scanf_s("%d", &y);

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int dautientrongdoan = x;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > x && a[i] < y)
		{
			dautientrongdoan = a[i];
			break;
		}
	}
	if(dautientrongdoan == x)
		printf("\n%d", dautientrongdoan);
	else
		printf("\nGia tri dau tien trong mang nam trong khoang (%d; %d) la: %d.", x, y, dautientrongdoan);
	
	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX], x, y;

void nhap();
void xuat();
void sodautientrongmang();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	sodautientrongmang();

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

	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
	printf("Nhap gia tri y: ");
	scanf_s("%d", &y);
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

void sodautientrongmang()
{
	int dautientrongdoan = x;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > x && a[i] < y)
		{
			dautientrongdoan = a[i];
			break;
		}
	}
	if(dautientrongdoan == x)
		printf("\n%d", dautientrongdoan);
	else
		printf("\nGia tri dau tien trong mang nam trong khoang (%d; %d) la: %d.", x, y, dautientrongdoan);
}

//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N, int& x, int& y);
void xuat(int a[], int N);
void sodautientrongmang(int a[], int& N, int& x, int& y);

int main()
{
	int N, a[MAX], x, y;
	nhap(a, N, x, y);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	sodautientrongmang(a, N, x, y);

	_getch();
	return 0;
}

void nhap(int a[], int& N, int& x, int& y)
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

	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
	printf("Nhap gia tri y: ");
	scanf_s("%d", &y);
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

void sodautientrongmang(int a[], int& N, int& x, int& y)
{
	int dautientrongdoan = x;
	for (int i = 0; i < N; i++)
	{
		if (a[i] > x && a[i] < y)
		{
			dautientrongdoan = a[i];
			break;
		}
	}
	if (dautientrongdoan == x)
		printf("\n%d", dautientrongdoan);
	else
		printf("\nGia tri dau tien trong mang nam trong khoang (%d; %d) la: %d.", x, y, dautientrongdoan);
}
*/