#include<stdio.h>
#include<conio.h>
#include<math.h>


//Nhập vào tháng của một năm. Cho biết tháng thuộc quí mấy trong năm


//khong sai ham

/*
int main()
{
	int Month;

	printf("\nNhap mot thang tu thang 1 den thang 12: ");
	scanf_s("%d", &Month);

	if(Month == 1 || Month == 2|| Month == 3)
		printf("\nThang %d thuoc quy I.", Month);
	else if(Month == 4 || Month == 5|| Month == 6)
		printf("\nThang %d thuoc quy II.", Month);
	else if(Month == 7 || Month == 8|| Month == 9)
		printf("\nThang %d thuoc quy III.", Month);
	else if(Month == 10 || Month == 11|| Month == 12)
		printf("\nThang %d thuoc quy IV.", Month);

	_getch();
	return 0;
}
*/

//sai ham
void Quy(int Month);

int main()
{
	int Month;

	printf("\nNhap mot thang tu thang 1 den thang 12: ");
	scanf_s("%d", &Month);

	Quy(Month);

	_getch();
	return 0;
}

void Quy(int Month)
{
	switch(Month)
	{
	case 1:
	case 2:
	case 3:
		printf("\nThang %d thuoc quy I.", Month);
		break;
	case 4:
	case 5:
	case 6:
		printf("\nThang %d thuoc quy II.", Month);
		break;
	case 7:
	case 8:
	case 9:
		printf("\nThang %d thuoc quy III.", Month);
		break;
	case 10:
	case 11:
	case 12:
		printf("\nThang %d thuoc quy IV.", Month);
		break;
	}
}