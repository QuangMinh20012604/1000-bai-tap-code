#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số thực, hãy viết hàm tìm giá trị âm cuối cùng
//lớn hơn giá trị -1 (cuoicung). Nếu mảng không có giá trị thỏa điều kiện
//trên thì hàm trả về giá trị không chẵn là 0.


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
	float amcuoicung = 0;

	for(int i = N - 1; i >= 0; i--)
	{
		if(a[i] < 0 && a[i] > -1)
		{
			amcuoicung = a[i];
			break;
		}
	}

	if(amcuoicung == 0)
		printf("\n0");
	else
		printf("\nGia tri am cuoi cung lon hon gia tri -1 la %0.3f.", amcuoicung);

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
float amcuoicungthoa();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	float amcuoicung = amcuoicungthoa();

	if(amcuoicung == 0)
		printf("\n0");
	else
		printf("\nGia tri am cuoi cung lon hon gia tri -1 la %0.3f.", amcuoicung);

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

float amcuoicungthoa()
{
	float amcuoicung = 0;

	for(int i = N - 1; i >= 0; i--)
	{
		if(a[i] < 0 && a[i] > -1)
		{
			amcuoicung = a[i];
			break;
		}
	}
	return amcuoicung;
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

float amcuoicungthoa(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	float amcuoicung = amcuoicungthoa(a, N);

	if(amcuoicung == 0)
		printf("\n0");
	else
		printf("\nGia tri am cuoi cung lon hon gia tri -1 la %0.3f.", amcuoicung);


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

float amcuoicungthoa(float a[], int N)
{
	float amcuoicung = 0;

	for(int i = N - 1; i >= 0; i--)
	{
		if(a[i] < 0 && a[i] > -1)
		{
			amcuoicung = a[i];
			break;
		}
	}
	return amcuoicung;
}

*/