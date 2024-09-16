#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình tìm số lớn nhất trong ba số thực a, b, c.


//khong sai ham

/*
int main()
{
	double a, b, c, max = 0;
	
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);

	max = a;

	if(max < b)	max = b;
	
	if(max < c)	max = c;

	printf("So lon nhat trong ba so thuc  %10.3lf, %10.3lf, %10.3lf la %10.3lf", a, b, c, max);

	_getch();
	return 0;
}
*/

//sai ham
void Max(double a, double b, double c);

int main()
{
	double a, b, c;
	
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);
	Max(a, b, c);
	_getch();
	return 0;
}

void Max(double a, double b, double c)
{
	double max = a;

	if(max < b)	max = b;
	
	if(max < c)	max = c;

	printf("So lon nhat trong ba so thuc  %10.3lf, %10.3lf, %10.3lf la %10.3lf", a, b, c, max);
}