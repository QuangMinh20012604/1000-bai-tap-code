#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.


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

	printf("\nCac vi tri trong mang la so nguyen chan nho hon 2004 la: ");

	for(int i = 0; i < N; i++)
	{
		int temp = a[i];
		int ngto = 1;	//ngto = 1: true	= ngto = 0 : false

		if(temp == 1)
		{
			ngto = 0;
		}
		else
		{
			for(int j = 2; j < temp; j++)
			{
				if((temp % j) == 0)	
				{
					ngto = 0;
					break;
				}
			}
		}
		if(ngto == 1 || temp == 2)
		{
			count++;
			vitri = i + 1;
			printf("%d ", vitri);
		}
	}

	if(count == 0)
	{
		printf("\n\nTrong mang khong ton tai so nguyen to nho hon 100.");
	}
	else
	{
		printf("\n\nTrong mang ton tai %d so nguyen to nho hon 100.", count);
	}

	_getch();
	return 0;
}
*/

//sai ham

#define MAX 100

void KiemtraSoNguyenToNhoHon100(int a[], int N);

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
		do
		{	
			printf("\nNhap a[%d]: ", i);
			scanf_s("%d", &a[i]);
			if(a[i] <= 0)	printf("So phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(a[i] <= 0);
	}

	KiemtraSoNguyenToNhoHon100(a, N);

	_getch();
	return 0;
}

void KiemtraSoNguyenToNhoHon100(int a[], int N)
{
	int vitri = 0, count = 0;	//count = 0: false	= count != 0 :true 

	printf("\nCac vi tri trong mang la so nguyen chan nho hon 2004 la: ");

	for(int i = 0; i < N; i++)
	{
		int temp = a[i];
		int ngto = 1;	//ngto = 1: true	= ngto = 0 : false
		
		if(temp == 1)
		{
			ngto = 0;
		}
		else
		{
			for(int j = 2; j < temp; j++)
			{
				if((temp % j) == 0)	
				{
					ngto = 0;
					break;
				}
			}
		}
		if(ngto == 1 || temp == 2)
		{
			count++;
			vitri = i + 1;
			printf("%d ", vitri);
		}
	}

	if(count == 0)
	{
		printf("\n\nTrong mang khong ton tai so nguyen to nho hon 100.");
	}
	else
	{
		printf("\n\nTrong mang ton tai %d so nguyen to nho hon 100.", count);
	}
}
