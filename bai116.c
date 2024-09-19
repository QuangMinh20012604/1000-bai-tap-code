#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập n và tính tổng
//S(n) = 1 + 2 + 3 + … + n.


//khong sai ham

/*
int main()
{
	int N, S = 0;
	do
	{
	printf("Nhap n: ");
	scanf_s("%d", &N);
	if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	for(int i = 1; i <= N; i++)
	{
		S += i;
	}
	
	printf("Tong S = %d.", S);

	_getch();
	return 0;
}
*/

//sai ham
int N, S = 0;

void Nhap();
void Xuly();
void Xuat();

int main()
{
	
	Nhap();
	Xuly();
	Xuat();

	_getch();
	return 0;
}

void Nhap()
{
	do
	{
	printf("Nhap n: ");
	scanf_s("%d", &N);
	if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
}

void Xuly()
{
	for(int i = 1; i <= N; i++)
	{
		S += i;
	}
}

void Xuat()
{
	printf("Tong S = %d.", S);
}