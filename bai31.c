#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
//khong sai ham

/*
int main()
{
	int i = 2, N, n = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 1. Xin nhap lai !");
		}
	} while (N <= 1;

	while(i < N)
	{
		if(N % i == 0)
		{
			n++;
		}
		i++;
	}

	/*
	for(i; i < N; i++)
	{
		if(N % i == 0)
		{
			n++;
		}
	}
	*

	if(n > 0)
	{
		printf("\n%d khong la so nguyen to", N);
	}
	else
	{
		printf("\n%d la so nguyen to", N);
	}

	getch();
	return 0;
}
*/

//sai ham
void soNguyenTo(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 2)	printf("\nN phai lon hon 2. Xin moi nhap lai!!!\n");
	}while (N <= 2);
	soNguyenTo(N);

	getch();
	return 0;
}

void soNguyenTo(int N)
{
	int count = 0;

	for(int i = 2; i < N; i++)
	{
		if(N % i == 0)
		{
			count++;
		}
	}
	if(count > 0)	printf("\n%d khong la so nguyen to", N);
	else	printf("\n%d la so nguyen to", N);
}