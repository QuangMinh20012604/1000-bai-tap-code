#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính tổng tất cả các “ước số” của số nguyên dương n
//VD: N = 6, 1 + 2  + 3 + 6 = 12

//khong sai ham

/*
int main()
{
	int i = 1,N, S = 0;

	do
	{
		printf("\nNhap N:");
		scanf("%d", &N);

		if (N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	}while(N <= 0);

	while(i <= N)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			S += i;
		}
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			S += i;
		}
	}	
	*

	printf("\nTong tat ca cac 'uoc so' cua so nguyen duong %d la: %d", N, S);
	getch();
	return 0;
}
*/

//sai ham
long tongUoc(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	long S = tongUoc(N);
	printf("\nTong S = %ld", S);
	getch();
	return 0;
}

long tongUoc(int N)
{
	long S = 0;
	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%5d", i);
			S += i;
		}
	}
	return S;
}