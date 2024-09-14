#include<stdio.h>
#include<conio.h>
#include<math.h>


//Đếm số lượng “ước số” của số nguyên dương n

//khong sai ham 

/*
int main()
{
	int i = 1, N, n = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	while(i <= N)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			n++;
		}
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			n++;
		}
	}
	*

	printf("\nSo luong 'uoc so' cua so nguyen duong %d la: %d", N, n);
	getch();
	return 0;
}*/

//sai ham

int demUoc(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);

	int count = demUoc(N);
	printf("\nSo luong 'uoc so' cua so nguyen duong %d la %d", N, count);

	getch();
	return 0;
}

int demUoc(int N)
{
	int count = 0;
	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%5d", i);
			count++;
		}
	}
	return count;
}