#include<stdio.h>
#include<conio.h>
#include<math.h>



//Tính S(n) = 1^2 + 2^2 + ... + n^2

//Khong sai ham con

/*
int main()
{

	int i = 1, N;
	long S = 0;

	printf("\nNhap N: ");
	scanf("%d", &N);

	while( i <= N)
	{
		//S +=  i*i;
		 S += pow(i,2);
		i++;
	}

	/*
	for(i; i <= N; i++)	
	{
		S += i*i;
	}
	*

	printf("\nTong 1^2 + 2^2 + ... + %d^2 la: %ld", N, S);
	getch();
    return 0;

}
*/

//Sai ham con

int tong(int N);

int main()
{
	int N;
	
	printf("Nhap N: ");
	scanf("%d", &N);
	
	long S = tong(N);
	printf("Tong S = %ld", S);

	getch();
	return 0;
}

int tong(int N)
{
	long S = 0;
	for(int i = 1; i <= N; i++)
	{
		S += pow(i,2);
	}
	return S;
}

