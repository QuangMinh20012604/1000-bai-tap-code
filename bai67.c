#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(x, n) = 𝑥 − 𝑥2 + 𝑥3 + ⋯ + (−1)n+1𝑥𝑛


//khong sai ham

/*
int main()
{
	int N;
	double x, S = 0;
	
	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	for(int i = 1; i <= N; i++)
	{
		S += pow(-1, (i + 1)) * pow(x, i);	
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
	double x, S = 0;

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

	do
	{
		S += pow(-1, (i + 1)) * pow(x, i);
		i++;
	}while(i <= N);
	printf("Tong S = %lf", S);
}
