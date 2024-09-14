#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tích tất cả các “ước số” của số nguyên dương n

//KHong sai ham

/*
int main()
{
	int i = 1, N;
	long P = 1;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	for(i; i <+ N; i++)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			P *= i;
		}
	}

	/*
	while (i <= N)
	{
		if(N % i == 0)
		{
			printf("%d", i);
			P *= i;
		}
		i++;
	}
	*

	printf("\nTich tat cac 'uoc so' cua so nguyen duong %d la: %ld", N, P);
	getch();
	return 0;	
}
*/

//sai ham

long tichUoc(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	long T = tichUoc(N);
	printf("\nTich T = %ld", T);

	getch();
	return 0;
}

long tichUoc(int N)
{
	long T = 1;

	for (int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%-6d", i);
			T *= i;
		}
	}
	return T;
}