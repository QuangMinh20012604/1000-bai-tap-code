#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không?


//khong sai ham

/*
int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	int N_temp = N, count = 0;

	do
	{
		if((N_temp % 10) % 2 ==1)	count++;
		N_temp /= 10;
	}while(N_temp != 0);

	if(count == 0)	printf("%d toan chu so chan.", N);
	else printf("%d khong toan chu so chan.", N);

	_getch();
	return 0;
}
*/

//sai ham

void KiemtraToanSoChan(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	KiemtraToanSoChan(N);

	_getch();
	return 0;
}

void KiemtraToanSoChan(int N)
{
	int count = 0, N_temp = N;

	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		if((N_temp % 10) % 2 != 0)	count++;
	}

	if(count != 0)	printf("%d khong toan chu so chan.", N);
	else printf("%d toan chu so chan.", N);
}