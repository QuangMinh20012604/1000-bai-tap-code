#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập giá trị x sau tính giá trị của hàm số
//f(x) = 2x^2 + 5x + 9 khi x >= 5, 
//f(x) = -2x^2 + 4x – 9 khi x < 5



//khong sai ham

/*
int main()
{
	double x, S = 0;
	
	printf("Nhap x:");
	scanf_s("%lf", &x);

	if(x >= 5)
	{
		S = 2 * pow(x, 2) + 5 * x + 9;
		printf("f(x) = 2 * x^2 + 5 * x + 9.\n");
	}
	else
	{
		S = -2 * pow(x, 2) + 4 * x -9;
		printf("f(x) = -2 * x^2 + 4 * x - 9.\n");
	}
	printf("f(%.4lf) = %lf", x, S);

	_getch();
	return 0;
}
*/

//sai ham
void TinhTongTheoDieuKien(double x);

int main()
{
	double x;
	
	printf("Nhap x:");
	scanf_s("%lf", &x);

	TinhTongTheoDieuKien(x);

	_getch();
	return 0;
}

void TinhTongTheoDieuKien(double x)
{
	double S = 0;

	if(x >= 5)
	{
		S = 2 * pow(x, 2) + 5 * x + 9;
		printf("f(x) = 2 * x^2 + 5 * x + 9.\n");
	}
	else
	{
		S = -2 * pow(x, 2) + 4 * x -9;
		printf("f(x) = -2 * x^2 + 4 * x - 9.\n");
	}
	
	printf("f(%.4lf) = %lf", x, S);
}