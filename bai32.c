#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không

//Số chính phương là bình phương của 1 số nguyên

//khong sai ham
/*
int main()
{
	int n;

	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	} while (n <= 0);

	/*
	sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
    sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương
	*
	
	if( sqrt((float)n) == (int)sqrt((float)n) )
	{
		printf("\n%d la so chinh phuong", n);
	}
	else
	{
		printf("\n%d khong la so chinh phuong", n);
	}
	getch();
	return 0;
}
*/

//sai ham

void soChinhPhuong1(int N);
void soChinhPhuong2(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("\nN phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	//soChinhPhuong1(N);
	soChinhPhuong2(N);

	getch();
	return 0;
}

void soChinhPhuong1(int N)
{
	if( sqrt((float) N) == (int) sqrt((float) N) )
	{
		printf("\n%d la so chinh phuong.", N);
	}
	else
	{
		printf("\n%d khong la so chinh phuong.", N);
	}
}

void soChinhPhuong2(int N)
{
	int count = 0;
	for(int i = 1; (i * i) <= N; i++)
	{
		if( i * i == N) count++;
	}

	if(count == 1)
	{
		printf("\n%d la so chinh phuong.", N);
	}
	else
	{
		printf("\n%d khong la so chinh phuong.", N);
	}
}