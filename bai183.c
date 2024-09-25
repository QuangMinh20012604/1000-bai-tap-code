#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng một
//chiều các số thực (lietkevitrilonnhat).


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


	printf("\n");
	
	//Xu ly de
	float max = a[0];
	
	for(int i = 1; i < N; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	printf("Gia tri lon nhat trong mang la: %0.3f.\n", max);
	printf("Cac vi tri co gia tri lon nhat trong mang la:\n");
	int lkvitrilonnhat;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == max)
		{
			lkvitrilonnhat = i+ 1;
			printf("%d  ", lkvitrilonnhat);
		}
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
void LietkeVitriLonNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	LietkeVitriLonNhat();

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
void LietkeVitriLonNhat()
{
	float max = a[0];
	
	for(int i = 1; i < N; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	printf("Gia tri lon nhat trong mang la: %0.3f.\n", max);
	printf("Cac vi tri co gia tri lon nhat trong mang la:\n");
	int lkvitrilonnhat;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == max)
		{
			lkvitrilonnhat = i+ 1;
			printf("%d  ", lkvitrilonnhat);
		}
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void LietkeVitriLonNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	LietkeVitriLonNhat(a, N);

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

void LietkeVitriLonNhat(float a[], int N)
{
	float max = a[0];
	
	for(int i = 1; i < N; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	printf("Gia tri lon nhat trong mang la: %0.3f.\n", max);
	printf("Cac vi tri co gia tri lon nhat trong mang la:\n");
	int lkvitrilonnhat;

	for(int i = 0; i < N; i++)
	{
		if(a[i] == max)
		{
			lkvitrilonnhat = i+ 1;
			printf("%d  ", lkvitrilonnhat);
		}
	}
}

*/