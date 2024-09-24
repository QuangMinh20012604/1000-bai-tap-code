#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt
//đối của giá trị đứng liền sau nó và lớn hơn giá trị đứng liền trước nó.


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
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

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\n\nCac so thoa man dieu kien nho hon tri tuyet doi cua gia tri dung lien sau no va lon hon gia tri dung lien truoc no la: \n\n");
	
	//Xu ly de
	
	for(int i = 0; i < N; i++)
	{
		if((a[i] < abs(a[i+1])) && (a[i] > a[i-1]))
			printf("%0.3f   ", a[i]);
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX];

void nhap();
void xuat();
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\n\nCac so thoa man dieu kien nho hon tri tuyet doi cua gia tri dung lien sau no va lon hon gia tri dung lien truoc no la: \n\n");

	//Xu ly de
	SoThoaManDieuKien();

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
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void SoThoaManDieuKien()
{
	for(int i = 0; i < N; i++)
	{
		if((a[i] < abs(a[i+1])) && (a[i] > a[i-1]))
			printf("%0.3f   ", a[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

int N;
float a[MAX];

void nhap(float a[], int &N);
void xuat(float a[], int N);
void SoThoaManDieuKien(float a[], int N);

int main()
{
	nhap(a, N);
	xuat(a, N);

	printf("\n\nCac so thoa man dieu kien nho hon tri tuyet doi cua gia tri dung lien sau no va lon hon gia tri dung lien truoc no la: \n\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
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
}

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}
void SoThoaManDieuKien(float a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if((a[i] < abs(a[i+1])) && (a[i] > a[i-1]))
			printf("%0.3f   ", a[i]);
	}
}
*/