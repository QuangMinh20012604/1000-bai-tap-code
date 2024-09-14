#include<stdio.h>
#include<conio.h>
#include<math.h>


//Liệt kê tất cả các “ước số lẻ” của số nguyên dương n

//khong sai ham

/*
int main()
{
	int i = 1, N;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	printf("\nCac 'uoc so le' cua so nguyen duong %d la: ", N);
	
	for(i; i <= N; i++)
	{
		if( N % i == 0)
		{
			if( i % 2 == 1)
			{
				printf("%4d", i);
			}
		}
	}

	/*
	while(i <= N)
	{
		if( N % i == 0)
		{
			if( i % 2 == 1)
			{
				printf("%4d", i);
			}
		}
		i++;
	}
	*

	getch();
	return 0;
}
*/

//sai ham
void lietkeUocle(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	lietkeUocle(N);

	getch();
	return 0;
}

void lietkeUocle(int N)
{
	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			if(i % 2 == 1)
			{	
				printf("%-5d\t", i);
			}
		}
	}
}