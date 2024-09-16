#include<stdio.h>
#include<conio.h>
#include<math.h>


// Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z


//khong sai ham

/*
int main()
{
	char kytu;
	for(kytu = 'A'; kytu <= 'Z'; kytu++)
	{
		printf("%4c",kytu);
	}

	_getch();
	return 0;
}
*/

//sai ham
void InBangChuCai();

int main()
{
	InBangChuCai();

	_getch();
	return 0;
}

void InBangChuCai()
{
	char kytu = 'A';
	do
	{
		printf("%4c", kytu);
		kytu++;
	}while(kytu <= 'Z');
}