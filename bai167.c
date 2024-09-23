#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa
//điều kiện ấy trong mảng một chiều các số nguyên (nếu mảng không có
//giá trị thỏa điều kiện trên thì hàm trả về giá trị 0).


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
	int toansole = 0, count = 0;;
	for(int i = 0; i < N; i++)
	{
		int temp = a[i];
		count = 0;
		for(temp; temp != 0; temp /= 2)
		{
			if(temp % 2 == 0)
			{
				count++;
			}
		}
		if(count == 0)
		{
			if(toansole % 2 == 0)	//gan toansole voi gia tri dau tien thoa man dieu kien
			{
				toansole =  a[i];
			}

			if(a[i] > toansole)
			{
				toansole = a[i];
			}
		}
	}

	if(count != 0)
		printf("%d", toansole);
	else
		printf("So lon nhat thoa man dieu kien toan chu so le la: %d.", toansole);


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
void kiemtratoansole();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	kiemtratoansole();

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

void kiemtratoansole()
{
	int toansole = 0, count = 0;;
	for(int i = 0; i < N; i++)
	{
		int temp = a[i];
		count = 0;
		for(temp; temp != 0; temp /= 2)
		{
			if(temp % 2 == 0)
			{
				count++;
			}
		}
		if(count == 0)
		{
			if(toansole % 2 == 0)	//gan toansole voi gia tri dau tien thoa man dieu kien
			{
				toansole =  a[i];
			}

			if(a[i] > toansole)
			{
				toansole = a[i];
			}
		}
	}

	if(count != 0)
		printf("%d", toansole);
	else
		printf("So lon nhat thoa man dieu kien toan chu so le la: %d", toansole);
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);
void xuat(int a[], int N);
void kiemtratoansole(int a[], int N);

int main()
{
	int N, a[MAX];
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	kiemtratoansole(a, N);

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

void kiemtratoansole(int a[], int N)
{
	int toansole = 0, count = 0;;
	for (int i = 0; i < N; i++)
	{
		int temp = a[i];
		count = 0;
		for (temp; temp != 0; temp /= 2)
		{
			if (temp % 2 == 0)
			{
				count++;
			}
		}
		if (count == 0)
		{
			if (toansole % 2 == 0)	//gan toansole voi gia tri dau tien thoa man dieu kien
			{
				toansole = a[i];
			}

			if (a[i] > toansole)
			{
				toansole = a[i];
			}
		}
	}

	if (count != 0)
		printf("%d", toansole);
	else
		printf("So lon nhat thoa man dieu kien toan chu so le la: %d", toansole);
}
*/