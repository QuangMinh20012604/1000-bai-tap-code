#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = x^2 + x^4 + … + x^2n

//Khong sai ham

/*
int main()
{
	int i = 1, n;
	float x, S = 0, S_temp = 1;
	
	printf("\nNhap x:");
	scanf("%f", &x);
	
	printf("\nNhap n:");
	scanf("%d", &n);

	for(i; i <= n; i++)
	{
		S_temp = S_temp * x * x;
		//S_temp = pow(x,2*i);
		S = S + S_temp;
	}

	/*
	while(i <= n)
	{
		S_temp = S_temp * x * x;
		//S_temp = pow(x,2*i);
		S = S + S_temp;
		i++;
	}
	*

	printf("\nTong S(%f) la: %.4f", x, S);
	getch();
	return 0;
}

*/

//Sai ham

float tong(float x, int N);

int main()
{
	int N;
	float x;

	printf("Nhap x: ");
	scanf_s("%f", &x);
	printf("Nhap N: ");
	scanf_s("%d", &N);

	float S = tong(x, N);
	printf("Tong S = %f", S);

}

float tong(float x, int N)
{
	float S = 0;

	for(int i = 1; i <= N; i++)
	{
		S += pow(x,2*i);
	}
	return S;
}