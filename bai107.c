#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm tính S = n√x (n là số nguyên dương)


//khong sai ham

/*
int main()
{
	int N;
	double x, S = 0;
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	printf("Nhap x: ");
	scanf_s("%lf", &x);
	
	//n chan: thì x chi co the la so duong
	//n le: x thuoc Z
	
	if (x >= 0) S = pow(x, (1.0 / N));
    else 
    {
        if((N % 2) == 1)
        {
            
            S = -pow((-x), 1.0 / N);   
        }
        else printf("Không ton tai\n");
    }
	printf("Can bac %d cua %.4lf la %.4lf.", N, x, S);

	_getch();
	return 0;
}
*/

//sai ham

void CanBacN(double x, int N);

int main()
{
	int N;
	double x;

	printf("Nhap N: ");
	scanf_s("%d", &N);
	printf("Nhap x: ");
	scanf_s("%lf", &x);

	CanBacN(x, N);

	_getch();
	return 0;
}

void CanBacN(double x, int N)
{
	double S;

	if(x >= 0)	S = pow(x, (1.0 / N));
	else
	{
		if(N % 2 == 1)	S = -pow((-x), (1.0 / N));
		else	printf("Không ton tai\n");
    }

	printf("Can bac %d cua %.4lf la %.4lf.", N, x, S);
}
