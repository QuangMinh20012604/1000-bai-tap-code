#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “số nguyên tố đầu tiên” trong mảng một chiều các số nguyên
//(nguyentodau). Nếu mảng không có số nguyên tố thì trả về giá trị -1.


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
	
	int nguyentodau = -1, count = 0;	//count = 0: false	-	count != 0: true

	for(int i = 0; i < N; i++)
	{
		count = 0;	//reset for(j)
		if(a[i] < 2)
		{
			count++;
		}	
		else if(a[i] == 2)
		{
			count = 0;
		}
		else
		{
			for(int j = 2; j < a[i]; j++)
			{

				if(a[i] % j == 0)
				count++;
			}
		}

		if(count == 0)
		{
			nguyentodau = a[i];
			break;
		}
	}
	if(count != 0)
		printf("%d", nguyentodau);
	else
		printf("So nguyen to dau tien trong mang la %d.", nguyentodau);

	_getch();
	return 0;


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
void songuyentodautien();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	songuyentodautien();

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

void songuyentodautien()
{
	int nguyentodau = -1, count = 0;	//count = 0: false	-	count != 0: true

	for(int i = 0; i < N; i++)
	{
		count = 0;	//reset for(j)
		if(a[i] < 2)
		{
			count++;
		}	
		else
		{	
			if(a[i] == 2)
			{
				count = 0;
			}
			else
			{
				for(int j = 2; j < a[i]; j++)
				{

					if(a[i] % j == 0)
					count++;
				}
			}
		}

		if(count == 0)
		{
			nguyentodau = a[i];
			break;
		}
	}
	if(count != 0)
		printf("%d", nguyentodau);
	else
		printf("So nguyen to dau tien trong mang la %d.", nguyentodau);
}
*/

//
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void songuyentodautien(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	songuyentodautien(a, N);

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

void songuyentodautien(int a[], int N)
{
	int nguyentodau = -1, count = 0;	//count = 0: false	-	count != 0: true

	for(int i = 0; i < N; i++)
	{
		count = 0;	//reset for(j)
		if(a[i] < 2)
		{
			count++;
		}	
		else
		{	
			if(a[i] == 2)
			{
				count = 0;
			}
			else
			{
				for(int j = 2; j < a[i]; j++)
				{

					if(a[i] % j == 0)
					count++;
				}
			}
		}

		if(count == 0)
		{
			nguyentodau = a[i];
			break;
		}
	}
	if(count != 0)
		printf("%d", nguyentodau);
	else
		printf("So nguyen to dau tien trong mang la %d.", nguyentodau);
}

//