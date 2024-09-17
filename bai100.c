#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình giải phương trình bậc 2.


//khong sai ham

/*
int main()
{	
	double a, b, c;
	double x, x1, x2;

	printf("Phuong trinh bac 2: ax^2 +bx +c = 0\n");

	printf("Nhap canh a: ");
	scanf_s("%lf", &a);
	printf("Nhap canh b: ");
	scanf_s("%lf", &b);
	printf("Nhap canh c: ");
	scanf_s("%lf", &c);

	double denta;

	denta =  b * b - 4 * a * c;

	if( a == 0)
	{
		if(b == 0 && c == 0)	printf("Phuong trinh vo so nghiem.\n");
		else if(b == 0)	printf("Phuong trinh vo nghiem.\n");
		else 
		{
			if(c == 0)	x = 0;
			else	x = -c / b;
			printf("Phuong trinh co 1 nghiem x = %.4lf.", x);
		}

	}
	else
	{
		if(denta < 0)	printf("Phuong trinh vo nghiem.");
		else if(denta == 0)
		{
			x = x1 = x2 = -b / (2 * a);
			printf("Phuong trinh co nghiem kep x = %.4lf.", x);
		}
		else
		{
			x1 = (-b - sqrt(denta)) / (2 * a);
			x2 = (-b + sqrt(denta))	/ (2 * a);
			printf("Phuong trinh co 2 nghiem x1 = %lf va x2 = %lf.", x1, x2);
		}
	}

	_getch();
	return 0;

}
*/

//sai ham
void PTB2(double a, double b, double c);

int main()
{
	double a, b, c;


	printf("Phuong trinh bac 2: ax^2 +bx +c = 0\n");

	printf("Nhap canh a: ");
	scanf_s("%lf", &a);
	printf("Nhap canh b: ");
	scanf_s("%lf", &b);
	printf("Nhap canh c: ");
	scanf_s("%lf", &c);

	PTB2(a, b, c);

	_getch();
	return 0;
}

void PTB2(double a, double b, double c)
{
	double x, x1, x2;
	double denta;

	denta =  b * b - 4 * a * c;

	if( a == 0)
	{
		if(b == 0 && c == 0)	printf("Phuong trinh vo so nghiem.\n");
		else if(b == 0)	printf("Phuong trinh vo nghiem.\n");
		else 
		{
			if(c == 0)	x = 0;
			else	x = -c / b;
			printf("Phuong trinh co 1 nghiem x = %.4lf.", x);
		}

	}
	else
	{
		if(denta < 0)	printf("Phuong trinh vo nghiem.");
		else if(denta == 0)
		{
			x = x1 = x2 = -b / (2 * a);
			printf("Phuong trinh co nghiem kep x = %.4lf.", x);
		}
		else
		{
			x1 = (-b - sqrt(denta)) / (2 * a);
			x2 = (-b + sqrt(denta))	/ (2 * a);
			printf("Phuong trinh co 2 nghiem x1 = %lf va x2 = %lf.", x1, x2);
		}
	}

}

