#include<stdio.h>
#include<conio.h>
#include<math.h>


//


//Cho 1 mang 

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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly()
{
	
}
*/

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
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void Xuly(int a[], int N)
{

}
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Cho 2 mang khac nhau

//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX], x, mangIn[MAX];

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
		
	printf("Nhap x: ");
	scanf_s("%f", &x);

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	
	for(int i = 0; i < N; i++)
	{
		
	}

	//In ket qua
	
	for (int i = 0; i < N; i++)
	{
		
	}

	_getch();
	return 0;
}
*/

//sai ham

/*
#define MAX 100

int N;
float a[MAX], x, mangIn[MAX];

void nhap();
void xuat();
void xuly();
void in();

int main()
{
	nhap();
	xuat();

	printf("\n");

	///Xu ly de
	xuly();

	//In ket qua

	in();

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
		
	printf("Nhap x: ");
	scanf_s("%f", &x);
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", a[i]);
	}
}

void xuly()
{
	for(int i = 0; i < N; i++)
	{
		
	}
}

void in()
{
	
	for (int i = 0; i < N; i++)
	{
		
	}
}
*/

/*
//Test o visual
#define MAX 100

int N;
float a[MAX], x, mangIn[MAX];

void nhap(float &x, float a[], int &N);
void xuat(float a[], int N);
void xuly(float x, float a[], int N, float mangIn[]);
void in(int N, float mangIn[]);

int main()
{
	nhap(x, a, N);
	xuat(a, N);
	
	in(N, mangIn);

	printf("\n");

	//Xu ly de
	xuly(x, a, N, mangIn);

	//In ket qua

	in(N, mangIn);

	_getch();
	return 0;
}

void nhap(float &x, float a[], int &N)
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
		
	printf("Nhap x: ");
	scanf_s("%f", &x);
}

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%8.3f | ", a[i]);
	}
}

void xuly(float x, float a[], int N, float mangIn[])
{
	for (int i = 0; i < N; i++)
	{
		
	}
}

void in(int N, float mangIn[])
{
	
	for (int i = 0; i < N; i++)
	{
		
	}
}
*/
