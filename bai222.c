#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng phần tử cùng lớn hơn hoặc nhỏ hơn các phần tử
// xung quanh (demcutri).


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


	printf("\nCac phan tu cung lon hon hoac nho hon cac phan tu xung quanh la:\n");
	
	//Xu ly de
	int demcutri = 0;

	for(int i = 1; i < N - 1; i++)
	{
		if((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
		{
			demcutri++;
			printf("%0.3f  ", a[i]);
		}
	}

	printf("\n\nSo luong phan tu cung lon hon hoac nho hon cac phan tu xung quanh la: %d.", demcutri);

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
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\nCac phan tu cung lon hon hoac nho hon cac phan tu xung quanh la:\n");

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
void Xuly()
{
	int demcutri = 0;

	for(int i = 1; i < N - 1; i++)
	{
		if((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
		{
			demcutri++;
			printf("%0.3f  ", a[i]);
		}
	}

	printf("\n\nSo luong phan tu cung lon hon hoac nho hon cac phan tu xung quanh la: %d.", demcutri);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void Xuly(float a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac phan tu cung lon hon hoac nho hon cac phan tu xung quanh la:\n");

	//Xu ly de
	Xuly(a, N);

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
		scanf_s("%d", &a[i]);
	}
}

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly()
{
	int demcutri = 0;

	for(int i = 1; i < N - 1; i++)
	{
		if((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
		{
			demcutri++;
			printf("%0.3f  ", a[i]);
		}
	}

	printf("\n\nSo luong phan tu cung lon hon hoac nho hon cac phan tu xung quanh la: %d.", demcutri);
}
*/