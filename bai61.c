#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không?


//khong sai ham

/*
int main()
{
	int N;
	do 
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N <= 0);

	int N_temp = N, n_trai, n_phai, count = 0;
	n_phai = N_temp % 10;
	N_temp /= 10;
	do
	{
		n_trai = N_temp % 10;
		printf("%d   %d\n", n_trai, n_phai);

		if(n_trai > n_phai)	n_phai = n_trai;
		else
		{
			count = 1;
			break;
		}
		N_temp /= 10;
	}while(N_temp != 0);
	if(count == 1)	printf("%d khong phai la so giam dan tu trai qua phai.", N);
	else printf("%d la so giam dan tu trai qua phai.", N);

	_getch();
	return 0;
}
*/

//sai ham
void KiemtraTGiamDanTuTraiQuaPhai(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while( N <= 0);

	KiemtraTGiamDanTuTraiQuaPhai(N);

	_getch();
	return 0;
}

void KiemtraTGiamDanTuTraiQuaPhai(int N)
{
	int N_temp = N, count = 0, n_trai, n_phai;
	n_phai = N_temp % 10;
	N_temp /= 10;

	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		n_trai = N_temp % 10;
		if(n_phai < n_trai)	n_phai = n_trai;
		else
		{
			count = 1;
			break;
		}
	}
	if(count == 1)	printf("%d khong phai la so giam dan tu trai qua phai.", N);
	else printf("%d la so giam dan tu trai qua phai.", N);
}