 #include<stdio.h>
#include<conio.h>
#include<math.h>


//Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … + (-1)^n+1 * x^2n+1/(2n + 1)!


//khong sai ham

/*
int main()
{
	int N;
	double x, S = 1;
	long tu = 1, mau = 1;

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	S = 1 - x;

	for(int i = 1; i <= N; i++)
	{
		tu  = pow(-1, i + 1) * pow(x, 2 * i + 1);
		mau *= (2 * i + 1) * (2 * i);
		S += (double)tu / mau;

		//printf("tu %ld\t\tmau %ld\t\tS %lf\n", tu, mau, S);
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
	double S = 1;
	long tu = 1, mau = 1;

	S = 1 - x;

	do
	{
		tu = pow(-1, i + 1) * pow(x, 2 * i + 1);
		mau *= (2 * i + 1) * (2 * i);
		S += (double) tu / mau;

		i++;
	}while(i <= N);
	printf("Tong S = %lf", S);
}