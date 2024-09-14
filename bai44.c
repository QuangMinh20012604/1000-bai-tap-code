#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tính tổng các chữ số của số nguyên dương n
//N = 1589
//S = 1 + 5 + 8 + 9

//khong sai ham

/*
int main()
{
	int N, S = 0, temp;

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
		S += temp%10;
		temp /= 10;
	}
	
	printf("\nTong cac chu so cua so nguyen duong %d la: %d", N, S);

	getch();
	return 0;
}
*/

//sai ham
void TongCacChuSo(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0) printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N <= 0);
	TongCacChuSo(N);

	getch();
	return 0;

}

void TongCacChuSo(int N)
{
	int S = 0;
	for(N; N != 0; N /= 10)
	{
		S += N % 10;
	}
	printf("Tong S = %d", S);
}