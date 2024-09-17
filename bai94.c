#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93


//khong sai ham

/*
int main()
{
	for(int i = 1; i < 100; i += 2)
	{
		
		if((i != 5) && (i != 7) && (i != 93))
		{
			printf("%4d", i);
		}
		

		//		Sai lenh continue 
		//	* Khong khuyen khich sai *
		/*
		if((i == 5) || (i == 7) || (i == 93))	
		{
			continue;
		}
		printf("%4d", i);
		*
	}

	_getch();
	return 0;
}
*/

//sai ham
void InSoTheoYeuCau()
{
	int i = 1;
	do
	{
		if((i != 5) && (i != 7) && (i != 93))
		{
			printf("%4d", i);
		}
		i += 2;
	}while(i < 100);
}

int main()
{
	InSoTheoYeuCau();

	_getch();
	return 0;
}