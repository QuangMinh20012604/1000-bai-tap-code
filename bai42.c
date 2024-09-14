#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k

//khong sai ham
/*
int main()
{
	int k = 1, N, S = 0;

	do
	{
		printf("\nNhap N: ");
		scanf("%d", &N);
		if(N <= 0)
		{
			printf("\nN phai > 0. Xin nhap lai !");
		}
		
	} while (N <= 0);

	/*
	for(k; k + S < N; k++)
	{	
		printf("%3d", k);
		S += k;
	}
	*
	
	
	while( k + S < N)
	{

		printf("%3d", k);
		S += k;
		k++;
	}
	

	printf("\n Gia tri nguyen duong k lon nhat ma S(k) = 1 + 2 + ...+ k < %d la: %d", N, S);
	getch();
	return 0;
}
*/

//Sai ham

void nguyenDuongK_Max(int N);

int main()
{
	int N;
	do
	{
		printf("Nhap N: ");
		scanf("%d", &N);
		if(N <= 0) 	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	nguyenDuongK_Max(N);

	getch();
	return 0;
}

void nguyenDuongK_Max(int N)
{
	int S = 0;
	int K = 0;
	for(int K_temp = 1; K + S < N; K_temp++)
	{
		S += K_temp;
		K = K_temp;
		printf("K = %d\t", K);
		printf("S = %d\n", S);
		
	}
	printf("\n Gia tri nguyen duong k lon nhat ma S(k) = 1 + 2 + ...+ k < %d la: %d", N, K);
}