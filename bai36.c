#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn

//Khong sai ham
/*
int main()
{
	int i = 1, N; 
	float S = 0;
	long temp =1;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	for (i; i <= N; i++)
	{
		temp *= i;
		S = sqrt(temp + S);
	}

	/*
	while(i <= N)
	{
		S = sqrt(2+S);
		i++;
	}
	*

	printf("\nTong S(%d) la: %f", N, S);
	getch();
	return 0;
}
*/

//Sai ham

void Tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	Tong(N);
	getch();
	return 0;
}

void Tong(int N)
{
	float S = 0;
	long S_temp = 1;
	for(int i = 1; i <= N; i++)
	{
		S_temp *= i;
		S = sqrt(S_temp + S); 
	}
	printf("Tong S = %f", S);
}