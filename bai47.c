#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tính tổng các chữ số chẵn của số nguyên dương n

//Khong sai ham

/*
int main()
{
	long N, temp;
	int count, S = 0;

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
		count = temp%10;
		if(count % 2 == 0) S += count;
		temp /= 10;
	}

	printf("\nTong cac chu so chan cua so nguyen duong %ld la: %d", N, S);

	getch();
	return 0;
}
*/

//sai ham

void TongCacChuSoChan(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0) printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	TongCacChuSoChan(N);

	getch();
	return 0;
}

void TongCacChuSoChan(int N)
{
	int S = 0, N_temp = N;
	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		int S_temp = N_temp % 10;
		if(S_temp % 2 == 0)	S += S_temp;
	}
	printf("Tong S = %d", S);
}