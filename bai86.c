#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1^3 + 2^3 + 3^3 + … + n^3


//khong sai ham

/*
int main()
{
	int N;
	long S = 0;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N <= 0);

	for(int i = 0; i <= N; i++)
	{
		S += pow(i, 3);
	}

	printf("Tong S = %ld.", S);

	_getch();
	return 0;
}
*/

//sai ham
void Tong(int N);

int main()
{
	int N;
	
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N <= 0);

	Tong(N);

	_getch();
	return 0;
}

void Tong(int N)
{
	int i = 1;
	long S = 0;
	do
	{
		S += i*i*i;
		i++;
	}while(i <= N);

	printf("Tong S = %ld.", S);
}
