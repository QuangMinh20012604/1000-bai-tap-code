#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = ½ + ¼ + … + 1/(2n)
//Khong sai ham

/*
int main()
{
	int i = 1, N;
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

	int n = 2*N;
	while(i <= N)
	{
		S = S + 1.0/(2*i);
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		S = S + 1.0/(2*i);
	}
	*

	printf("\nTong 1/2 + 1/4 + ... + 1/%d la: %.3f", n, S);
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
	scanf_s("%d", & N);

	float S = tong(N);
	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong(int N)
{
	float S = 0;
	for(int i = 1; i <= N; i++)
	{
		S += 1.0/(2*i);
	}
	return S;
}