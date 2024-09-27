#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng một
// chiều các số thực (tongcucdai).
// Lưu ý: Một giá trị trong mảng có tối đa hai giá trị xung quanh


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
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
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


	printf("\nCac gia tri lon hon gia tri xung quanh trong mang la:\n");

	//Xu ly de
	float S = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] > a[i+1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}

		else if(i == N - 1)
		{
			if(a[i] > a[i-1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}

		else
		{
			if(a[i] > a[i - 1] && a[i] > a[i + 1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}
	}

	printf("\nTong cac gia tri lon hon gia tri xung quanh trong mang la: S = %0.3f.", S);

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

	printf("\nCac gia tri lon hon gia tri xung quanh trong mang la:\n");

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
	float S = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] > a[i+1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}

		else if(i == N - 1)
		{
			if(a[i] > a[i-1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}

		else
		{
			if(a[i] > a[i - 1] && a[i] > a[i + 1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}
	}

	printf("\nTong cac gia tri lon hon gia tri xung quanh trong mang la: S = %0.3f.", S);
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
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac gia tri lon hon gia tri xung quanh trong mang la:\n");
	
	//Xu ly de
	Xuly(a, N);

	_getch();
	return 0;
}

void nhap(float a, int &N)
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

void xuat(float a, int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly(float a, int N)
{
	float S = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] > a[i+1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}

		else if(i == N - 1)
		{
			if(a[i] > a[i-1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}

		else
		{
			if(a[i] > a[i - 1] && a[i] > a[i + 1])
			{
				printf("%0.3f  ", a[i]);
				S += a[i];
			}
		}
	}

	printf("\nTong cac gia tri lon hon gia tri xung quanh trong mang la: S = %0.3f.", S);
}
*/