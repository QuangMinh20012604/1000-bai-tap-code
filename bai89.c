#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N


//khong sai ham

/*
int main()
{
	int N, S = 0;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	for(int i = 0; i <= N; i++)
	{
		if(i % 2 == 1)	S += i;
	}
	printf("Tong S = %d.", S);

	_getch();
	return 0;
}
*/

//sai ham
void TongCacSoLe(int N);

int main()
{
	int N;

	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	TongCacSoLe(N);
	_getch();
	return 0;
}

void TongCacSoLe(int N)
{
	int i = 1, S = 0;

	do
	{
		if(i % 2 == 1)	S += i;
		i++;
	}while(i <= N);
	printf("Tong S = %d.", S);
}