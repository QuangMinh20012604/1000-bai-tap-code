#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập vào hai số thực. Kiểm tra xem chúng có cùng dấu hay không


//khong sai ham

/*
int main()
{
	double a,b;

	printf("Nhap a:  ");
	scanf("%lf", &a);
	printf("Nhap b:  ");
	scanf("%lf", &b);

	if(a * b > 0)	printf("Hai so %.5lf va %.5lf cung dau.", a, b);
	else printf("Hai so %.5lf va %.5lf trai dau.", a, b);

	_getch();
	return 0;
}
*/

//sai ham
void KiemtraCungDau(double a, double b);

int main()
{
	double a,b;

	printf("Nhap a:  ");
	scanf("%lf", &a);
	printf("Nhap b:  ");
	scanf("%lf", &b);

	KiemtraCungDau(a, b);

	_getch();
	return 0;
}

void KiemtraCungDau(double a, double b)
{
	if(a * b > 0)	printf("Hai so %.5lf va %.5lf cung dau.", a, b);
	else printf("Hai so %.5lf va %.5lf trai dau.", a, b);
}