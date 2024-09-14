#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

//khong sai ham

/*
int main()
{
	int i = 1, N;
	long S = 0, S_temp = 1;

	printf("\nNhap N: ");
	scanf("%d", &N);

	for(i; i <= N; i++)
	{
		S_temp = S_temp*i;
		S = S + S_temp;
	}

	/*
	while(i <= N)
	{
		S_temp = S_temp*i;
		S = S + S_temp;
		i++;
	}
	*

	printf("\nTong 1 + 1x2 + ... + 1x2x3x...x%d la: %ld", N, S);

	getch();
	
	return 0;  
}
*/

//sai ham

long tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf_s("%d", &N);

	long S = tong(N);
	printf("Tong S = %ld", S);

	getch();
	return 0;
}

long tong(int N)
{
	long S = 0;
	int temp = 1;

	for(int i = 1; i <= N; i++)
	{
		temp *= i; 
		S += temp;
	}
	return S;
}