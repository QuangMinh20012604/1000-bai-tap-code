#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số

//khong sai ham

/*
int main()
{
	int i = 0, N;
	float S = 1;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
		
	} while (N <= 0);

	for(i; i <= N; i++)
	{
		S = 1.0 / (1 + S);
	}

	/*
	while(i <= N)
	{
		S = 1.0 / (1 + S);
		i++;
	}
	*

	printf("\nTong S(%d) la: %f", N, S);

	getch();
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

	getch();
	return 0;
}

void tong(int N)
{
	float S = 1;
	for(int i = 1; i <= N; i++)
	{
		S = 1.0/(1+S);
	}
	printf("Tong S = %f", S);
}
