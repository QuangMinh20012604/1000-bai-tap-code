#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cần có tổng 200.000đ từ 3 loại giấy bạc 1000đ, 2000đ, và 5000đ. 
//Lập chương tình để tìm tất cả các phương án có thể.

//200000đ thì cần 200000 / 1000 = 200 (tờ) 1000đ
//200000đ thì cần 200000 / 2000 = 100 (tờ) 2000đ
//200000đ thì cần 200000 / 5000 = 40 (tờ) 5000đ

//khong sai ham

/*
int main()
{
	int count = 0;
	for (int i = 0; i <= 40; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			for (int k = 0; k <= 200; k++)
			{
				if ((1000 * k + 2000 * j + 5000 * i) == 200000)
				{
					count++;
					printf("\n%-4d. Can %3d to 1.000d, %3d to 2.000d va %2d to 5.000d de duoc 200.000d.", count, k, j, i);
				}
			}
		}
	}

	_getch();
	return 0;
}
*/

//sai ham

void CanSoTo();

int main()
{
	CanSoTo();

	_getch();
	return 0;
}

void CanSoTo()
{
	int count = 0;
	for (int i = 0; i <= 40; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			for (int k = 0; k <= 200; k++)
			{
				if ((1000 * k + 2000 * j + 5000 * i) == 200000)
				{
					count++;
					printf("\n%-4d. Can %3d to 1.000d, %3d to 2.000d va %2d to 5.000d de duoc 200.000d.", count, k, j, i);
				}
			}
		}
	}
}
