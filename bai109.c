#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình in bảng cửu chương ra màn hình


//khong sai ham
/*
int main()
{
	for(int i = 1; i <= 9; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d   ", j, i, i*j);
		}
		printf("\n");
	}
	_getch();
	return 0;
}
*/

//sai ham
void BangCuuChuong()
{
	for(int i = 1; i <= 9; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d   ", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{
	BangCuuChuong();
	_getch();
	return 0;
}
