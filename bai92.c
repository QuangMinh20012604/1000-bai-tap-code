#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm ước số chung lớn nhất của 2 số nguyên dương


//khong sai ham

/*
int main()
{
	int a, b, UCLN = 1;
	do
	{
		printf("Nhap a: ");
		scanf_s("%d", &a);
		if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n"); 
	}while(a <= 0);
	do
	{
		printf("Nhap b: ");
		scanf_s("%d", &b);
		if(b <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n"); 
	}while(b <= 0);

	int max;
	if(a >= b) max = a;
	else max = b;

	for(int i = 1; i <= max; i++)
	{
		if((a % i == 0) && (b % i == 0))
			UCLN = i;
	}
	printf("Uoc chung lon nhat cua %d va %d la %d.", a, b, UCLN);

	_getch();
	return 0;
}
*/

//sai ham
void UCLN(int a, int b);

int main()
{
	int a, b;
	do
	{
		printf("Nhap a: ");
		scanf_s("%d", &a);
		if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n"); 
	}while(a <= 0);
	do
	{
		printf("Nhap b: ");
		scanf_s("%d", &b);
		if(b <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n"); 
	}while(b <= 0);

	UCLN(a,b);

	_getch();
	return 0;
}

void UCLN(int a, int b)
{
	int UCLN = 1, max, i = 1;

	if(a >= b)	max = a;
	else max = b;

	do
	{
		if((a % i == 0) && (b % i == 0))	UCLN = i;
		i++;
	}while(i <= max);
	printf("Uoc chung lon nhat cua %d va %d la %d.", a, b, UCLN);
}