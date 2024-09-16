#include<stdio.h>
#include<conio.h>
#include<math.h>


//Kiểm tra số nguyên 4 byte có dạng 3^k hay không
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
	if(N <= 0)	printf("N phai lon hon 1. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	for(int i = N; i > 0; i /= 3)
	{
		if(i % 3 == 0)
		{
			count = 0;
		}
		else
		{
			count = 1;
			break;
		} 
	}

	if(count == 0)	printf("%d co dang 3^k.",N);
	else printf("%d khong co dang 3^k.", N);

	_getch();
	return 0;
}
*/

//sai ham
void Kiemtra4ByteDang3k(int N);

int main()
{
	int N;
		
	do
	{
	printf("Nhap N: ");
	scanf_s("%d", &N);
	if(N <= 0)	printf("N phai lon hon 1. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	Kiemtra4ByteDang3k(N);

	_getch();
	return 0;
}

void Kiemtra4ByteDang3k(int N)
{
	int i = N;
	int count = 0;	//count = 0 : true	count = 1 : false
	
	do
	{
		if(i % 3 != 0)
		{
			count = 1;
			break;
		}
		i /= 3;
	}while (0 < i);

	if(count == 0)	printf("%d co dang 3^k.",N);
	else printf("%d khong co dang 3^k.", N);
}