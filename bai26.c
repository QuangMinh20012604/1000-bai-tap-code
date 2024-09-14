#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tích tất cả các “ước số lẻ” của số nguyên dương n

//khong sai ham

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

	while(i <= N)
	{
		if(N % i == 0)
		{
			if(i % 2 == 1)
			{
				printf("%4d", i);
				P *= i;
			}
		}
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		if(N % i == 0)
		{
			if(i % 2 == 1)
			{
				printf("%4d", i);
				P *= i;
			}
		}
	}	
	*

	printf("\nTich tat ca cac 'uoc so le' cua so nguyen duong %d la: %ld", N, P);
	getch();
	return 0;
}
*/

//sai ham

long tichUocLe(int N);

int main()
{
	int N; 
	printf("Nhap N:");
	scanf("%d", &N);

	long T = tichUocLe(N);
	printf("\nTich T = %ld", T);
	
	getch();
	return 0;
}

long tichUocLe(int N)
{
	long T = 1;
	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			if(i % 2 == 1)
			{
				printf("%5d", i);
				T *= i;
			}
		}
	}
	return T;
}