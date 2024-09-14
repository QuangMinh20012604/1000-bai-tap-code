#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 + x^2/2! + x^4/4! + … + (x^2n)/(2n)!

//khong sai ham

/*
int main()
{
	int i = 1, N;
	float x, S = 1, Tu = 1;
	long Mau_temp, Mau = 1;

	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("\nNhap N: ");
	scanf("%d", &N);

	for(i; i <= N; i++)
	{
		Tu *= x*x;	//Tu = pow(x,2*i);
		Mau_temp = 2*i;
		Mau *= Mau_temp*(Mau_temp-1);
		S += Tu/Mau;
	}

	/*
	while(i <= N)
	{
		Tu *= x*x;	//Tu = pow(x,2*i);
		Mau_temp = 2*i;
		Mau *= Mau_temp*(Mau_temp-1);
		S += Tu/Mau;
		i++;
	}
	*
	
	printf("\nTong S(%d) la: %f", N, S);
	getch();
	return 0;
}
*/

//Sai ham
float tong (float x, int N);

int main()
{
	float x; 
	int N;

	printf("Nhap x: ");
	scanf("%f", &x);
	printf("Nhap N: ");
	scanf("%d", &N);

	float S = tong(x, N);
	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong (float x, int N)
{
	float S = 1;
	long tu = 1, mau = 1;

	for(int i = 1; i <= N; i++)
	{
		tu = pow(x, 2 * i);
		mau *= (2 * i) * (2 * i - 1);
		S += (float) tu / mau;
	}
	return S;
}

