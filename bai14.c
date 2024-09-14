#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

//Khong sai ham 

/*

//Truong hop KHONG sai ham pow() 
int main()
{
	int i = 0, n;
	float x, S = 0;
	
	printf("\nNhap x:");
	scanf("%f", &x);
	
	printf("\nNhap n:");
	scanf("%d", &n);

	float S_temp = x;	//

	for(i; i <= n; i++)
	{
		S = S + S_temp;
		S_temp = S_temp * x * x;
	}

	/*
	while(i <= n)
	{
		S_temp = S_temp * x * x;
		S = S + S_temp;
		i++;
	}
	*

	printf("\nTong S(%.4f) la: %.4f", x, S);
	getch();
	return 0;
}

/*
//Truong hop sai ham pow() 
int main()
{
	int i = 0, n;
	float x, S = 0, S_temp;
	
	printf("\nNhap x:");
	scanf("%f", &x);
	
	printf("\nNhap n:");
	scanf("%d", &n);

	for(i; i <= n; i++)
	{
		S_temp = pow(x,2*i+1);
		S = S + S_temp;
	}

	/*
	while(i <= n)
	{
		S_temp = pow(x,2*i+1);
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
	scanf("%f", &x);
	printf("Nhap N: ");
	scanf("%d", &N);

	float S = tong(x, N);

	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong(float x, int N)
{
	float S = 0;

	for(int i = 0; i <= N; i++)
	{
		S += pow(x, 2 * i +1);
	}
	return S;
}