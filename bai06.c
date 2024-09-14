#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

//Khong sai ham

/*
int main()
{
	int i = 1, N;
	float S = 0;

	printf("\nNhap N: ");
	scanf("%d", &N);

	/*
	for(i; i <= N; i++)
	{
		S = S + 1.0/(i*(i+1));
	}
	*

	while(i <= N)
	{
		S = S +1.0/(i*(i+1));
		i++;
	}

	printf("\nTong 1/(1x2) + 1/(2x3) + ... + 1/(%dx%d) la: %.4f", N, N+1, S);
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
	scanf_s("%d", &N);

	float S = tong(N);
	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong(int N)
{
	float S = 0;
	for (int i = 1; i < N; i++)
	{
		S += 1.0 / (i * (i + 1));
	}
	return S;
}