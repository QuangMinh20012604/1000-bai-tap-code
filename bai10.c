#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính T(x, n) = x^n

/*
// Sử dụng hàm Pow(x,y)
int main()
{
	float x, T;
	int n;
	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("\nNhap n: ");
	scanf("%d", &n);

	T = pow(x,n);

	printf("\n%.2f^%d = %.4f", x, n, T);
	
	getch();
	
	return 0;
}
*/

// Sử dụng hàm con Power
double Power_n(float x, int n)
{
	//gán giá trị ban đầu cho T = 1
	float result = 1;

	//Sử dụng vòng lặp while với điều kiện n--
	//n sẽ giảm đến khi bằng 0 thì vòng lặp kết thúc
	while(n--)
	{
		result = result * x;
	}
	return result;
}

int main()
{
	float x, T;
	int n;
	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("\nNhap n: ");
	scanf("%d", &n);

	T = Power_n(x,n);

	printf("\n%.2f^%d = %.4f", x, n, T);
	
	getch();
	
	return 0;
}
