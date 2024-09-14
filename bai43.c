#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng chữ số của số nguyên dương n

//khong sai ham

/*
int main()
{
	long N, temp;
	int sochuso = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%ld", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
		
	} while (N <= 0);

	temp = N;
	while(temp != 0)
	{
		sochuso++;
		temp /= 10; 
	}

	printf("\nSo luong chu so cua so nguyen duong %ld la: %d", N, sochuso);
	getch();
	return 0;
}
*/

//sai ham

void DemLuongChuSo(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N<=0);

	DemLuongChuSo(N);

	getch();
	return 0;
}

void DemLuongChuSo(int N)
{ 
	int count = 0;
	while(N != 0)
	{
		count++;
		N /= 10;
	}
	printf("\nSo luong chu so cua so nguyen duong %d la: %d", N, count);
}