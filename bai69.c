#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(x, n) = 𝑥 − 𝑥3 + 𝑥5 + ⋯ + (−1)n𝑥2𝑛+1


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

	for(int i = 0; i <= N; i++)
	{
		S += pow(-1, i) * pow(x, 2 * i +1);
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
	int i = 0;
	double S = 0;
	do
	{
		S += pow(-1, i) * pow(x, 2 * i +1);
		i++;
	}while(i <= N);

	printf("Tong S = %lf", S);
}