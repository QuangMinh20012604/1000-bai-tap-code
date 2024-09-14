#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng chữ số lẻ của số nguyên dương n

//khong sai ham

/*
int main()
{
	long N, count_odd = 0, count_temp, temp;

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

	while(temp != 0)
	{
		count_temp = temp % 10;
		if(count_temp % 2)	count_odd++;
		temp /= 10;
	}

	printf("\nSo luong chu so le cua so nguyen duong %ld la: %d", N, count_odd);
	getch();
	return 0;
}

*/

//sai ham

void DemChuSoLe(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	DemChuSoLe(N);
	getch();
	return 0;
}

void DemChuSoLe(int N)
{
	int count = 0, N_temp = N;
	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		int temp = N_temp % 10;
		if( temp % 2 == 1)	count++;
	}
	printf("\nSo luong chu so le cua so nguyen duong %d la: %d", N, count);
}