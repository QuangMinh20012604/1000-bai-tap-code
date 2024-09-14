#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính T(n) = 1 x 2 x 3…x N

//Khong sai ham

/*
int main()
{
	int i = 1, N;
	long T = 1;

	printf("\nNhap N: ");
	scanf("%d", &N);

	while(i <= N)
	{
		T = T * i;
		i++;
	}

	/*
	for(i; i <=N; i++)
	{
		T = T * i;
	}
	*

	printf("\nTich 1 x 2 x 3 x ... x %d la: %ld", N, T);
	getch();
	return 0;
}
*/

//Sai ham

long Tich(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf_s("%d", &N);
	
	long T = Tich(N);
	printf("Tich T = %ld", T);

	getch();
	return 0;
}

long Tich(int N)
{
	long T = 1;
	for (int i = 1; i <= N; i++)
	{
		T *= i;
	}
	return T;
}