#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng một chiều
// các số thực (tbclonhon).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX], x;

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

	printf("\nNhap x: ");
	scanf_s("%f", &x);
	

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}


	printf("\nCac gia tri lon hon gia tri x trong mang la:\n");
	
	//Xu ly de
	float tbclonhon = 0, S = 0;
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			printf("%0.3f  ", a[i]);
			count++;
			S += a[i];
		}
	}

	printf("\n\nTong cac gia tri lon hon gia tri x trong mang la: %0.3f.", S);

	if(count == 0)
	{
		tbclonhon = 0;
	}
	else
	{
		tbclonhon = S / count;
	}

	printf("\n\nTrung binh cong cac gia tri lon hon gia tri x trong mang la: %0.3f.", tbclonhon);

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX], x;

void nhap();
void xuat();
float Xuly();

int main()
{
	nhap();
	xuat();

	
	printf("\nCac gia tri lon hon gia tri x trong mang la:\n");
	
	//Xu ly de
	float tbclonhon = Xuly();

	printf("\n\nTrung binh cong cac gia tri lon hon gia tri x trong mang la: %0.3f.", tbclonhon);

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

	printf("\nNhap x: ");
	scanf_s("%f", &x);
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

float Xuly()
{
	float tbclonhon = 0, S = 0;
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			printf("%0.3f  ", a[i]);
			count++;
			S += a[i];
		}
	}

	printf("\n\nTong cac gia tri lon hon gia tri x trong mang la: %0.3f.", S);

	if(count == 0)
	{
		tbclonhon = 0;
	}
	else
	{
		tbclonhon = S / count;
	}

	return tbclonhon;
}
//

/*
//Test o visual
#define MAX 100

int N;
float a[MAX], x;

void nhap(float a[], int &N, float &x);
void xuat(float a[], int N);
float Xuly(float a[], int N, float x);

int main()
{
	nhap(a, N, x);
	xuat(a, N);

	
	printf("\nCac gia tri lon hon gia tri x trong mang la:\n");
	
	//Xu ly de
	float tbclonhon = Xuly(a, N, x);

	printf("\n\nTrung binh cong cac gia tri lon hon gia tri x trong mang la: %0.3f.", tbclonhon);

	_getch();
	return 0;
}

void nhap(float a[], int &N, float &x)
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

	printf("\nNhap x: ");
	scanf_s("%f", &x);
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

float Xuly(float a[], int N, float x)
{
	float tbclonhon = 0, S = 0;
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			printf("%0.3f  ", a[i]);
			count++;
			S += a[i];
		}
	}

	printf("\n\nTong cac gia tri lon hon gia tri x trong mang la: %0.3f.", S);

	if(count == 0)
	{
		tbclonhon = 0;
	}
	else
	{
		tbclonhon = S / count;
	}

	return tbclonhon;
}
*/