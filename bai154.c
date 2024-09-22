#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “vị trí giá trị âm lớn nhất” trong mảng các số thực
//(vtamlonnhat). Nếu mảng không có giá trị âm thì trả về -1


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
	float amlonnhat = 0;
	int vtamlonnhat = -1;

	//Tim so am dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amlonnhat = a[i];
			vtamlonnhat = i + 1;
			break;
		}
	}

	for(int i = vtamlonnhat; i < N; i++)
	{
		if((a[i] < 0) && (a[i] > amlonnhat))
		{
			amlonnhat = a[i];
			vtamlonnhat = i + 1;
		}
	}
	if(amlonnhat == 0)
		printf("\n%d", vtamlonnhat);
	else
		printf("\nGia tri am lon nhat trong mang la %0.3f, nam o vi tri thu %d.", amlonnhat, vtamlonnhat);

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
void VitriGiaTriAmLonNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	VitriGiaTriAmLonNhat();

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

void VitriGiaTriAmLonNhat()
{
	float amlonnhat = 0;
	int vtamlonnhat = -1;

	//Tim so am dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			amlonnhat = a[i];
			vtamlonnhat = i + 1;
			break;
		}
	}

	for(int i = vtamlonnhat; i < N; i++)
	{
		if((a[i] < 0) && (a[i] > amlonnhat))
		{
			amlonnhat = a[i];
			vtamlonnhat = i + 1;
		}
	}
	if(amlonnhat == 0)
		printf("\n%d", vtamlonnhat);
	else
		printf("\nGia tri am lon nhat trong mang la %0.3f, nam o vi tri thu %d.", amlonnhat, vtamlonnhat);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);
void xuat(int a[], int N);
void VitriGiaTriAmLonNhat(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	VitriGiaTriAmLonNhat(a, N);

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

void VitriGiaTriAmLonNhat(int a[], int N)
{
	float amlonnhat = 0;
	int vtamlonnhat = -1;

	//Tim so am dau tien
	for (int i = 0; i < N; i++)
	{
		if (a[i] < 0)
		{
			amlonnhat = a[i];
			vtamlonnhat = i + 1;
			break;
		}
	}

	for (int i = vtamlonnhat; i < N; i++)
	{
		if ((a[i] < 0) && (a[i] > amlonnhat))
		{
			amlonnhat = a[i];
			vtamlonnhat = i + 1;
		}
	}
	if (amlonnhat == 0)
		printf("\n%d", vtamlonnhat);
	else
		printf("\nGia tri am lon nhat trong mang la %0.3f, nam o vi tri thu %d.", amlonnhat, vtamlonnhat);
}
*/