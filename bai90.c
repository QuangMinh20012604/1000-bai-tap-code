#include<stdio.h>
#include<conio.h>
#include<math.h>


//Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N


//khong sai ham

/*
int main()
{
	int N, m = 1, S = 0;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	for(m; S < N; m++)
	{
		S += m;
	}
	printf("m = %d\n", (m - 1));// vi khi ket thuc vong lap m da tang them 1 don vi so voi so thuc.
	printf("Tong S = %d", S);

	_getch();
	return 0;
}
*/

//sai ham
void TimSoLonNhatThoaMan(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	
	TimSoLonNhatThoaMan(N);

	_getch();
	return 0;
}

void TimSoLonNhatThoaMan(int N)
{
	int m = 1, S = 0;
	do
	{
		S += m;
		m++;
	}while(S < N);
	
	printf("m = %d\n", (m - 1));// vi khi ket thuc vong lap m da tang them 1 don vi so voi so thuc.
	printf("Tong S = %d", S);
}