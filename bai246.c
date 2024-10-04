#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy kiểm tra mảng một chiều các số thực có đối xứng hay không?
//(ktdoixung).


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
	int flat = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i], S = 0;
		for(temp; temp != 0; temp /= 10)
		{
			S = S * 10 + temp % 10;
		}

		if(S == a[i])
		{
			flat = 1;
			break;
		}
	}

	if(flat == 0)
		printf("\nMang khong co so doi xung.");
	else
		printf("\nMang co so doi xung.");

	_getch();
	return 0;
}
*/

//sai ham

//
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
	int flat = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i], S = 0;
		for(temp; temp != 0; temp /= 10)
		{
			S = S * 10 + temp % 10;
		}

		if(S == a[i])
		{
			flat = 1;
			break;
		}
	}

	if(flat == 0)
		printf("\nMang khong co so doi xung.");
	else
		printf("\nMang co so doi xung.");
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
}

void Xuly(int a[], int N)
{
	int flat = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i], S = 0;
		for(temp; temp != 0; temp /= 10)
		{
			S = S * 10 + temp % 10;
		}

		if(S == a[i])
		{
			flat = 1;
			break;
		}
	}

	if(flat == 0)
		printf("\nMang khong co so doi xung.");
	else
		printf("\nMang co so doi xung.");
}
*/