#include<stdio.h>
#include<conio.h>
#include<math.h>


//Giải phương trình 𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0

//khong sai ham

/*
void PTB1(double a, double b);

int main()
{
	double a, b, c, x, x1, x2;
	printf("ax^2 + bx + c = 0\n");
	
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);

	if(a == 0)	PTB1(b,c);
	else
	{
		double denta = b*b - 4*a*c;
		if(denta < 0)	printf("Phuong trinh vo nghiem.");
		else if(denta == 0)	
		{
			x = x1 = x2 = -b / (2*a);
			printf("Phuong trinh co nghiem kep x1 = x2 = %lf",x);
		}
		else
		{
			x1 = (-b - sqrt(denta)) / (2*a);
			x2 = (-b + sqrt(denta)) / (2*a);
			printf("Phuong trinh co 2 nghiem x1 = %lf, x2 = %lf",x1, x2);
		}

		_getch();
		return 0;
	}
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
*/

//sai ham
void PTB1(double a, double b);
void PTB2(double a, double b, double c);

int main()
{
	double a, b, c;
	printf("ax^2 + bx + c = 0\n");
	
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);

	PTB2(a, b, c);
	_getch();
	return 0;
}

void PTB1(double a, double b)
{
	double x;

	if(a == 0 && b == 0)	printf("Phuong trinh co vo nghiem.");
	else if(a == 0 && b != 0)	printf("Phuong trinh vo nghiem.");
	else
	{
		x = (float) (-b / a);
		printf("Phuong trinh co nghiem la x = %4lf", x);
	}
}
void PTB2(double a, double b, double c)
{
	double  x, x1, x2;
	if(a == 0)	PTB1(b,c);
	else
	{
		double denta = b*b - 4*a*c;
		if(denta < 0)	printf("Phuong trinh vo so nghiem.");
		else if(denta == 0)	
		{
			x = x1 = x2 = -b / (2*a);
			printf("Phuong trinh co nghiem kep x1 = x2 = %lf",x);
		}
		else
		{
			x1 = (-b - sqrt(denta)) / (2*a);
			x2 = (-b + sqrt(denta)) / (2*a);
			printf("Phuong trinh co 2 nghiem x1 = %lf, x2 = %lf",x1, x2);
		}
	}
}