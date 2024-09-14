#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = ½ + ¾ + 5/6 + … + (2n + 1)/ (2n + 2)

//Khong sai ham
/*
int main()
{
	int i = 0, N;
	float S = 0;

	printf("\nNhap N: ");
	scanf("%d", &N);

	while(i <= N)
	{
		S = S + (float)(2*i+1)/(2*i+2);	//ép kieu float cho int
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		S = S + float(2*i+1)/(2*i+2);	//ép kieu float cho int
	}
	*

	printf("\nTong 1/2 + 3/4 + ... + %d/%d la: %.4f", 2*N+1, 2*N+2, S);
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
	for (float i = 0; i <= N; i++)
	{
		S += (2 * i + 1) / (2 * i + 2);
	}
	return S;
}