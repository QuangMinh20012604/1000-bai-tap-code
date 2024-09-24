#include<stdio.h>
#include<conio.h>
#include<math.h>


//(*) Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng
//khác nhau từng đôi một. Hãy viết hàm tìm hai giá trị gần nhau nhất
//trong mảng (gannhaunhat). Lưu ý: Mảng có các giá trị khác nhau từng
//đôi một còn có tên là mảng phân biệt.


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


	printf("\n\n");
	
	//Xu ly de
	float min, max, KhoangCachGanNhat = abs(a[0] - a[1]);
	
	for(int i = 0; i < N - 1; i ++)
	{
		float khoangcach = abs(a[i] -a[i+1]);

		if(KhoangCachGanNhat > khoangcach)
		{
			KhoangCachGanNhat = khoangcach;
			min = a[i];
			max = a[i+1];
		}
		printf("Khoang cach giua a[%d] va a[%d] la %0.3f.\n", i, i+1, khoangcach);
	}

	printf("\nHai gia tri gan nhau nhat trong mang la: %0.3f va %0.3f.", min, max);


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
void HaiSoCoKhoangCachGanNhauNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	HaiSoCoKhoangCachGanNhauNhat();

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
void HaiSoCoKhoangCachGanNhauNhat()
{
	float min = a[0], max = a[1], KhoangCachGanNhat = abs(a[0] - a[1]);
	
	for(int i = 0; i < N - 1; i ++)
	{
		float khoangcach = abs(a[i] -a[i+1]);

		if(KhoangCachGanNhat > khoangcach)
		{
			KhoangCachGanNhat = khoangcach;
			min = a[i];
			max = a[i+1];
		}
		printf("Khoang cach giua a[%d] va a[%d] la %0.3f.\n", i, i+1, khoangcach);
	}

	printf("\nHai gia tri gan nhau nhat trong mang la: %0.3f va %0.3f.", min, max);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);
void xuat(float a[], int N);
void HaiSoCoKhoangCachGanNhauNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	HaiSoCoKhoangCachGanNhauNhat(a, N);

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
void HaiSoCoKhoangCachGanNhauNhat(float a[], int N)
{
	float min = a[0], max = a[1], KhoangCachGanNhat = abs(a[0] - a[1]);

	for (int i = 0; i < N - 1; i++)
	{
		float khoangcach = abs(a[i] - a[i + 1]);

		if (KhoangCachGanNhat > khoangcach)
		{
			KhoangCachGanNhat = khoangcach;
			min = a[i];
			max = a[i + 1];
		}
		printf("Khoang cach giua a[%d] va a[%d] la %0.3f.\n", i, i + 1, khoangcach);
	}

	printf("\nHai gia tri gan nhau nhat trong mang la: %0.3f va %0.3f.", min, max);
}
*/