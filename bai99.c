#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập vào 3 số thực. 
//Hãy in 3 số ấy ra màn hình theo thứ tự tăng dần mà chỉ dùng tối đa "1" biến phụ


//khong sai ham
/*
int main()
{
	double a, b, c, temp;

	printf("Nhap canh a: ");
	scanf_s("%lf", &a);
	printf("Nhap canh b: ");
	scanf_s("%lf", &b);
	printf("Nhap canh c: ");
	scanf_s("%lf", &c);

	if(a > b)	
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("Thu tu tang dan cua 3 so la %.4lf, %.4lf va %.4lf.", a, b, c);

	_getch();
	return 0;
}
*/

//sai ham
void SapXep(double a, double b, double c);

int main()
{
	double a, b, c;

	printf("Nhap canh a: ");
	scanf_s("%lf", &a);
	printf("Nhap canh b: ");
	scanf_s("%lf", &b);
	printf("Nhap canh c: ");
	scanf_s("%lf", &c);

	SapXep(a, b, c);

	_getch();
	return 0;
}

void SapXep(double a, double b, double c)
{
	double temp;

	if(a > b)	
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("Thu tu tang dan cua 3 so la %.4lf, %.4lf va %.4lf.", a, b, c);
}