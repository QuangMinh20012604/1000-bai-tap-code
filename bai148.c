#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm “số nguyên tố cuối cùng” trong mảng một chiều các số nguyên
//(nguyentocuoi). Nếu mảng không có số nguyên tố thì trả về giá trị -1.


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
	int nguyentocuoi = -1, count;

	for(int i = N - 1; i >= 0; i--)
	{
		count = 0;
		if (a[i] < 2)
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
			if(a[i] % j == 0)
			{
				count++;
			}
		}

		if(count == 0)
		{
			nguyentocuoi = a[i];
			break;
		}
	}

	if(count == 0)
		printf("So nguyen to cuoi cung trong mang la %d.", nguyentocuoi);
	else
		printf("%d", nguyentocuoi);

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
void SoNguyenToCuoiCung();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	SoNguyenToCuoiCung();

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

void SoNguyenToCuoiCung()
{
	int nguyentocuoi = -1, count;
	
	for(int i = N - 1; i >= 0; i--)
	{
		count = 0;
		if (a[i] < 2)
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
			nguyentocuoi = a[i];
			break;
		}
	}

	if(count == 0)
		printf("So nguyen to cuoi cung trong mang la %d.", nguyentocuoi);
	else
		printf("%d", nguyentocuoi);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void SoNguyenToCuoiCung(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoNguyenToCuoiCung(a, N);

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

void SoNguyenToCuoiCung(int a[], int N)
{
	int nguyentocuoi = -1, count;

	for (int i = N - 1; i >= 0; i--)
	{
		count = 0;
		if (a[i] < 2)
		{
			count++;
		}
		else if (a[i] == 2)
		{
			count = 0;
		}
		else
		{
			for (int j = 2; j < a[i]; j++)
			{
				if (a[i] % j == 0)
					count++;
			}
		}

		if (count == 0)
		{
			nguyentocuoi = a[i];
			break;
		}
	}

	if (count == 0)
		printf("So nguyen to cuoi cung trong mang la %d.", nguyentocuoi);
	else
		printf("%d", nguyentocuoi);
}

*/