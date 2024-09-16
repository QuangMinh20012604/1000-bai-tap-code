#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(x, n) = −𝑥2 + 𝑥4 + ⋯ + (−1)n𝑥2𝑛


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
		S += pow(-1, i) * pow(x, 2 * i);
	}
	printf("Tong S = %lf", S);

	_getch();
	return 0;
}
*/

//sai ham
void tong(double x, int N);

int main()
{
	int N;
	double x, S = 0;

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	tong(x, N);
	_getch();
	return 0;
}

void tong(double x, int N)
{
	int i = 1;
	double S = 0;

	do
	{
		S += pow(-1, i) * pow(x, 2 * i);
		i++;
	}while(i <= N);
	printf("Tong S = %lf", S);
}



