#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm bội chung nhỏ nhất của hai giá trị này.


//khong sai ham

/*
int main()
{
	int a, b;
	do
	{
		printf("Nhap a: ");
		scanf_s("%d", &a);
		if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(a <= 0);
	do
	{
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(b <= 0);

	int N, BCNN;
	if(a >= b)	N = a;
	else if(a < b)	N = b;

	for(int i = N; i <= a * b; i++)
	{
		if((i % a == 0) && (i % b == 0))
		{
			BCNN = i;
			break;
		}
	}
	printf("Boi chung nho nhat cua %d va %d la %d.", a, b, BCNN);

	getch();
	return 0;
}
*/

//sai ham

void TimBCNN(int a, int b);

int main()
{
	int a, b;
	do
	{
		printf("Nhap a: ");
		scanf_s("%d", &a);
		if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(a <= 0);
	do
	{
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(b <= 0);

	TimBCNN(a, b);

	getch();
	return 0;
}

void TimBCNN(int a, int b)
{
	int N, BCNN;
	if(a <= b)	N = b;
	else if(a > b)	N = a;
	for(int i = N; i <= a * b; i++)
	{
		if((i % a == 0) && (i % b == 0))
		{
			BCNN = i;
			break;
		}
	}
	printf("Boi chung nho nhat cua %d va %d la %d.", a, b, BCNN);
}