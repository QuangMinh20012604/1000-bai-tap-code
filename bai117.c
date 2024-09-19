#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập n và tính tổng
//S(n) = 𝑥 + 𝑥2 + 𝑥3 + ⋯ + 𝑥𝑛 .


//khong sai ham

/*
int main()
{
	int N;
	float x, S = 0;
	do
	{
	printf("Nhap n: ");
	scanf_s("%d", &N);
	if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	printf("Nhap x: ");
	scanf_s("%f", &x);

	for(int i = 1; i <= N; i++)
	{
		S += pow(x, i);
	}
	

	_getch();
	return 0;
}
*/

//sai ham
int N;
float x, S = 0;

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

	printf("Nhap x: ");
	scanf_s("%f", &x);
}
void Xuly()
{
	for(int i = 1; i <= N; i++)
	{
		S += pow(x, i);
	}
}
void Xuat()
{
	printf("Tong S = %0.4f.", S);
}