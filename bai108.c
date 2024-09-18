#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm tính S = x^y

//Giả sử x là so thực, y là số nguyên

//khong sai ham

/*
int main()
{
	int y;
	double x, S = 1;

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap y: ");
	scanf_s("%d", &y);

	if(y < 0)
	{
		int y_temp = -y;
		for(int i = 1; i <= y_temp; i++)
		{
			S *= 1.0 / x;
		}
	}
	else
	{
		for(int i = 1; i <= y; i++)
		{
			S *= x;
		}
	}

	printf("%.4lf mu %d la %.4lf.", x, y, S);

	_getch();
	return 0;
}
*/

//sai ham
void MuYcuaX(double x, int y);

int main()
{
	int y;
	double x;

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	printf("Nhap y: ");
	scanf_s("%d", &y);

	MuYcuaX(x, y);

	_getch();
	return 0;
}

void MuYcuaX(double x, int y)
{
	double S = 1;

	if(y < 0)
	{
		int y_temp = -y;
		for(int i = 1; i <= y_temp; i++)
		{
			S *= 1.0 / x;
		}
	}
	else
	{
		for(int i = 1; i <= y; i++)
		{
			S *= x;
		}
	}

	printf("%.4lf mu %d la %.4lf.", x, y, S);
}