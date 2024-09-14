#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn

//Khong sai ham
/*
int main()
{
	int i = 1, N;
	float S = 0.0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);	

	//S = pow(1.0, 1.0/2)

	while( i <= N)
	{
		S = pow((i + S)*1.0, 1.0/(i+1));
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		S = pow((i + S)*1.0, 1.0/(i+1));
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
	scanf_s("%d", &N);

	Tong(N);

	getch();
	return 0;
}

void Tong(int N)
{
	float S = 0;
	for(int i = 1; i <= N; i++)
	{
		S = pow((S +i),1.0/(i+1));
	}
	printf("Tong S = %f", S);
}