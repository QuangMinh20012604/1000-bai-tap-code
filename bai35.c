#include<stdio.h>
#include<conio.h>
#include<math.h>

//Tính S(n) = CanBac2(1+CanBac2(2 + CanBac2( 3 + … + CanBac2(n-1 + CanBac2(n) có n dấu căn

//khong sai ham

/*
int main()
{
	int N;
	float S = 0;

	printf("Nhap N: ");
	scanf_s("%d", &N);

	for (int i = N; i >= 1; i--)
	{
		S = sqrt(i + S);
	}
	printf("Tong S = %f", S);

	getch();
	return 0;
}
*/

//Sai ham

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
	while(N >= 1)
	{
		S = sqrt(N + S);
		N--;
	}

	printf("Tong S = %f", S);
}