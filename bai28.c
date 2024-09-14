#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó

//khong sai ham

/*
int main()
{
	int i = 1, N, S = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (N <= 0);

	for(i; i < N; i++)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			S += i;
		}
	}

	/*
	while(i < N)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			S += i;
		}
	}
	*
	
	printf("\nTong cac uoc so nho hon %d la: %d",N, S);
	getch();
	return 0;
}
*/

//sai ham
long tongUocNhoHonN(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai lon hon 0. Xin moi nhap lai!!!\n");
		}
	}while(N <= 0);
	long S = tongUocNhoHonN(N);

	printf("\nTong S = %ld", S);

	getch();
	return 0;
}

long tongUocNhoHonN(int N)
{
	long S = 0;
	for(int i = 1; i < N; i++)
	{
		if(N % i == 0)
		{
			printf("%-5d\t",i);
			S += i;
		}
	}
	return S;
}
