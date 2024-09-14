#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tính tích các chữ số lẻ của số nguyên dương n

//khong sai ham

/*
int main()
{
	long N, P = 1, temp;

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
	while( temp != 0)
	{
		if(temp % 2 == 1)
		{
			P *= temp%10;
		}	
		temp /= 10;
	}

	printf("\nTich cac chu so le cua so nguyen duong %ld la: %ld", N, P);
	getch();
	return 0;
}
*/
//sai ham

void TichCacChuSoLe(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	TichCacChuSoLe(N);

	getch();
	return 0;
}

void TichCacChuSoLe(int N)
{
	long T = 1;
	int N_temp = N;
	for (N_temp; N_temp != 0; N_temp /= 10)
	{
		int T_temp = N_temp % 10;
		if(T_temp % 2 == 1)	T *= T_temp;
	}
	printf("Tich T = %ld", T);
}