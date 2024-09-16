#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)


//khong sai ham

/*
int main()
{
	int N;
	long mau = 0;
	float S = 0;

	printf("Nhap N: ");
	scanf_s("%d", &N);

	for(int i = 1; i <= N; i++)
	{
		mau += i;
		S += pow(-1, (i + 1)) * 1.0 / mau; 
	}
	printf("Tong S = %f", S);

	_getch();
	return 0;
}
*/

//sai ham

void tong(int N);

int main()
{
	int N;
	
	printf("Nhap N: ");
	scanf_s("%d", &N);

	tong(N);

	_getch();
	return 0;
}

void tong(int N)
{
	int i = 1;
	long mau = 0;
	float S = 0;

	do
	{
		mau += i;
		S += pow(-1, (i + 1)) * 1.0 / mau;
		i++;
	}while(i <= N);
	printf("Tong S = %f", S);
}