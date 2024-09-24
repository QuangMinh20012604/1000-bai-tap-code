#include<stdio.h>
#include<conio.h>
#include<math.h>


//(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm chữ số xuất
//hiện ít nhất trong mảng (timchuso)


//khong sai ham

//
#define MAX 100

int main()
{
	int N, a[MAX], mang_chuso[10] = {0};

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

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");

	//Xu ly de

	//dem so luong cac chu so
	for (int i = 0; i < N; i++)
	{
		for (int temp = a[i]; temp != 0; temp /= 10)
		{
			int chuso = temp % 10;
			mang_chuso[chuso]++;
		}
	}

	//In mangchuso
	for (int i = 0; i < 10; i++)
	{
		if (mang_chuso[i] != 0)	//chỉ in những số xuất hiện
		{
			printf("\nChu so %d xuat hien %d lan.", i, mang_chuso[i]);
		}
	}

	//Tim chu so it nhat trong mang
	int chusoitnhat = abs(a[0] % 10); //gan cho chusoitnhat 1 số đã xuất hiện trong mảng để so sánh
	for (int i = 1; i < 10; i++)
	{
		if (mang_chuso[i] != 0)
		{
			if (mang_chuso[i] < mang_chuso[chusoitnhat])
			{
				chusoitnhat = i;
			}
		}
	}

	printf("\n\nChu so xuat hien it nhat trong mang la %d.", chusoitnhat);

	_getch();
	return 0;
}
//

//sai ham

/*
#define MAX 100

int N, a[MAX], mang_chuso[10] = { 0 };

void nhap();
void xuat();
void DemSoLuongCacChuSo();
void TimChuSoXuatHienItNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	//dem so luong cac chu so
	DemSoLuongCacChuSo();

	//Tim chu so it nhat trong mang
	TimChuSoXuatHienItNhat();

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

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}

void DemSoLuongCacChuSo()
{
	for (int i = 0; i < N; i++)
	{
		for (int temp = a[i]; temp != 0; temp /= 10)
		{
			int chuso = temp % 10;
			mang_chuso[chuso]++;
		}
	}

	//In mangchuso
	for (int i = 0; i < 10; i++)
	{
		if (mang_chuso[i] != 0)
		{
			printf("\nChu so %d xuat hien %d lan.", i, mang_chuso[i]);
		}
	}
}

void TimChuSoXuatHienItNhat()
{
	int chusoitnhat = abs(a[0] % 10); //gan cho chusoitnhat 1 số đã xuất hiện trong mảng để so sánh
	for (int i = 1; i < 10; i++)
	{
		if (mang_chuso[i] != 0)
		{
			if (mang_chuso[i] < mang_chuso[chusoitnhat])
			{
				chusoitnhat = i;
			}
		}
	}

	printf("\n\nChu so xuat hien it nhat trong mang la %d.", chusoitnhat);
}
*/

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);
void xuat(int a[], int N);
void DemSoLuongCacChuSo(int a[], int N, int mang_chuso[]);
void TimChuSoXuatHienItNhat(int a[], int N, int mang_chuso[]);

int main()
{
	int N, a[MAX], mang_chuso[10] = { 0 };

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de

	//dem so luong cac chu so
	DemSoLuongCacChuSo(a, N, mang_chuso);

	//Tim chu so it nhat trong mang
	TimChuSoXuatHienItNhat(a, N, mang_chuso);

	_getch();
	return 0;
}
void nhap(int a[], int &N)
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

void DemSoLuongCacChuSo(int a[], int N, int mang_chuso[])
{
	for (int i = 0; i < N; i++)
	{
		for (int temp = a[i]; temp != 0; temp /= 10)
		{
			int chuso = temp % 10;
			mang_chuso[chuso]++;
		}
	}

	//In mangchuso
	for (int i = 0; i < 10; i++)
	{
		if (mang_chuso[i] != 0)	//chỉ in những số xuất hiện
		{
			printf("\nChu so %d xuat hien %d lan.", i, mang_chuso[i]);
		}
	}
}

void TimChuSoXuatHienItNhat(int a[], int N, int mang_chuso[])
{
	int chusoitnhat = abs(a[0] % 10); //gan cho chusoitnhat 1 số đã xuất hiện trong mảng để so sánh
	for (int i = 1; i < 10; i++)
	{
		if (mang_chuso[i] != 0)
		{
			if (mang_chuso[i] < mang_chuso[chusoitnhat])
			{
				chusoitnhat = i;
			}
		}
	}

	printf("\n\nChu so xuat hien it nhat trong mang la %d.", chusoitnhat);
}
*/