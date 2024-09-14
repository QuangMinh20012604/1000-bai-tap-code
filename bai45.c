#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tính tích các chữ số của số nguyên dương n

//khong sai ham

/*
int main()
{
	int N, temp;
	long P = 1;

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
		P *= temp%10;
		temp /= 10;
	}

	printf("\nTich cac chu so cua so nguyen duong %d la: %ld", N, P);

	getch();
	return 0;
}

*/

//Sai ham

void TichCacChuSo(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	TichCacChuSo(N);

	getch();
	return 0;
}
void TichCacChuSo(int N)
{
	long T = 1;
	for(N; N != 0; N /= 10)
	{
		T *= N % 10;
	}
	printf("Tich T = %ld", T);
}