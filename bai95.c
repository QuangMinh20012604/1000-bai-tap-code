#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó


//khong sai ham

/*
int main()
{
	double a, b, c;

	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);

	if(a < 0)	a = -a;
	if(b < 0)	b = -b;
	if(c < 0)	c = -c;

	printf("a = %lf\n", a);
	printf("b = %lf\n", b);
	printf("c = %lf\n", c);

	_getch();
	return 0;
}
*/

//sai ham
void TriTuyetDoi(double x);

int main()
{
	double a, b, c;

	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);

	
	TriTuyetDoi(a);
	TriTuyetDoi(b);
	TriTuyetDoi(c);

	_getch();
	return 0;
}

void TriTuyetDoi(double x)
{
	if(x < 0)	x = -x;
	printf("x = %lf\n", x);
}