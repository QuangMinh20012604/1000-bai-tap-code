#include<stdio.h>
#include<conio.h>
#include<math.h>


//Đếm số lượng “ước số chẵn” của số nguyên dương n

//KHong sai ham
/*
int main()
{
	int i = 1, N, n = 0;

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
				n++;
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
				n++;
			}
		}
		i++;
	}
	*

	printf("\nSo luong 'uoc so chan' cua so nguyen duong %d la: %d", N, n);
	getch();
	return 0;
}
*/

//Sai ham

int demUocchan(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf_s("%d", &N);

	int count = demUocchan(N);
	printf("\nSo luong 'uoc so chan' cua so nguyen duong %d la: %d", N, count);
	getch();
	return 0;
}

int demUocchan(int N)
{
	int count = 0;

	for(int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			if(i % 2 ==0)
			{
				printf("%-5d\t",i);
				count++;
			}
		}
	}
	return count;
}