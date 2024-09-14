#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn

//Khong sai ham

/*
int main()
{
	int i = 1, N;
	float S = 0.0, x;
	long temp = 1;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 1)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
		
	} while (N <= 1);
	do
	{
		printf("\nNhap x: ");
		scanf("%f", &x);
		if(x <= 0)
		{
			printf("\nx phai > 0. Xin nhap lai !");
		}
		
	} while (x <= 0);

	while(i <= N)
	{
		temp *= x;
		S = sqrt((temp + S));
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		temp *= x;
		S = sqrt((temp + S));
	}
	*

	printf("\nTong S(%d) la: %f", N, S);

	getch();
	return 0;
}
*/

//Sai ham

void Tong(float x, int N);

int main()
{
	int N;
	float x;
	printf("Nhap x: ");
	scanf_s("%f", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	Tong(x, N);

	getch();
	return 0;
}

void Tong(float x, int N)
{
	float S = 0;
	long S_temp = 1;

	for(int i = 1; i <= N; i++)
	{
		S_temp = pow(x, i);
		S = sqrt(S + S_temp);
	}
	printf("Tong S = %f", S);
}