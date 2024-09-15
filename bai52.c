#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm chữ số nhỏ nhất của số nguyên dương n

//khong sai ham
/*
int main()
{
	int N, min = 9, min_temp, temp;

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
	do
	{
		min_temp = temp % 10;

		if( min> min_temp)
		{
			min = min_temp;
		}
		
		temp /= 10;
	}while(temp != 0);

	printf("\nChu so nho nhat cua so nguyen duong %d la: %d", N, min);

	getch();
	return 0;
}
*/

//sai ham
void ChuSoNhoNhat(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	ChuSoNhoNhat(N);

	getch();
	return 0;
}

void ChuSoNhoNhat(int N)
{
	int n_min = 9, N_temp = N;

	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		int n = N_temp % 10;
		if(n <= n_min)
		{
			n_min = n;
		}
	}

	printf("Chu so lon nhat cua so nguyen duong %d la %d", N, n_min);
}
