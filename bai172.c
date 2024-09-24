#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm bội
//chung nhỏ nhất của tất cả các phần tử trong mảng.


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
	
	//Tim so lon nhat trong mang && Tich cac phan tu trong mang
	int max = a[0], T = 1;
	{
		for(int i = 0; i < N; i++)
		{
			if(max < a[i])
			{
				max = a[i];
			}	
			T *= a[i];
		}
	}
	printf("\nGia tri lon nhat trong mang la: %d.", max);
	printf("\nT = %d.", T);

	//tim BCNN 
	int BCNN, count = 0;

	for(int i = max; i <= T; i += max)
	{
		count = 0;
		for(int j = 0; j < N; j++)
		{
			if(i % a[j] != 0)
				count++;
		}

		if(count == 0)
		{
			BCNN = i;
			break;
		}
	}

	printf("\nBoi chung nho nhat cua cac phan tu trong mang la: %d.", BCNN);

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX];

int max, T, BCNN;

void nhap();
void xuat();

int TimSoLonNhat();
int TichMang();
int BoiChungNhoNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	//Tim so lon nhat trong mang && Tich cac phan tu trong mang
	
	max = TimSoLonNhat();
	printf("\nGia tri lon nhat trong mang la: %d.", max);
	
	T = TichMang();
	printf("\nT = %d.", T);

	//tim BCNN 

	BCNN = BoiChungNhoNhat();

	printf("\nBoi chung nho nhat cua cac phan tu trong mang la: %d.", BCNN);

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

int TimSoLonNhat()
{
	int max = a[0];
	{
		for(int i = 0; i < N; i++)
		{
			if(max < a[i])
			{
				max = a[i];
			}	
		}
	}
	return max;
}

int TichMang()
{
	int T = 1;
	{
		for(int i = 0; i < N; i++)
		{
			T *= a[i];
		}
	}
	return T;
}

int BoiChungNhoNhat()
{
	int BCNN, count = 0;

	for(int i = max; i <= T; i += max)
	{
		count = 0;
		for(int j = 0; j < N; j++)
		{
			if(i % a[j] != 0)
				count++;
		}

		if(count == 0)
		{
			BCNN = i;
			break;
		}
	}
	return BCNN;
}
//

/*
//Test o visual
#define MAX 100

int N, a[MAX];

int max, T, BCNN;

void nhap(int a[], int& N);
void xuat(int a[], int N);

int TimSoLonNhat(int a[], int N);
int TichMang(int a[], int N);
int BoiChungNhoNhat(int a[], int N, int max, int T);

int main()
{
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	//Tim so lon nhat trong mang && Tich cac phan tu trong mang

	max = TimSoLonNhat(a, N);
	printf("\nGia tri lon nhat trong mang la: %d.", max);

	T = TichMang(a, N);
	printf("\nT = %d.", T);

	//tim BCNN 

	BCNN = BoiChungNhoNhat(a, N, max, T);

	printf("\nBoi chung nho nhat cua cac phan tu trong mang la: %d.", BCNN);

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

int TimSoLonNhat(int a[], int N)
{
	int max = a[0];
	{
		for (int i = 0; i < N; i++)
		{
			if (max < a[i])
			{
				max = a[i];
			}
		}
	}
	return max;
}

int TichMang(int a[], int N)
{
	int T = 1;
	{
		for (int i = 0; i < N; i++)
		{
			T *= a[i];
		}
	}
	return T;
}

int BoiChungNhoNhat(int a[], int N, int max, int T)
{
	int BCNN = 0, count = 0;

	for (int i = max; i <= T; i += max)
	{
		count = 0;
		for (int j = 0; j < N; j++)
		{
			if (i % a[j] != 0)
				count++;
		}

		if (count == 0)
		{
			BCNN = i;
			break;
		}
	}
	return BCNN;
}
*/