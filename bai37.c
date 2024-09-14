#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn

//Hàm căn bậc N thì viết dưới dạng hàm pow(S,1/N)

//Khong sai ham
/*
int main()
{
	int i = 3, N;
	float S;

	do
	{
		printf("\nNhap N(N >= 2): ");
        scanf("%d", &N);

        if(N < 2)
        {
            printf("\nN phai >= 2. Xin nhap lai !");
        }
	} while (N < 2);

	S = pow(2.0, 1.0/2);

	for (i; i <= N; i++)
	{
		S = pow((i + S) * 1.0, 1.0/i);
	}

	printf("\nTong S(%d) la: %f", N, S);

	getch();
	return 0;
}
*/

//sai ham

void Tong(int N);

int main()
{
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	Tong(N);

	getch();
	return 0;
}

void Tong(int N)
{
	float S = sqrt(2);
	for(int i = 3; i <= N; i++)
	{
		S = pow((i + S), 1.0/i);
	}
	printf("Tong S = %f", S);
}