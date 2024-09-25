#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng số thực có nhiều hơn ba giá trị và các giá trị trong mảng
//khác nhau từng đôi một. Hãy liệt kê tất cả các bộ ba giá trị (a,b,c) thỏa
//điều kiện a = b + c với a, b, c là ba giá trị khác nhau trong mảng. 
//Ví dụ: (6, 2, 4).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N;
	float mang[MAX];

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
		printf("Nhap mang[%d]: ", i);
		scanf_s("%f", &mang[i]);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", mang[i]);
	}


	printf("\nCac bo ba gia tri (a, b, c) thoa dieu kien a = b + c: ");
	
	//Xu ly de
	float a, b, c;
	
	int count_bo3 = 0;
	
	for(int i = 0; i < N; i++)
	{
		a = mang[i];


		for(int j = 0; j < N && j != i; j++)
		{
			b = mang[j];

			for(int k = 0; k < N && k != i && k != j; k++)
			{
				c = mang[k];

				if(a == mang[j] + mang[k])
				{
					printf("\n(%0.3f, %0.3f, %0.3f)  ", a, b,c);
					count_bo3++;
				}				
			}
		}

	}
	if(count_bo3 == 0)
		printf("\n\nKhong ton tai bo ba gia tri (a, b, c) thoa dieu kien a = b + c.");


	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float mang[MAX];

void nhap();
void xuat();
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\nCac bo ba gia tri (a, b, c) thoa dieu kien a = b + c: ");

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
		printf("Nhap mang[%d]: ", i);
		scanf_s("%f", &mang[i]);
	}
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", mang[i]);
	}
}
void SoThoaManDieuKien()
{
	float a, b, c;
	
	int count_bo3 = 0;
	
	for(int i = 0; i < N; i++)
	{
		a = mang[i];


		for(int j = 0; j < N && j != i; j++)
		{
			b = mang[j];

			for(int k = 0; k < N && k != i && k != j; k++)
			{
				c = mang[k];

				if(a == mang[j] + mang[k])
				{
					printf("\n(%0.3f, %0.3f, %0.3f)  ", a, b,c);
					count_bo3++;
				}				
			}
		}

	}
	if(count_bo3 == 0)
		printf("\n\nKhong ton tai bo ba gia tri (a, b, c) thoa dieu kien a = b + c.");
}
//

/*
//Test o visual
#define MAX 100

void nhap(int mang[], int &N);
void xuat(int mang[], int N);
void SoThoaManDieuKien(int mang[], int N);

int main()
{
	int N;
	float mang[MAX];

	nhap(mang, N);
	xuat(mang, N);

	printf("\nCac bo ba gia tri (a, b, c) thoa dieu kien a = b + c: ");

	//Xu ly de
	SoThoaManDieuKien(mang, N);

	_getch();
	return 0;
}

void nhap(int mang[], int &N)
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
		printf("Nhap mang[%d]: ", i);
		scanf_s("%f", &mang[i]);
	}
}

void xuat(int mang[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", mang[i]);
	}
}
void SoThoaManDieuKien(int mang[], int N)
{
	float a, b, c;
	
	int count_bo3 = 0;
	
	for(int i = 0; i < N; i++)
	{
		a = mang[i];


		for(int j = 0; j < N && j != i; j++)
		{
			b = mang[j];

			for(int k = 0; k < N && k != i && k != j; k++)
			{
				c = mang[k];

				if(a == mang[j] + mang[k])
				{
					printf("\n(%0.3f, %0.3f, %0.3f)  ", a, b,c);
					count_bo3++;
				}				
			}
		}

	}
	if(count_bo3 == 0)
		printf("\n\nKhong ton tai bo ba gia tri (a, b, c) thoa dieu kien a = b + c.");
}
*/