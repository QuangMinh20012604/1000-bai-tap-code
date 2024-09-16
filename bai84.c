#include<stdio.h>
#include<conio.h>
#include<math.h>


//Giải phương trình và biện luận phương trình 𝑎𝑥 + 𝑏 = 0


//khong sai ham

/*
int main()
{
	double a, b, x = 0;
	printf("Phuong trinh bac nhat: ax + b = 0\n\n");

	printf("Nhap a:  ");
	scanf("%lf", &a);
	printf("Nhap b:  ");
	scanf("%lf", &b);

	if(a == 0 && b == 0)	printf("Phuong trinh co vo so nghiem.");
	else if(a == 0 && b != 0)	printf("Phuong trinh vo nghiem.");
	else 
	{
		
		if( b == 0)	x = 0;
		else x = -b / a;
		printf("Phuong trinh co nghiem la %lf.", x);
	}

	_getch();
	return 0;
}
*/

//sai ham
void PTB1(double a, double b);

int main()
{
	double a, b;
	printf("Phuong trinh bac nhat: ax + b = 0\n\n");

	printf("Nhap a:  ");
	scanf("%lf", &a);
	printf("Nhap b:  ");
	scanf("%lf", &b);

	PTB1(a, b);

	_getch();
	return 0;
}

void PTB1(double a, double b)
{
	double x = 0;

	if(a == 0 && b == 0)	printf("Phuong trinh co vo so nghiem.");
	else if(a == 0 && b != 0)	printf("Phuong trinh vo nghiem.");
	else 
	{
		
		if( b == 0)	x = 0;
		else x = -b / a;
		printf("Phuong trinh co nghiem la %lf.", x);
	}
}
