#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 + 1/2 + 1/3 + … + 1/n

//Khong sai ham

/*
int main()
{
	int i = 1, N;
	float S = 0;

	printf("\nNhap N: ");
	scanf("%d", &N);

	for(i; i <= N; i++)
	{
		S = S + 1.0/i;		//muốn S hiện số thập phân thì phải viết 1 là 1.0
	}

	/*
	while(i <= N)
	{
		S = S + 1.0/i;
		i++;
	}
	*

	printf("Tong 1 + 1/2 + ... + 1/%d la: %f", N, S);

    getch();
    return 0;
}
*/

//Sai ham
float tong(int N);

int main()
{
	int N;

	printf("Nhap N: ");
	scanf("%d", &N);

	float S = tong(N);
	printf("Tong S = %f", S);

	getch();
	return 0;
}

float tong(int N)
{
	float S = 0;
	for(int i = 1; i <= N; i++)
	{
		S += 1.0/i;
	}
	return S;
}