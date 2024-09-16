#include<stdio.h>
#include<conio.h>
#include<math.h>


//Kiểm tra số nguyên 4 byte có dạng 2^k hay không
//So nguyen 4 byte la kieu du liệu Int

//khong sai ham

/*
int main()
{
	int N;
	int count = 0;	//count = 0 : true	count = 1 : false

	do
	{
	printf("Nhap N: ");
	scanf_s("%d", &N);
	if(N <= 1)	printf("N phai lon hon 1. Xin moi nhap lai!!!\n");
	}while(N <= 1);

	for(int i = N; i > 1; i /= 2)
	{
		if(i % 2 == 0)
		{
			count = 0;
		}
		else
		{
			count = 1;
			break;
		} 
	}

	if(count == 0)	printf("%d co dang 2^k.",N);
	else printf("%d khong co dang 2^k.", N);

	_getch();
	return 0;
}
*/

//sai ham
void Kiemtra4ByteDang2k(int N);

int main()
{
	int N;
		
	do
	{
	printf("Nhap N: ");
	scanf_s("%d", &N);
	if(N <= 1)	printf("N phai lon hon 1. Xin moi nhap lai!!!\n");
	}while(N <= 1);

	Kiemtra4ByteDang2k(N);

	_getch();
	return 0;
}

void Kiemtra4ByteDang2k(int N)
{
	int i = N;
	int count = 0;	//count = 0 : true	count = 1 : false
	
	do
	{
		if(i % 2 != 0)
		{
			count = 1;
			break;
		}
		i /= 2;
	}while (1 < i);

	if(count == 0)	printf("%d co dang 2^k.",N);
	else printf("%d khong co dang 2^k.", N);
}