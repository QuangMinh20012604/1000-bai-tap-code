#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “số hoàn thiện cuối cùng” trong mảng một chiều các số nguyên
//(hoanthiencuoi). Nếu mảng không có số hoàn thiện thì hàm sẽ trả về giá trị -1


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
	for (int i = 0; i < N; i--)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int hoanthiencuoi = -1, count;	//count = 0: false	count = 1: true
	
	for(int i = N - 1; i >= 0; i--)
	{
		int S = 0;
		count = 0;
		if(a[i] > 0)
		{
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
				{
					S += j;
				}
			}
			if(S == a[i])
			{
				count = 1;
				hoanthiencuoi = S;
				break;
			}
		}
	}
	if(count == 0)
		printf("%d", hoanthiencuoi);
	else
		printf("So hoan thien cuoi cung trong mang la %d.", hoanthiencuoi);	

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
void sohoanthiencuoi();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	sohoanthiencuoi();

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

void sohoanthiencuoi()
{
	int hoanthiencuoi = -1, count;	//count = 0: false	count = 1: true
	
	for(int i = N - 1; i >= 0; i--)
	{
		int S = 0;
		count = 0;
		if(a[i] > 0)
		{
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
				{
					S += j;
				}
			}
			if(S == a[i])
			{
				count = 1;
				hoanthiencuoi = S;
				break;
			}
		}
	}
	if(count == 0)
		printf("%d", hoanthiencuoi);
	else
		printf("So hoan thien cuoi cung trong mang la %d.", hoanthiencuoi);	
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void sohoanthiencuoi(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	sohoanthiencuoi(a, N);

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

void sohoanthiencuoi(int a[], int N)
{
	int hoanthiencuoi = -1, count;	//count = 0: false	count = 1: true
	
	for(int i = N - 1; i >= 0; i--)
	{
		int S = 0;
		count = 0;
		if(a[i] > 0)
		{
			for(int j = 1; j < a[i]; j++)
			{
				if(a[i] % j == 0)
				{
					S += j;
				}
			}
			if(S == a[i])
			{
				count = 1;
				hoanthiencuoi = S;
				break;
			}
		}
	}
	if(count == 0)
		printf("%d", hoanthiencuoi);
	else
		printf("So hoan thien cuoi cung trong mang la %d.", hoanthiencuoi);	
}

*/