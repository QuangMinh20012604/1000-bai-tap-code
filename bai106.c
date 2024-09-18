#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập vào một số nguyên có ba chữ số. Hãy in ra cách đọc của nó


//khong sai ham

/*
int main()
{
	int N, chuc, dv, tram;

	do
	{
		printf("Nhap N (100-999): ");
		scanf_s("%d", &N);
		if (N < 100 || N >999)	printf("N trong khoang tu 100 den 999. Xin moi nhap lai!\n");
	} while (N < 100 || N >999);

	dv = N % 10;
	chuc = (N % 100) / 10;
	tram = N / 100;

	//printf("%4d%4d%4d", tram, chuc, dv);
	//printf("\n%3d\t", N);

	switch(tram)
	{
	case 1:
		printf("mot ");
		break; 
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
	
	printf("tram ");

	if(chuc == 0)
		printf("linh ");
	else
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
	}

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
		if(chuc == 0)
		{
			printf("nam.");
		}	
		else
		{
			printf("lam.");
		}
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

	_getch();
	return 0;
}
*/

//sai ham
void CachDoc(int tram, int chuc, int dv);
void HChuc(int chuc, int dv);
void Hdv(int chuc, int dv);
int main()
{
	int N, chuc, dv, tram;

	do
	{
		printf("Nhap N (100-999): ");
		scanf_s("%d", &N);
		if (N < 100 || N >999)	printf("N trong khoang tu 100 den 999. Xin moi nhap lai!\n");
	} while (N < 100 || N >999);

	dv = N % 10;
	chuc = (N % 100) / 10;
	tram = N / 100;

	//printf("%4d%4d%4d", tram, chuc, dv);
	//printf("\n%3d\t", N);

	CachDoc(tram, chuc, dv);

	_getch();
	return 0;
}

void CachDoc(int tram, int chuc, int dv)
{
	switch(tram)
	{
	case 1:
		printf("mot ");
		break; 
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
	
	printf("tram ");
	HChuc(chuc, dv);
}
void HChuc(int chuc, int dv)
{
	if(chuc == 0)
		printf("linh ");
	else
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
	}
	Hdv(chuc, dv);
}
void Hdv(int chuc, int dv)
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
		if(chuc == 0)
		{
			printf("nam.");
		}	
		else
		{
			printf("lam.");
		}
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



//Test nhanh tat ca
/*
int main()
{
	int chuc, dv, tram;
	for(int i = 100; i < 1000; i++)
	{
		dv = i % 10;
		chuc = (i % 100) / 10;
		tram = i / 100;

		//printf("%4d%4d%4d", tram, chuc, dv);
		printf("\n%3d\t", i);

		switch(tram)
		{
		case 1:
			printf("mot ");
			break; 
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
		
		printf("tram ");

		if(chuc == 0)
			printf("linh ");
		else
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
		}

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
			if(chuc == 0)
			{
				printf("nam.");
			}	
			else
			{
				printf("lam.");
			}
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


	_getch();
	return 0;
}
*/

