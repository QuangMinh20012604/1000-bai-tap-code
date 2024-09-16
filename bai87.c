#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000


//khong sai ham

int main()
{
	int n = 1, S = 0;
	do	
	{
		S += n;
		n++;
	}while(S <= 10000);

	//Vi khi S + n thì n này la n của vong lap truoc do tang them 1 don vi
	//Va khi het vong lap cuoi thì n tăng thêm 1 đơn vị so voi số cần tìm, nên số cần phải tìm đó phai là n - 1
	printf("%d la so nguyen duong nho nhat thoa man 1 + 2 + ... + n > 10000", n-1);
	printf("\nVa tong la %d", S);
	_getch();
	return 0;
}

//sai ham