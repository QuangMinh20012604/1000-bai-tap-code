#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số thực. Hãy viết hàm tìm một vị trí trong
//mảng thỏa hai điền kiện: có hai giá trị lân cận và giá trị tại vị trí đó
//bằng tích hai giá trị lân cận. Nếu mảng không tồn tại giá trị như vậy thì
//hàm trả về giá trị - 1.


//khong sai ham

/*
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
		printf("%0.3f  ", a[i]);
	}


	printf("\n");
	
	//Xu ly de
	int vitri = -1;
	for(int i = 1; i < N; i++)
	{
		if(a[i] == (a[i - 1] * a[i + 1]))
		{
			vitri = i + 1;
			break;
		}
	}
	if(vitri == -1)
		printf("\n%d", vitri);
	else
		printf("\nVi tri trong mang thoa man dieu kien co tich hai gia tri lan can bang chinh no la: %d.", vitri);

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N;
float a[MAX];

void nhap();
void xuat();
void VitriThoaMan();

int main()
{
	nhap();
	xuat();
	

	printf("\n");

	//Xu ly de
	VitriThoaMan();
	
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
void VitriThoaMan()
{
	int vitri = -1;
	for(int i = 1; i < N; i++)
	{
		if(a[i] == (a[i - 1] * a[i + 1]))
		{
			vitri = i + 1;
			break;
		}
	}
	if(vitri == -1)
		printf("\n%d", vitri);
	else
		printf("\nVi tri trong mang thoa man dieu kien co tich hai gia tri lan can bang chinh no la: %d.", vitri);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);
void xuat(float a[], int N);
void VitriThoaMan(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	nhap(a, N);
	xuat(a, N);


	printf("\n");

	//Xu ly de
	VitriThoaMan(a, N);

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
void VitriThoaMan(float a[], int N)
{
	int vitri = -1;
	for (int i = 1; i < N; i++)
	{
		if (a[i] == (a[i - 1] * a[i + 1]))
		{
			vitri = i + 1;
			break;
		}
	}
	if (vitri == -1)
		printf("\n%d", vitri);
	else
		printf("\nVi tri trong mang thoa man dieu kien co tich hai gia tri lan can bang chinh no la: %d.", vitri);
}
*/