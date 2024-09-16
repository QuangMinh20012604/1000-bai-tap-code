#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng chữ số của số nguyên dương n

//khong sai ham

/*
int main()
{
	int count = 0;
	long N;
	
	do
	{
		printf("Nhap N: ");
		scanf_s("%ld", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	
	for(long N_temp = N; N_temp != 0; N_temp /= 10)
	{
		count++;
	}
	printf("So luong chu so cua so nguyen %ld la: %d", N, count);

	_getch();
	return 0;
}
*/

//sai ham
void LietkeChuSo(int N);

int main()
{
	
	long N;
	
	do
	{
		printf("Nhap N: ");
		scanf_s("%ld", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	
	LietkeChuSo(N);

	_getch();
	return 0;
}

void LietkeChuSo(int N)
{
	int count = 0;
	long N_temp = N;
	do
	{
		count++;
		N_temp /= 10;
	}while(N_temp != 0);
	printf("So luong chu so cua so nguyen %ld la: %d", N, count);
}