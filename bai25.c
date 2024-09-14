#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tổng tất cả các “ước số chẵn” của số nguyên dương n

//khong sai ham

/*
int main()
{
	int i = 1,N, S = 0;
	
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
		if(N % i == 0)
		{
			if(i % 2 == 0)
			{
				printf("%4d", i);
				S += i;
			}
		}
	}

	/*
	while(i <= N)
	{
		if(N % i == 0)
		{
			if(i % 2 == 0)
			{
				printf("%4d", i);
				S += i;
			}
		}
		i++;
	}
	*
	printf("\nTong tat ca cac 'uoc so chan' cua so nguyen %d la: %d", N, S);
	getch();
	return 0;
}
*/

//sai ham

int tongUocChan(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	int S = tongUocChan(N);
	printf("\nTong S = %d", S);
	
	getch();
	return 0;
}

int tongUocChan(int N)
{
	int S = 0;
	for(int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			if(i % 2 != 1)
			{
				printf("%5d\t", i);
				S += i;
			}
		}
	}
	return S;
}