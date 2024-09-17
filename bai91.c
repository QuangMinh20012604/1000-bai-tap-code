#include<stdio.h>
#include<conio.h>
#include<math.h>


//In tất cả các số nguyên dương lẻ nhỏ hơn 100


//khong sai ham
/*
int main()
{
	for(int i = 1; i <= 100; i++)
	{
		if(i % 2 == 1)
			printf("%4d", i);
	}
	_getch();
	return 0;
}
*/
//sai ham
void InSoLeNhoHon100()
{
	int i = 1;
	do
	{
		if(i % 2 == 1)	printf("%4d", i);
		i++;
	}while(i <= 100);
}

int main()
{
	InSoLeNhoHon100();

	_getch();
	return 0;
}