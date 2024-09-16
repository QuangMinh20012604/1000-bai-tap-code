#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)


//khong sai ham

/*
int main()
{
	int N;
	long mau = 0, tu = 1;
	double x, S = 0;

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	for(int i = 1; i <= N; i++)
	{
		tu = pow(-1, i) * pow(x, i);
		mau += i;
		S +=  (double)tu / mau;
		//printf("%ld\t%ld\t%lf\n",tu, mau, S);
	}

	printf("Tong S = %lf", S);

	_getch();
	return 0;
}
*/

//sai ham
void Tong(double x ,int N);

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
	long mau = 0, tu = 1;
	
	do
	{
		tu = pow(-1, i) * pow(x, i);
		mau += i;
		S += (double) tu / mau;
		
		//printf("%ld\t%ld\t%lf\n",tu, mau, S);
		i++;
	}while(i <= N);
	printf("Tong S = %lf", S);
}