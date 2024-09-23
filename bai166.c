#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên
//trong mảng có dạng 2^k .Nếu mảng không tồn tại giá trị dạng 2k thì hàm
//sẽ trả về giá trị 0


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
	int temp, so2k, count = 0;

	for(int i = 0; i < N; i++)
	{
		temp = a[i];
		count = 0;

		if(temp < 2)
		{
			count = 1;
		}
		else
		{
			for(temp; temp > 1; temp /= 2)
			{
				if(temp % 2 == 1)
					count++;
			}
			if(count == 0)
			{
				so2k = a[i];
				break;
			}
		}
	}

	if(count != 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien trong mang co dang 2^k la: %d.", so2k);

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
void kiemtraso2k();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	kiemtraso2k();

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
void kiemtraso2k()
{
	int temp, so2k, count = 0;

	for(int i = 0; i < N; i++)
	{
		temp = a[i];
		count = 0;

		if(temp < 2)
		{
			count = 1;
		}
		else
		{
			for(temp; temp > 1; temp /= 2)
			{
				if(temp % 2 == 1)
					count++;
			}
			if(count == 0)
			{
				so2k = a[i];
				break;
			}
		}
	}

	if(count != 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien trong mang co dang 2^k la: %d.", so2k);
}

//

/*
//Test o visual
#define MAX 100



void nhap(int a[], int &N);
void xuat(int a[], int N);
void kiemtraso2k(int a[], int N);

int main()
{
	int N, a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	kiemtraso2k(a, N);

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
void kiemtraso2k(int a[], int N)
{
	int temp, so2k, count = 0;

	for (int i = 0; i < N; i++)
	{
		temp = a[i];
		count = 0;

		if (temp < 2)
		{
			count = 1;
		}
		else
		{
			for (temp; temp > 1; temp /= 2)
			{
				if (temp % 2 == 1)
					count++;
			}
			if (count == 0)
			{
				so2k = a[i];
				break;
			}
		}
	}

	if (count != 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien trong mang co dang 2^k la: %d.", so2k);
}
*/