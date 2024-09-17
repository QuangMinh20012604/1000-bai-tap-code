#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình kiểm tra một số có phải số nguyên tố hay không.


//khong sai ham

/*
int main()
{
	int N, count = 0;	//count = 0 : true - count = 1 : false
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);


	if (N < 2)
	{
		printf("So %d khong phai la so nguyen to.", N);
	}
	else if(N == 2)
	{
		printf("So %d la so nguyen to.", N);
	}
	else
	{
		for(int i = 2; i < N; i++)
		{
			if (N % i == 0)
			{
				count = 1;
				break;
			}
		}

		if(count != 0)	printf("So %d khong phai la so nguyen to.", N);
		else printf("So %d la so nguyen to.", N);
	}	

	_getch();
	return 0;
}
*/

//sai ham
/*
void KiemtraSoNguyenTo(int N);

int main()
{
	int N; 
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	KiemtraSoNguyenTo(N);

	_getch();
	return 0;
}

void KiemtraSoNguyenTo(int N)
{
	int i = 2, count = 0;	//count = 0 : true - count = 1 : false
	if(N > 2)
	{
		do
		{
			if(N % i == 0)	
			{
				count = 1;
				break;
			}
			i++;
		}while(i < N);
		if(count == 0)	printf("So %d la so nguyen to.", N);
		else printf("So %d khong phai la so nguyen to.", N);
	}
	else if(N == 2)
	{
		printf("So %d la so nguyen to.", N);
	}
	else 
	{
		printf("So %d khong phai la so nguyen to.", N);
	}
}
*/

/////////////////////////////////////////////////////////////////////////////////////

//Tính tổng các số nguyên tố nhỏ hơn N (N nguyên dương)

//khong sai ham


/**
int main()
{
	int N, S = 2;
	int count = 0; //count = 0 : true - count = 1 : false
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	if(N < 2)	S = 0;
	else if(N == 2)	S = 2;
	else
	{
		for(int i = 3; i <= N; i++)
		{
			if( i != N)
			{
				count = 0;

				for(int j = 2; j < i; j++)
				{
					if(i % j == 0)	
					{
						count++;
						break;
					}
				}
				if(count == 0 )	
				{
					S += i;
					printf("%4d", i);
				}
			}
		}
	}
	printf("\nTong S = %d.", S);

	_getch();
	return 0;
}
*/

//Sai ham

void TongCacSoNguyenTo(int N);

int main()
{
	int N; 
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
		if(N <= 0)	printf("N phai lon hon 0. Xin moi nhap lai!!!\n");
	}while(N <= 0);

	TongCacSoNguyenTo(N);

	_getch();
	return 0;
}

void TongCacSoNguyenTo(int N)
{
	int S = 2, i = 3, j = 2, count;	//count = 0 : true - count != 0 : false
	if(N > 2)
	{
		do
		{
			if(i != N)
			{
				count = 0;
				j = 2;
				do
				{
					if(i % j == 0)	
					{
						count++;
					}
					j++;
				}while(j < i);	//Sau khi chạy hết vòng do while thì j = i, khi này muốn chạy vòng mới thì ta cần đặt j lại từ đầu 

				if(count == 0)	
				{
					S += i;
					printf("%4d", i);
				}
			}

			i++;
		}while(i <= N);
	}
	else if(N == 2)
	{
		printf("So %d la so nguyen to.", N);
	}
	else 
	{
		printf("So %d khong phai la so nguyen to.", N);
	}
	printf("\nTong S = %d.", S);
}