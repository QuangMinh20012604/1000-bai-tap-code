#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
//N = 135254 => max = 5, sl = 2

//khong sai ham

/*
int main()
{
	long N;
    int i, temp, max = 0, dem = 0;
    
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
		i = temp % 10;
		if (i > max) max = i;
		temp /= 10;
	}while( temp != 0);

	temp = N;

	do
	{
		 i = temp % 10;
		 if(i == max) dem++;
		 temp /= 10;
	}while( temp != 0);

	printf("\nChu so lon nhat cua so nguyen %ld la: %d", N, max);
	printf("\nSo luong chu so lon nhat cua so nguyen %ld la: %d", N, dem);

    getch();
    return 0;
}
*/

//sai ham

void SoLuongChuSoLonNhat(int N);

int main()
{
	long N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	SoLuongChuSoLonNhat(N);
	getch();
	return 0;
}

void SoLuongChuSoLonNhat(long N)
{
	int count = 0;
	int n_max = 0, N_temp = N;

	do
	{
		int n = N_temp % 10;
		if(n > n_max)	n_max = n;
		N_temp /= 10;
	} while(N_temp != 0);

	N_temp = N;

	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		int n = N_temp % 10;
		if(n == n_max) count++;
	}
	printf("\nChu so lon nhat cua so nguyen %ld la: %d", N, n_max);
	printf("\nSo luong chu so lon nhat cua so nguyen %ld la: %d", N, count);
}