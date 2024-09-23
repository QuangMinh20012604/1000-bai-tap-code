#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất
//trong mảng có dạng 5^k . Nếu mảng không tồn tại giá trị dạng 5k thì hàm
//sẽ trả về giá trị 0.


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
	int temp, so5k = 0, count;

	for (int i = 0; i < N; i++)
	{
		temp = a[i];
		count = 0;

		if (temp <= 1)
		{
			count = 1;
		}
		else
		{
			for (temp; temp > 1; temp /= 5)
			{
				if (temp % 5 != 0)
					count++;
			}

			if (count == 0)
			{
				if (so5k == 0)	//gan vao so5k voi gia tri dau tien thoa man dieu kien
				{
					so5k = a[i];
				}

				if (a[i] > so5k)
				{
					so5k = a[i];
				}
			}
		}
	}

	if(count != 0)
		printf("\n%d", so5k);
	else
		printf("\nSo lon nhat thoa man dieu kien co dang 5^k trong mang la: %d.", so5k);

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
void kiemtraso5k();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	kiemtraso5k();

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
void kiemtraso5k()
{
	int temp, so5k = 0, count = 0;

	for (int i = 0; i < N; i++)
	{
		temp = a[i];
		count = 0;

		if (temp <= 1)
		{
			count = 1;
		}
		else
		{
			for (temp; temp > 1; temp /= 5)
			{
				if (temp % 5 != 0)
					count++;
			}

			if (count == 0)
			{
				if (so5k == 0)	//gan vao so5k voi gia tri dau tien thoa man dieu kien
				{
					so5k = a[i];
				}

				if (a[i] > so5k)
				{
					so5k = a[i];
				}
			}
		}
	}

	if(count != 0)
		printf("\n%d", so5k);
	else
		printf("\nSo lon nhat thoa man dieu kien co dang 5^k trong mang la: %d.", so5k);
}

//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);
void xuat(int a[], int N);
void kiemtraso5k(int a[], int N);

int main()
{
	int N, a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	kiemtraso5k(a, N);

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
void kiemtraso5k(int a[], int N)
{
	int temp, so5k = 0, count = 0;

	for (int i = 0; i < N; i++)
	{
		temp = a[i];
		count = 0;

		if (temp <= 1)
		{
			count = 1;
		}
		else
		{
			for (temp; temp > 1; temp /= 5)
			{
				if (temp % 5 != 0)
					count++;
			}

			if (count == 0)
			{
				if (so5k == 0)	//gan vao so5k voi gia tri dau tien thoa man dieu kien
				{
					so5k = a[i];
				}

				if (a[i] > so5k)
				{
					so5k = a[i];
				}
			}
		}
	}

	if (count != 0)
		printf("\n%d", so5k);
	else
		printf("\nSo lon nhat thoa man dieu kien co dang 5^k trong mang la: %d.", so5k);
}
*/