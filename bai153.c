#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “giá trị chẵn nhỏ nhất” trong mảng một chiều các số nguyên
//(channhonhat). Nếu mảng không có giá trị chẵn thì trả về giá trị không chẵn là -1.


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
	int channhonhat = -1;

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			channhonhat = a[i];
			break;
		}
	}

	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2 == 0) && (a[i] < channhonhat))
			channhonhat = a[i];
	}

	if(channhonhat == -1)
		printf("\n%d", channhonhat);
	else
		printf("\nGia tri chan nho nhat trong mang la %d.", channhonhat);


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
void SoChanNhoNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	SoChanNhoNhat();

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

void SoChanNhoNhat()
{
	int channhonhat = -1;

	for (int i = 0; i < N; i++)
	{
		if (a[i] % 2 == 0)
		{
			channhonhat = a[i];
			break;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2 == 0) && (a[i] < channhonhat))
			channhonhat = a[i];
	}

	if (channhonhat == -1)
		printf("\n%d", channhonhat);
	else
		printf("\nGia tri chan nho nhat trong mang la %d.", channhonhat);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void SoChanNhoNhat(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoChanNhoNhat(a, N);

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

void SoChanNhoNhat(int a[], int N)
{
	int channhonhat = -1;

	for (int i = 0; i < N; i++)
	{
		if (a[i] % 2 == 0)
		{
			channhonhat = a[i];
			break;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if ((a[i] % 2 == 0) && (a[i] < channhonhat))
			channhonhat = a[i];
	}

	if (channhonhat == -1)
		printf("\n%d", channhonhat);
	else
		printf("\nGia tri chan nho nhat trong mang la %d.", channhonhat);
}

*/