#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n

//khong sai ham
/*
int main()
{
	int N, i, temp;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
		
	} while (N <= 0);

	temp = N;
	do
	{
		i = temp % 10;
		temp /= 10;
	}while( temp != 0);

	printf("\nChu so dau tien cua %d la: %d", N, i);
	getch();
	return 0;
}
*/

//sai ham

void ChuSoDauTien(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	
	ChuSoDauTien(N);

	getch();
	return 0;
}

void ChuSoDauTien(int N)
{
	int i;
	int N_temp = N;
	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		i = N_temp % 10;
	}
	printf("\nChu so dau tien cua %d la: %d", N, i);
}