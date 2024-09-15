#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 + 2 + 3 + ... + n

void PTB1(double a, double b);
void PTTrungPhuong(double a, double b, double c);
int main()
{
	double a, b, c;
	printf("ax^4 + bx^2 + c = 0\n");

	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);

	PTTrungPhuong(a, b, c);
	_getch();
	return 0;
}

void PTB1(double a, double b)
{
	double y, x1, x2;

	if (a == 0 && b == 0)	printf("Phuong trinh co vo so nghiem.");
	else if (a == 0 && b != 0)	printf("Phuong trinh vo nghiem.");
	else
	{
		y = (float)(-b / a);
		if (y < 0)	printf("Phuong trinh vo nghiem.");
		else if (y == 0)	printf("Phuong trinh co nghiem la x = 0");
		else
		{
			x1 = -sqrt(y);
			x2 = sqrt(y);
		}
		printf("Phuong trinh co 2 nghiem la x1 = %lf va x2 = %lf", x1, x2);
	}
}
void PTTrungPhuong(double a, double b, double c)
{
	double  y, y1, y2, x1, x2, x3, x4;
	if (a == 0)	PTB1(b, c);
	else
	{
		double denta = b * b - 4 * a * c;
		if (denta < 0)	printf("Phuong trinh vo nghiem.");

		else if (denta == 0)
		{
			y = y1 = y2 = -b / (2 * a);
			if (y < 0)
			{
				printf("Phuong trinh vo nghiem.");
			}
			else if (y == 0)	printf("Phuong trinh co nghiem la x = 0");
			else
			{
				x1 = -sqrt(y);
				x2 = sqrt(y);
				printf("Phuong trinh co 2 nghiem la x1 = %lf va x2 = %lf", x1, x2);
			}
		}

		else
		{
			y1 = (-b - sqrt(denta)) / (2 * a);
			y2 = (-b + sqrt(denta)) / (2 * a);
			if (y1 < 0)
			{
				if (y2 < 0)
				{
					printf("Phuong trinh vo nghiem.");
				}
				else if (y2 == 0)	printf("Phuong trinh co nghiem la x = 0");
				else
				{
					x1 = -sqrt(y2);
					x2 = sqrt(y2);
					printf("Phuong trinh co 2 nghiem la x1 = %lf va x2 = %lf", x1, x2);
				}
			}
			else if (y1 == 0)
			{
				if (y2 <= 0)
				{
					printf("Phuong trinh co 1 nghiem x = 0.");
				}
				else
				{
					x1 = -sqrt(y2);
					x2 = sqrt(y2);
					printf("Phuong trinh co 3 nghiem la x1 = %lf, x2 = %lf va x3 = 0", x1, x2);
				}
			}
			else
			{
				x1 = -sqrt(y1);
				x2 = sqrt(y1);
				if (y2 < 0)
				{
					printf("Phuong trinh co 2 nghiem la x1 = %lf va x2 = %lf", x1, x2);
				}
				if (y2 == 0)
				{
					printf("Phuong trinh co 3 nghiem la x1 = %lf, x2 = %lf va x3 = 0", x1, x2);
				}
				else
				{
					x3 = -sqrt(y2);
					x4 = sqrt(y2);
					printf("Phuong trinh co 4 nghiem la x1 = %lf, x2 = %lf, x3 = %lf va x4 = %lf", x1, x2, x3, x4);
				}
			}
		}
	}
}


