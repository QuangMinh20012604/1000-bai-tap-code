#include<stdio.h>
#include<conio.h>
#include<math.h>


//Liệt kê tất cả các “ước số” của số nguyên dương n

//Khong sai ham
/*
int main()
{
	int i = 1, N;
	

	do
	{
		printf("\nNhap N:");
		scanf("%d", &N);

		if(N <= 0)
    	{
    	printf("\nN phai > 0. Xin nhap lai !");
    	}
	}while( N <= 0);

	while(i <= N)
	{
		if(N % i == 0)
		{
			printf("%6d", i);
		}
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%6d", i);
		}
	}
	*

	getch();
	return 0;
}
*/

//sai ham 

void lietke(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	lietke(N);


}

void lietke(int N)
{
	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		printf("%5d", i);
	}
}