#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ
//hơn 2004 hay không?


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX], vitri = 0, count = 0;	//count = 0: false	= count != 0 :true

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)	printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	printf("\nCac vi tri trong mang la so nguyen chan nho hon 2004 la:\n");

	for(int i = 0; i < N; i++)
	{
		if( (a[i] < 2004) && (a[i] % 2 == 0))	
		{
			count ++;
			vitri = i + 1;
			printf("%d ", vitri);
		}
	}

	if(count == 0)
	{
		printf("\n\nTrong mang khong ton tai gia tri chan nho hon 2004.");
	}
	else
	{
		printf("\n\nTrong mang ton tai %d gia tri chan nho hon 2004.", count);
	}

	_getch();
	return 0;
}
*/

//sai ham


#define MAX 100

void KiemtraSoChanTrongMangTheoDieuKien(int a[], int N);

int main()
{
	int N, a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)	printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	KiemtraSoChanTrongMangTheoDieuKien(a, N);

	_getch();
	return 0;
}

void KiemtraSoChanTrongMangTheoDieuKien(int a[], int N)
{
	int vitri = 0, count = 0;	//count = 0: false	= count != 0 :true
	
	printf("\nCac vi tri trong mang la so nguyen chan nho hon 2004 la: ");

	for(int i = 0; i < N; i++)
	{
		if( (a[i] < 2004) && (a[i] % 2 == 0))	
		{
			count ++;
			vitri = i + 1;
			printf("%d ", vitri);
		}
	}

	if(count == 0)
	{
		printf("\n\nTrong mang khong ton tai gia tri chan nho hon 2004.");
	}
	else
	{
		printf("\n\nTrong mang ton tai %d gia tri chan nho hon 2004.", count);
	}
}