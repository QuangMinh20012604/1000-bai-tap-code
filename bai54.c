#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n

//khong sai ham

/*
int main()
{
	long N;
    int i, temp,  min = 9, dem = 0;
    
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
		if (i < min) min = i;
		temp /= 10;
	}while( temp != 0);

	temp = N;

	do
	{
		 i = temp % 10;
		 if(i == min) dem++;
		 temp /= 10;
	}while( temp != 0);

	printf("\nChu so lon nhat cua so nguyen %ld la: %d", N, min);
	printf("\nSo luong chu so lon nhat cua so nguyen %ld la: %d", N, dem);

    getch();
    return 0;
}
*/

//sai ham
void DemLuongChuSoNhoNhat(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap : ");
		scanf("%d", &N);

		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	DemLuongChuSoNhoNhat(N);

	getch();
	return 0;
}

void DemLuongChuSoNhoNhat(int N)
{
	int count = 0, min = 9;
	int N_temp = N;
	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		int n = N_temp % 10;
		if(n < min)	min = n;
	}

	N_temp = N;
	do
	{
		int n = N_temp % 10;
		if(n == min)	count++;
	}while(N_temp != 0);
	printf("\nChu so lon nhat cua so nguyen %d la: %d", N, min);
	printf("\nSo luong chu so lon nhat cua so nguyen %d la: %d", N, count);
}