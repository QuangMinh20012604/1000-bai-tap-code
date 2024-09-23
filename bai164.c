#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên, hãy viết hàm tìm giá trị đầu tiên
//trong mảng thỏa tính chất số gánh. (ví dụ giá trị 12321).


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
	int temp, soganh, vitri = -1;

	for(int i = 0; i < N; i++)
	{	
		soganh = 0;
		temp = a[i];

		for(temp; temp != 0; temp /= 10)
		{
			soganh = soganh * 10 + (temp % 10);
		}
		if(soganh == a[i])
		{
			vitri = i + 1;
			break;
		}
	}
	
	if(vitri == -1)
		printf("\nKhong ton tai so ganh nao trong mang.");
	else
		printf("\nVi tri so ganh dau tien trong mang la: %d.", vitri);

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
int VitriSoGanh();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	int vitri = VitriSoGanh();

	if(vitri == -1)
		printf("\nKhong ton tai so ganh nao trong mang.");
	else
		printf("\nVi tri so ganh dau tien trong mang la: %d.", vitri);

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

int VitriSoGanh()
{
	int temp, soganh, vitri = -1;

	for(int i = 0; i < N; i++)
	{	
		soganh = 0;
		temp = a[i];

		for(temp; temp != 0; temp /= 10)
		{
			soganh = soganh * 10 + (temp % 10);
		}
		if(soganh == a[i])
		{
			vitri = i + 1;
			break;
		}
	}
	return vitri;
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void at(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	at(a, N);

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

void at(float a[], int N)
{

}

*/