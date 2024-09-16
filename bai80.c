#include<stdio.h>
#include<conio.h>
#include<math.h>


////Tính S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)


//khong sai ham

/*
int main()
{
	int N;
	double x, S = 0;
	long tu = 1, mau = 0;

	printf("Nhap x: ");
	scanf("%lf", &x);
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	for(int i = 1; i <= N; i++)
	{
		tu *= x;
		mau	+= i;
		S +=  (double)tu / mau;
	}
	printf("Tong S = %lf", S);

	_getch();
	return 0;
}
*/

//sai ham

void Tong(double x, int N);

int main()
{
	int N;
	double x;
	long tu = 1, mau = 0;

	printf("Nhap x: ");
	scanf("%lf", &x);
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	
	Tong(x, N);

	_getch();
	return 0;
}

void Tong(double x, int N)
{
	int i = 1;
	double S = 0;
	long tu = 1, mau = 0;

	do
	{
		tu = pow(x, i);
		mau += i;
		S += (double)tu / mau;
		
		i++;
	}while(i <= N);

	printf("Tong S = %lf", S);
}