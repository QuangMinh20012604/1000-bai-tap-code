#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn

//khong sai ham

/*
int main()
{
	int i = 2, N;
	float S;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	S = sqrt((float)2);

	for (i ; i <= N; i++)
	{
		S = sqrt(2+S);
	}

	/*
	while(i <= N)
	{
		S = sqrt(2+S);
		i++;
	}
	*

	printf("\nTong S(%d) la: %f", N, S);
	getch();
	return 0;
}
*/

//sai ham

void Tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	Tong(N);

	getch();
	return 0;
}

void Tong(int N)
{
	float S = 0;
	for(int i = 1; i <= N; i++)
	{
		S = sqrt(2 + S);
	}

	printf("\nTong S = %f", S);
}