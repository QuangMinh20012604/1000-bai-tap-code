#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!


//khong sai ham

/*
int main()
{
	int N;
	double x, S = 0;
	long tu = 1, mau = 1;

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	for(int i = 1; i <= N; i++)
	{
		tu = pow(-1, i) * pow(x, i);
		mau *= i;
		S += (double)tu / mau;
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
	
	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);
	
	Tong(x, N);

	_getch();
	return 0;
}
void Tong(double x, int N)
{
	int i = 1;
	double S = 0;
	long tu = 1, mau = 1;

	do
	{
		tu = pow(-1, i ) * pow(x, i);
		mau *= i;
		S += (double)tu / mau;
		i++;
	}while(i <= N);
	printf("Tong S = %lf", S);
}