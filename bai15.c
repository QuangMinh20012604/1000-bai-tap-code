#include<stdio.h>
#include<conio.h>
#include<math.h>


//Bài 15: Tính S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/ (1 + 2 + 3 + …. + N)

//khong sai ham

/*
int main()
{
	int i = 1, N;
	float S = 0, S_temp = 0;

	printf("\nNhap N: ");
	scanf("%d", &N);

	while(i <= N)
	{
		S_temp = S_temp + i;
		S = S + 1.0/S_temp;
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		S_temp = S_temp + i;
		S = S + 1.0/S_temp;
	}
	*

	printf("\nTong 1/1 + 1/(1+2) + ... + 1/(1+2+...+%d) la: %f", N, S);
	getch();
	return 0;
}
*/

//sai ham

float tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	float S = tong(N);

	printf(" Tong S = %f", S);

	getch();
	return 0;
}

float tong(int N)
{
	float S = 0;
	int temp = 0;

	for(int i = 1; i <= N; i++)
	{
		temp += i;
		S += 1.0 / temp;
	}
	return S;
}
