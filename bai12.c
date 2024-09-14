#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = x + x^2 + x^3 + … + x^n

//khong sai ham

/*
int main()
{
	int i = 1, n;
	float x, S = 0, S_temp = 1;

	printf("\nNhap x: ");
	scanf("%f", &x);
	
	printf("\nNhap n: ");
	scanf("%d", &n);

	for(i; i <= n;i++)
	{
		S_temp = S_temp * x;
		S = S + S_temp;
		//S = S + pow(x,i);
	}

	/*
	while(i <= n)
	{
		S_temp = S_temp * x;
		S = S + S_temp;
		i++;
	}
	*

	printf("\n Tong cua S(%f) la: %f", x, S);
	getch();
	return 0;
}
*/

//sai ham

float tong(float x, int N);

int main()
{
	int N;
	float x;
	printf("Nhap x: ");
	scanf_s("%f", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	float S = tong(x,N);
	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong(float x, int N)
{      
	float S = 0;
	float temp = 1;

	for(int i = 1; i <= N; i++)
	{
		//temp *= x;
		temp = pow(x, i);
		S += temp;
	}
	return S;
}