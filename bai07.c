#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1

//Khong sai ham

/*
int main()
{
	int i = 1, N;
	float S = 0;

	printf("\nNhap N: ");
	scanf("%d", &N);

	for(i; i <= N; i++)
	{
		S = S + (float)i/(i+1);	//ép kieu float cho int
	}

	/*
	while(i <= N)
	{
		S = S + (float)i/(i+1);	//ép kieu float cho int
		i++l
	}
	*
	printf("\nTong 1/2 + 2/3 + ... + %d/(%d+1) la: %.5f", N, N+1, S);
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
	
	for (float i = 1; i <= N; i++)
	{
		S += i / (i + 1);
	}
	

	/*
	for(int i = 1; i <= N; i++)
	{
		S += (float) i / (i + 1);
	}
	*/
	return S;
}