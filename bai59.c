#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy kiểm tra số nguyên dương n có phải số đối xứng hay không?


//khong sai ham

/*
int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	int N_temp = N, N_nghich = 0;
	for(N_temp; N_temp != 0; N_temp /= 10)
	{
		N_nghich = N_nghich * 10 + (N_temp % 10); 
	}
	//printf("%d\n", N_nghich);
	if( N_nghich == N )	printf("%d la so doi xung", N);
	else printf("%d khong la so doi xung", N);

	_getch();
	return 0;
}
*/

//sai ham

void KiemTraSoDoiXung(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	KiemTraSoDoiXung(N);

	getch();
	return 0;
}

void KiemTraSoDoiXung(int N)
{
	int N_nghich = 0, N_temp = N;

	do
	{
		N_nghich = N_nghich * 10 + (N_temp % 10);
		N_temp /= 10;
	}while(N_temp != 0);
	//printf("%d\n", N_nghich);
	if(N_nghich == N)	printf("%d la so doi xung.\n", N);
	else printf("%d khong la so doi xung.\n", N);
}