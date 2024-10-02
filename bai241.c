#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy kiểm tra mảng số nguyên có tồn tại hai giá trị không liên tiếp hay
// không ?(haikhong)


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
	int flat = 0;

	for(int i =  0; i < N;i++)
	{
		if(a[i] == 0 && a[i + 1] == 0)
			flat = 1;
	}

	if(flat == 1)
		printf("\nMang co ton tai hai gia tri 0 lien tiep.");
	else
		printf("\nMang khong ton tai hai gia tri 0 lien tiep.");

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
int Xuly();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	int flat = Xuly();

	if(flat == 1)
		printf("\nMang co ton tai hai gia tri 0 lien tiep.");
	else
		printf("\nMang khong ton tai hai gia tri 0 lien tiep.");

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
int Xuly()
{
	int flat = 0;

	for(int i =  0; i < N;i++)
	{
		if(a[i] == 0 && a[i + 1] == 0)
			flat = 1;
	}

	return flat;
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

int Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	int flat = Xuly(a, N);

	if(flat == 1)
		printf("\nMang co ton tai hai gia tri 0 lien tiep.");
	else
		printf("\nMang khong ton tai hai gia tri 0 lien tiep.");

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

int Xuly(int a[], int N)
{
	int flat = 0;

	for(int i =  0; i < N - 1;i++)
	{
		if(a[i] == 0 && a[i + 1] == 0)
			flat = 1;
	}

	return flat;
}
*/