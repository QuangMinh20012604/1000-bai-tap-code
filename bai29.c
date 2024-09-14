#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25

//khong sai ham

/*
int main()
{
	int i = 1, N, n_le = i;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
	}while (N <= 0);

	while( i <= N)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			if(i % 2 == 1)
			{
				if(i > n_le)
				{
					n_le = i;
				}
			}
		}
		i++;
	}

	/*
	for(i; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%4d", i);
			if(i % 2 == 1)
			{
				if(i > n_le)
				{
					n_le = i;
				}
			}
		}
	}
	*

	printf("\nUoc so le lon nhat cua so nguyen duong %d la: %d", N, n_le);
	getch();
	return 0;
}
*/

//sai ham

int uocLeLonNhat(int N);

int main()
{
	int N;
	do
	{
	printf("Nhap N: ");
	scanf("%d", &N);
	if(N <= 0) printf("\nN phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);
	int N_le_max = uocLeLonNhat(N);

	printf("\nUoc so le lon nhat cua so nguyen duong %d la: %d", N, N_le_max);
	
	getch();
	return 0;
}

int uocLeLonNhat(int N)
{
	int n_le_max = 1;
	for(int i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%-4d", i);
			if(i % 2 == 1)
			{
				n_le_max = i;
			}
		}
	}
	return n_le_max;
}