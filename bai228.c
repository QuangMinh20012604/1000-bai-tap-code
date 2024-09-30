#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy xác định số lượng các phần tử kề nhau mà số đứng sau cùng dấu
// số đứng trước và có giá trị tuyệt đối lớn hơn (demgiatri).


//Cho 1 mang 

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
	int demgiatri = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] * a[i + 1] > 0 && abs(a[i]) < abs(a[i + 1]))
			{
				//printf("%0.3f  ", a[i]);
				demgiatri++;
			}
		}
		else if(a[i] * a[i - 1] > 0 && abs(a[i - 1]) < abs(a[i]))
			{
				//printf("%0.3f  ", a[i]);
				demgiatri++;
			}
	}

	printf("\n\nSo luong cac phan tu ke nhau ma so dung sau cung dau so dung truoc va co gia tri tuyet doi lon hon la: %d. ", demgiatri);

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
	int demgiatri = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] * a[i + 1] > 0 && abs(a[i]) < abs(a[i + 1]))
			{
				//printf("%0.3f  ", a[i]);
				demgiatri++;
			}
		}
		else if(a[i] * a[i - 1] > 0 && abs(a[i - 1]) < abs(a[i]))
			{
				//printf("%0.3f  ", a[i]);
				demgiatri++;
			}
	}

	printf("\n\nSo luong cac phan tu ke nhau ma so dung sau cung dau so dung truoc va co gia tri tuyet doi lon hon la: %d. ", demgiatri);
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

	printf("\n");

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

void Xuly(float a[], int N)
{
	int demgiatri = 0;

	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			if(a[i] * a[i + 1] > 0 && abs(a[i]) < abs(a[i + 1]))
			{
				//printf("%0.3f  ", a[i]);
				demgiatri++;
			}
		}
		else if(a[i] * a[i - 1] > 0 && abs(a[i - 1]) < abs(a[i]))
			{
				//printf("%0.3f  ", a[i]);
				demgiatri++;
			}
	}

	printf("\n\nSo luong cac phan tu ke nhau ma so dung sau cung dau so dung truoc va co gia tri tuyet doi lon hon la: %d. ", demgiatri);
}
*/