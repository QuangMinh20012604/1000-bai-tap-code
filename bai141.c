#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “vị trí giá trị dương nhỏ nhất” trong mảng một chiều các số
//thực (vtduongnhonhat). Nếu mảng không có giá trị dương thì trả về
//một giá trị ngoài đoạn [0,n-1] là -1 nhằm mô tả không có vị trí nào thỏa
//điều kiện.


///khong sai ham

//
#define MAX 100

int main()
{
	int N;
	float a[MAX];

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
		scanf_s("%f", &a[i]);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int vitriduongnhonhat = -1, count = 0;
	float duongnhonhat = -1;

	for (int i = 0; i < N; i++)
	{

		if (a[i] > 0 && (duongnhonhat < 0 || a[i] < duongnhonhat))
		{
			count++;
			duongnhonhat = a[i];
			vitriduongnhonhat = i + 1;
		}
	}

	if(count == 0)
		printf("\n%d", vitriduongnhonhat);
	else
	{
		printf("\nGia tri duong nho nhat trong mang la %0.3f, o vi tri thu %d.", duongnhonhat, vitriduongnhonhat);
	}

	_getch();
	return 0;
}
//

//sai ham

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void ViTriDuongNhoNhat(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	ViTriDuongNhoNhat(a, N);

	_getch();
	return 0;
}

void nhap(float a[], int& N)
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
		scanf_s("%f", &a[i]);
	}
}

void xuat(float a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}

void ViTriDuongNhoNhat(float a[], int N)
{
	int vitriduongnhonhat = -1, count = 0;
	float duongnhonhat = -1;

	for (int i = 0; i < N; i++)
	{

		if (a[i] > 0 && (duongnhonhat < 0 || a[i] < duongnhonhat))
		{
			count++;
			duongnhonhat = a[i];
			vitriduongnhonhat = i + 1;
		}
	}

	if(count == 0)
		printf("\n%d", vitriduongnhonhat);
	else
	{
		printf("\nGia tri duong nho nhat trong mang la %0.3f, o vi tri thu %d.", duongnhonhat, vitriduongnhonhat);
	}
}

*/


/*
#define MAX 100

int N;
float a[MAX];

void nhap();

void xuat();

void ViTriDuongNhoNhat();

int main()
{

	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	ViTriDuongNhoNhat();

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
		scanf_s("%f", &a[i]);
	}
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%0.3f  ", a[i]);
	}
}

void ViTriDuongNhoNhat()
{
	int vitriduongnhonhat = -1, count = 0;
	float duongnhonhat = -1;

	for (int i = 0; i < N; i++)
	{

		if (a[i] > 0 && (duongnhonhat < 0 || a[i] < duongnhonhat))
		{
			count++;
			duongnhonhat = a[i];
			vitriduongnhonhat = i + 1;
		}
	}

	if(count == 0)
		printf("\n%d", vitriduongnhonhat);
	else
	{
		printf("\nGia tri duong nho nhat trong mang la %0.3f, o vi tri thu %d.", duongnhonhat, vitriduongnhonhat);
	}
}
*/