#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập một số nguyên có hai chữ số. Hãy in ra cách đọc của số nguyên này.


//khong sai ham

/*
int main()
{
	int N, chuc, dv;
	
	do
	{
		printf("Nhap N (10-99): ");
		scanf_s("%d", &N);
		if(N < 10 || N >99)	printf("N trong khoang tu 10 den 99. Xin moi nhap lai!\n");
	}while(N < 10 || N >99);

	dv = N % 10;
	chuc = (N / 10) % 10;


	if(chuc == 2)
		printf("hai ");		
	else if(chuc == 3)
		printf("ba ");
	else if(chuc == 4)
		printf("bon ");
	else if(chuc == 5)
		printf("nam ");
	else if(chuc == 6)
		printf("sau ");
	else if(chuc == 7)
		printf("bay ");
	else if(chuc == 8)
		printf("tam ");
	else if(chuc == 9)
		printf("chin ");


	printf("muoi ");	//Các số có hàng chục bằng 1 thì đều viết là mười và giống các viết của mươi khi không dấu, nên ta sẽ để nó vô trường hợp này
	if(dv == 1)
		printf("mot.");	// vì một và mốt khi viết không dấu đều là mot
	else if(dv == 2)
		printf("hai.");		
	else if(dv == 3)
		printf("ba.");
	else if(dv == 4)
		printf("bon.");
	else if(dv == 5)
		printf("lam.");
	else if(dv == 6)
		printf("sau.");
	else if(dv == 7)
		printf("bay.");
	else if(dv == 8)
		printf("tam.");
	else if(dv == 9)
		printf("chin.");

	_getch();
	return 0;
}
*/

//sai ham

//
void Hdvi(int dv);
void CachDoc(int chuc, int dv);

int main()
{
	int N, chuc, dv;
	
	do
	{
		printf("Nhap N (10-99): ");
		scanf_s("%d", &N);
		if(N < 10 || N >99)	printf("N trong khoang tu 10 den 99. Xin moi nhap lai!\n");
	}while(N < 10 || N >99);

	dv = N % 10;
	chuc = (N / 10) % 10;

	CachDoc(chuc, dv);

	_getch();
	return 0;
}


void Hdvi(int dv)
{
	switch(dv)
	{
	case 1:
		printf("mot.");
		break;
	case 2:
		printf("hai.");
		break;
	case 3:
		printf("ba.");
		break;
	case 4:
		printf("bon.");
		break;
	case 5:
		printf("lam.");
		break;
	case 6:
		printf("sau.");
		break;
	case 7:
		printf("bay.");
		break;
	case 8:
		printf("tam.");
		break;
	case 9:
		printf("chin.");
		break;	
	}
}

void CachDoc(int chuc, int dv)
{
	switch(chuc)
	{
	case 2:
		printf("hai ");
		break;
	case 3:
		printf("ba ");
		break;
	case 4:
		printf("bon ");
		break;
	case 5:
		printf("nam ");
		break;
	case 6:
		printf("sau ");
		break;
	case 7:
		printf("bay ");
		break;
	case 8:
		printf("tam ");
		break;
	case 9:
		printf("chin ");
		break;	
	}

	printf("muoi ");	//Các số có hàng chục bằng 1 thì đều viết là mười và giống các viết của mươi khi không dấu, nên ta sẽ để nó vô trường hợp này
	
	Hdvi(dv);
}
//
