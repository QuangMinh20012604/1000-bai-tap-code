#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không?


//khong sai ham

/*
int main()
{
	int N, count = 0;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!");
	}while(N <= 0);
	
	for(int N_temp = N; N_temp != 0;N_temp /= 10)
	{
		if((N_temp % 10) % 2 == 0)	count++;
	}
	if(count != 0)	printf("\n%d khong toan chu so le.", N);
	else printf("\n%d toan chu so le", N);

	getch();
	return 0;

}
*/

//sai ham

void KiemtraToanSoLe(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	KiemtraToanSoLe(N);

	getch();
	return 0;
}

void KiemtraToanSoLe(int N)
{
	int count = 0, N_temp = N;
	/*
	for(int N_temp = N; N_temp != 0;N_temp /= 10)
	{
		if((N_temp % 10) % 2 == 0)	count++;
	}
	*/

	do
	{
		if((N_temp % 10) % 2 == 0)	count++;
		N_temp /= 10;
	}while(N_temp != 0);
	//printf("%d", count);
	if( count > 0)	printf("\n%d khong toan chu so le.",N);
	else printf("\n%d toan chu so le.", N);
}