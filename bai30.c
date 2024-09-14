#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không

//Số hoàn thiện là số có tổng của các ước nhỏ hơn nó bằng chính nó
//Các số hoàn thiện là 6, 28, 496, 8128

//khong sai ham

/*
int main()
{
	int i = 1, N, S = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	for(i; i < N; i++)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			S += i;
		}
	}

	/*
	while(i < N)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			S += i;
		}
		i++;
	}
	*

	if(S == N)
	{
		printf("\n%d la so hoan thien", N);
	}
	else
	{
		printf("\n%d khong la so hoan thien", N);
	}

	getch();
	return 0;
}
*/
//sai ham

void soHoanThien(int N);

int main()
{
	int N;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	soHoanThien(N);

	getch();
	return 0;
}

void soHoanThien(int N)
{
	int S = 0;
	for(int i = 1; i < N; i++)
	{
		if(N % i == 0)
		{
			printf("%-4d\t", i);
			S += i;
		}
	}

	printf("\nS = %d",S);
	if(S == N)	printf("\n%d la so hoan thien.", N);
	else	printf("\n%d khong la so hoan thien.", N);
}
