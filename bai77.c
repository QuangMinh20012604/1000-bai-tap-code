#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 + 2 + 3 + ... + n


//khong sai ham

/*
int main()
{
	int N, S = 0;
	printf("Nhap N: ");
	scanf("%d", &N);

	for(int i = 1; i <= N; i++)
	{
		S += i;
	}
	printf("Tong S = %d", S);

	_getch();
	return 0;
}
*/

//sai ham
void tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	tong(N);

	_getch();
	return 0;
}

void tong(int N)
{
	int S = 0, i = 1;

	do
	{
		S += i;
		i++;
	}while(i <= N);
	printf("Tong S = %d", S);
}