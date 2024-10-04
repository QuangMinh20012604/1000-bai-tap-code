#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy thêm một giá trị x vào trong mảng tăng dần mà vẫn giữ nguyên
//tính đơn điệu tăng của mảng (thembaotoan).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX], x;

	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N >= MAX)
			printf("\nSo phan tu phai lon hon 0 va nho hon 100. Xin kiem tra lai !");
	}while(N < 1 || N >= MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);

	//In mang
	printf("\nMang ban dau:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	//xap sep mang tang dan khi chua them x
	for(int i = 0; i < N - 1; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}

	//Tìm vị trí mà x nhỏ hơn a[i] đầu tiên
	int vitri = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			vitri = i+1;
			break;
		}
	}
	//xap sep mang tang dan khi chua them x
	for(int i = N; i > vitri - 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[vitri - 1] = x;
	

	printf("\n\nMang sau khi da them x:\n");

	for (int i = 0; i < N + 1; i++)
	{
		printf("%d  ", a[i]);
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX], x;

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

	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
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
	//xap sep mang tang dan khi chua them x
	for(int i = 0; i < N - 1; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}

	//Tìm vị trí mà x nhỏ hơn a[i] đầu tiên
	int vitri = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			vitri = i+1;
			break;
		}
	}
	//xap sep mang tang dan khi chua them x
	for(int i = N; i > vitri - 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[vitri - 1] = x;
	

	printf("\n\nMang sau khi da them x:\n");

	for (int i = 0; i < N + 1; i++)
	{
		printf("%d  ", a[i]);
	}
}
//

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

	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
}

void Xuly(int a[], int)
{
	//xap sep mang tang dan khi chua them x
	for(int i = 0; i < N - 1; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nMang sau khi sap xep:\n");

	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}

	//Tìm vị trí mà x nhỏ hơn a[i] đầu tiên
	int vitri = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			vitri = i+1;
			break;
		}
	}
	//xap sep mang tang dan khi chua them x
	for(int i = N; i > vitri - 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[vitri - 1] = x;
	

	printf("\n\nMang sau khi da them x:\n");

	for (int i = 0; i < N + 1; i++)
	{
		printf("%d  ", a[i]);
	}
}
*/