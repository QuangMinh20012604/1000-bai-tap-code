#include<stdio.h>
#include<conio.h>
#include<math.h>


//Giải phương trình 𝑎𝑥 + 𝑏 = 0


//khong sai ham

/*
int main()
{	
	double a, b, x;
	printf("ax + b = 0\n");
	
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);

	if(a == 0 && b == 0)	printf("Phuong trinh co vo so nghiem.");
	else if(a == 0 && b != 0)	printf("Phuong trinh vo nghiem.");
	else
	{
		x = (float) -b / a;
		printf("Phuong trinh co nghiem la x = %4lf", x);
	}

	getch();
	return 0;
}
*/

//sai ham

void PTB1(double a, double b);

int main()
{
	double a, b;
	printf("ax + b = 0\n");
	
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);

	PTB1(a, b);

	_getch();
	return 0;
}

void PTB1(double a, double b)
{
	double x;

	if(a == 0 && b == 0)	printf("Phuong trinh co vo so nghiem.");
	else if(a == 0 && b != 0)	printf("Phuong trinh vo nghiem.");
	else
	{
		x = (float) (-b / a);
		printf("Phuong trinh co nghiem la x = %4lf", x);
	}
}