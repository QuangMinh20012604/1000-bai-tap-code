#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm số đảo ngược của số nguyên dương n
//N = 1234
//M = 4321

//khong sai ham

/*
int main()
{
	int N , SoNghichDao = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
		
	} while (N <= 0);

	printf("\nSo dao nguoc cua %d la: ", N);
	do
	{
		printf("%d", N % 10);
	}while(N /= 10);	//// tương đương N = N / 10; N != 0;

	/*
	do
	{
		SoNghichDao = SoNghichDao * 10 +N % 10;
		N /= 10;
	}while(N != 0)
	printf("\n%d", SoNghichDao);
	*

	getch();
	return 0;
}
*/

//sai ham

void SoDaoNguoc(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lạ!!!\n");
	}while(N <= 0);

	SoDaoNguoc(N);

	getch();
	return 0;
}

void SoDaoNguoc(int N)
{
	int N_nghich = 0, N_temp = N;
	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		N_nghich = N_nghich * 10 + N_temp % 10;
	}
	printf("So nghich dao cua %d la %d", N, N_nghich);
}