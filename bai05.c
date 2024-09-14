#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

//khong sai ham

/*
int main()
{
	int i = 0, N;
	float S = 0;

	/*
	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);

		if (N <= 1)
		{
			printf("\nN phai lon hon 1. Xin moi nhap lai!");
		}
	}while(N <= 1);
	*

	printf("\nNhap N: ");
	scanf("%d", &N);

	int n = 2*N + 1;
	for (i; i <= N; i++)
	{
		S = S + 1.0/(2*i+1);
	}

	/*
	while(i <= N)
	{
		S = S + 1.0/(2*i+1);
		i++;
	}
	*

	printf("\nTong 1 + 1/3 + ... + 1/%d la: %.3f", n, S);
	getch();
	return 0;
}
*/

//Sai ham
float tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	float S = tong(N);
	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong(int N)
{
	float S = 0;
	for(int i = 0; i <= N; i++)
	{
		S += 1.0 / (2*i + 1);
	}
	return S;
}