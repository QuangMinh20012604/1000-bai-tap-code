#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = x + x^2/1 + 2 + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)

//Khong sai ham

/*
int main()
{
	int i = 1, N, Mau = 0;
	float x, S = 0, Tu = 1; 	

	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("\nNhap N: ");
	scanf("%d", &N);

	/*
	while(i <= N)
	{
		Tu *= x;
		Mau += i;
		S += Tu/Mau;
		i++;
	}
	*

	for(i; i <= N; i++)
	{
		Tu *= x;
		Mau += i;
		S += Tu/Mau;
	}

	printf("\nTong S(%d) la: %f", N, S);
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
}

float tong(float x, int N)
{
	float S = 0;
	long mau = 0, tu = 0;

	for(int i = 1; i <= N; i++)
	{
		tu = pow(x,i);
		mau += i;
		S += (float) tu / mau;
	}
	return S;
}