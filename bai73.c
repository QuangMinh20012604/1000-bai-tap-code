#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!


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

	S = -1;

	for(int i = 1; i <= N; i++)
	{
		tu = pow(-1, i + 1) * pow(x, 2 * i);
		mau *= (2 * i) * (2 * i - 1);
		S += (double)tu / mau;
		
		//printf("%ld\t%ld\t%lf\n", tu, mau, S);
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

	S = -1;

	do
	{
		tu = pow(-1, i + 1) * pow(x, 2 *i);
		mau *= (2 * i) * ( 2 * i -1);
		S += (double)tu / mau;
		i++;
	}while(i <= N);

	printf("Tong S = %lf", S);
}