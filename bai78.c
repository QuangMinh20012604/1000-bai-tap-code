#include<stdio.h>
#include<conio.h>
#include<math.h>


//Liệt kê tất cả các ước số của số nguyên dương n.

//khong sai ham

/*
int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	printf("Cac uoc so cua so nguyen duong %d la:\n", N);

	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)	printf("%d\t", i);
	}
	_getch();
	return 0;
}
*/

//sai ham

void TimUoc(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	printf("Cac uoc so cua so nguyen duong %d la:\n", N);

	TimUoc(N);

	_getch();
	return 0;
}
void TimUoc(int N)
{
	int i = 1;
	do
	{
		if(N % i == 0)	printf("%d\t", i);
		i++;
	}while(i <= N);
}