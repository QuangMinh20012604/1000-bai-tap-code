#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm ước
//chung lớn nhất của tất cả các phần tử trong mản


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
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !\n");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		do
		{
			printf("Nhap a[%d]: ", i);
			scanf_s("%d", &a[i]);
			if(a[i] <= 0)	
				printf("Gia tri phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(a[i] <= 0);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	
	//Tim so nho nhat trong mang
	int min = a[0];
	
	for(int i = 0; i < N; i++)
	{
		if(min > a[i])
			min = a[i];
	}
	
	//printf("Gia tri nho nhat trong mang la: %d.", min);

	//Tim uoc chung lon nhat
	int UCLN = 1, count = 0;
	for(int i = 1; i <= min; i++)
	{
		count = 0;
		for(int j = 0; j < N; j++)
		{
			if(a[j] % i != 0)
				count++;
		}

		if(count == 0)
		{
			UCLN = i;
		}
	}

	printf("\nUoc chung lon nhat cua cac phan tu trong mang la: %d.", UCLN);

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX];
int min, UCLN;

void nhap();
void xuat();
int SoNhoNhatTrongMang();
int UocChungLonNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	//Tim so nho nhat trong mang
	min = SoNhoNhatTrongMang();
	
	//printf("Gia tri nho nhat trong mang la: %d.", min);

	//Tim uoc chung lon nhat
	UCLN = UocChungLonNhat();	

	printf("\nUoc chung lon nhat cua cac phan tu trong mang la: %d.", UCLN);


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

int SoNhoNhatTrongMang()
{
	int min = a[0];

	for(int i = 0; i < N; i++)
	{
		if(min > a[i])
			min = a[i];
	}

	return  min;
}

int UocChungLonNhat()
{
	int UCLN = 1, count = 0;
	for(int i = 1; i <= min; i++)
	{
		count = 0;
		for(int j = 0; j < N; j++)
		{
			if(a[j] % i != 0)
				count++;
		}

		if(count == 0)
		{
			UCLN = i;
		}
	}
	return UCLN;
}
//

/*
//Test o visual
#define MAX 100



void nhap(int a[], int& N);
void xuat(int a[], int N);
int SoNhoNhatTrongMang(int a[], int N);
int UocChungLonNhat(int a[], int N, int min);

int main()
{
	int N, a[MAX];
	int min, UCLN;

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de

	//Tim so nho nhat trong mang
	min = SoNhoNhatTrongMang(a, N);

	//printf("Gia tri nho nhat trong mang la: %d.", min);

	//Tim uoc chung lon nhat
	UCLN = UocChungLonNhat(a, N, min);

	printf("\nUoc chung lon nhat cua cac phan tu trong mang la: %d.", UCLN);


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

int SoNhoNhatTrongMang(int a[], int N)
{
	int min = a[0];

	for (int i = 0; i < N; i++)
	{
		if (min > a[i])
			min = a[i];
	}

	return  min;
}

int UocChungLonNhat(int a[], int N, int min)
{
	int UCLN = 1, count = 0;
	for (int i = 1; i <= min; i++)
	{
		count = 0;
		for (int j = 0; j < N; j++)
		{
			if (a[j] % i != 0)
				count++;
		}

		if (count == 0)
		{
			UCLN = i;
		}
	}
	return UCLN;
}
*/