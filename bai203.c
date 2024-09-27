#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tổng các giá trị có chữ số hàng chục là chữ số 5 có trong mảng các
// số nguyên (tongchuc).


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


	printf("\nCac gia tri co chu so hang chuc la chu so 5 trong mang la:\n");
	
	//Xu ly de
	int hangchuc, tongchuc = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i] / 10;	// lấy hàng chục
		hangchuc = abs(temp % 10); 	// kiểm tra hàng chục, nếu không lấy trị tuyệt dối thì khi % của sô âm thì nó sẽ không bằng 5
		
		if(hangchuc == 5)
		{
			tongchuc += a[i];
			printf("%d  ", a[i]);
		}
	}

	printf("\nTong cac gia tri co chu so hang chuc la chu so 5 trong mang la: S = %d.", tongchuc);

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
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\nCac gia tri co chu so hang chuc la chu so 5 trong mang la:\n");
	
	//Xu ly de
	Xuly();

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
void Xuly()
{
	int hangchuc, tongchuc = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i] / 10;	// lấy hàng chục
		hangchuc = abs(temp % 10); 	// kiểm tra hàng chục, nếu không lấy trị tuyệt dối thì khi % của sô âm thì nó sẽ không bằng 5
		
		if(hangchuc == 5)
		{
			tongchuc += a[i];
			printf("%d  ", a[i]);
		}
	}

	printf("\nTong cac gia tri co chu so hang chuc la chu so 5 trong mang la: S = %d.", tongchuc);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\nCac gia tri co chu so hang chuc la chu so 5 trong mang la:\n");
	
	//Xu ly de
	Xuly(a, N);

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

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Xuly(int a[], int N)
{
	int hangchuc, tongchuc = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = a[i] / 10;	// lấy hàng chục
		hangchuc = abs(temp % 10); 	// kiểm tra hàng chục, nếu không lấy trị tuyệt dối thì khi % của sô âm thì nó sẽ không bằng 5
		
		if(hangchuc == 5)
		{
			tongchuc += a[i];
			printf("%d  ", a[i]);
		}
	}

	printf("\nTong cac gia tri co chu so hang chuc la chu so 5 trong mang la: S = %d.", tongchuc);
}
*/