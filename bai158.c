#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x,x]
//chứa tất cả các giá trị trong mảng (timx).


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

	float min = a[0], max = a[0];

	for(int i = 1; i < N; i++)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
	}

	if(max * min > 0)
	{
		if(max < 0)		//min < 0, max < 0
			max = - min;
		else if(min > 0)		//min > 0, max > 0
			min = - max;

	}
	else if(max * min < 0)
	{
		if(abs(min) < max)
			min = - max;
		else if(abs(min) > max)
			max = - min;
	}


	printf("\nGia tri cua x de thoa man doan chua tat ca cac gia tri trong mang la: [%0.3f ; %0.3f].", min, max);

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
void timx();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	timx();

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

void timx()
{
	float min = a[0], max = a[0];

	for(int i = 1; i < N; i++)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
	}

	if(max * min > 0)
	{
		if(max < 0)		//min < 0, max < 0
			max = - min;
		else if(min > 0)		//min > 0, max > 0
			min = - max;

	}
	else if(max * min < 0)
	{
		if(abs(min) < max)
			min = - max;
		else if(abs(min) > max)
			max = - min;
	}


	printf("\nGia tri cua x de thoa man doan chua tat ca cac gia tri trong mang la: [%0.3f ; %0.3f].", min, max);
}
//

/*
//Test o visual
#define MAX 100

void nhap(float a[], int& N);

void xuat(float a[], int N);

void timx(float a[], int N);

int main()
{
	int N;
	float a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	timx(a, N);

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

void timx(float a[], int N)
{
	float min = a[0], max = a[0];

	for(int i = 1; i < N; i++)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
	}

	if(max * min > 0)
	{
		if(max < 0)		//min < 0, max < 0
			max = - min;
		else if(min > 0)		//min > 0, max > 0
			min = - max;

	}
	else if(max * min < 0)
	{
		if(abs(min) < max)
			min = - max;
		else if(abs(min) > max)
			max = - min;
	}


	printf("\nGia tri cua x de thoa man doan chua tat ca cac gia tri trong mang la: [%0.3f ; %0.3f].", min, max);
}

*/

