#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm chữ số lớn nhất của số nguyên dương n
//N = 1531
//=> MAX = 5

//khong sai ham
/*
int main()
{
	int N, max = 0, max_temp, temp;
	//int Vitri = 0, Vitri_temp;

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
	//Vitri_temp = 0;
	do
	{
		max_temp = temp % 10;
		//Vitri_temp++;
		if( max < max_temp)
		{
			max = max_temp;
			//Vitri = Vitri_temp;
		}
		
		temp /= 10;
	}while(temp != 0);

	printf("\nChu so lon nhat cua so nguyen duong %d la: %d", N, max);
	//printf("\nVi tri cua chu so lon nhat cua so nguyen duong %d la: %d", N, Vitri);
	
	getch();
	return 0;
}
*/

//sai ham

void ChuSoLonNhat(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N <= 0);

	ChuSoLonNhat(N);

	getch();
	return 0;
}

void ChuSoLonNhat(int N)
{
	int N_max = 0, N_temp = N, n = 0, n_max = 0;

	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		++n_max;
		int temp = N_temp % 10;
		if(temp > N_max)	
		{
			N_max = temp;
			n = n_max;
		}
	}
	n = (n_max - n) + 1;
	printf("Chu so lon nhat cua so nguyen duong %d la %d o vi tri thu %d", N, N_max, n);
}