#include<stdio.h>
#include<conio.h>
#include<math.h>


//Lập chương trình giải hệ: 
//ax + by = c
//dx + ey = f. 
//Các hệ số nhập từ bàn phím

//Định thức của hệ: D = ae-bd
//Định thức của x: Dx = ce - bf
//Định thức của y: Dy = af - cd#

//D != 0 hệ có 1 nghiệm x = Dx/D; y = Dy/D
//D == 0 && (Dx != 0 || Dy != 0) pt vô nghiệm
//D == Dx == Dy pt vô số nghiệm

//khong sai ham

/*
int main()
{
	double x, y;
	double a, b, c, d, e, f;
	double D, Dx, Dy;

	printf("Nhap canh a: ");
	scanf_s("%lf", &a);
	printf("Nhap canh b: ");
	scanf_s("%lf", &b);
	printf("Nhap canh c: ");
	scanf_s("%lf", &c);
	printf("Nhap canh d: ");
	scanf_s("%lf", &d);
	printf("Nhap canh e: ");
	scanf_s("%lf", &e);
	printf("Nhap canh f: ");
	scanf_s("%lf", &f);

	D = a * e - b * d;
	Dx = c * e - f * b;
    Dy = a * f - d * c;
    x = Dx / D;
    y = Dy / D;
    if(D != 0)
    {
    	printf("\nPhuong trinh co 1 nghiem la x = %4lf va y = %4lf.",x ,y);
    }
    else
    {
    	if((Dx != 0) || (Dy != 0))
    	{
    		printf("\nPhuong trinh vo nghiem.");
    	}
    	else if(D == Dx == Dy)
    	{
    		printf("\nPhuong trinh co vo so nghiem.");
    	}
    }

    _getch();
    return 0;
}
*/

//sai ham
void HPTB1(double a, double b, double c, double d, double e, double f);

int main()
{
	double a, b, c, d, e, f;

	printf("Nhap canh a: ");
	scanf_s("%lf", &a);
	printf("Nhap canh b: ");
	scanf_s("%lf", &b);
	printf("Nhap canh c: ");
	scanf_s("%lf", &c);
	printf("Nhap canh d: ");
	scanf_s("%lf", &d);
	printf("Nhap canh e: ");
	scanf_s("%lf", &e);
	printf("Nhap canh f: ");
	scanf_s("%lf", &f);

	HPTB1(a, b, c, d, e, f);

	_getch();
	return 0;
}

void HPTB1(double a, double b, double c, double d, double e, double f)
{
	double x, y;
	double D, Dx, Dy;

	D = a * e - b * d;
	Dx = c * e - f * b;
    Dy = a * f - d * c;
    x = Dx / D;
    y = Dy / D;
    if(D != 0)
    {
    	printf("\nPhuong trinh co 1 nghiem la x = %4lf va y = %4lf.",x ,y);
    }
    else
    {
    	if((Dx != 0) || (Dy != 0))
    	{
    		printf("\nPhuong trinh vo nghiem.");
    	}
    	else if(D == Dx == Dy)
    	{
    		printf("\nPhuong trinh co vo so nghiem.");
    	}
    }
}