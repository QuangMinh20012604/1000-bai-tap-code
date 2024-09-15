#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm ước chung lớn nhấtcủa hai giá trị này


//khong sai ham
/*
int main()
{
	int a, b, UCLN;
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

	int N;
	if(a <= b)	N = b;
	else if(a > b)	N = a;

	for(int i = 1; i <= N; i++)
	{
		if((a % i == 0) && (b % i == 0))
		{
			UCLN = i;
		}
	}
	printf("Uoc chung lon nhat cua a va b la %d.", UCLN);

	_getch();
	return 0;
}
*/
//sai ham
void TimUCLN(int a, int b);

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

	TimUCLN(a,b);
}

void TimUCLN(int a, int b)
{
	int N, UCLN;
	if(a >= b) N = a;
	else if( a < b)	N = b;
	int i = 1;

	do
	{
		if((a % i == 0) && (b % i == 0))
		{
			UCLN = i;
		}
		i++;
	}while(i <= N);

	printf("Uoc chung lon nhat cua a va b la %d.", UCLN);
}


