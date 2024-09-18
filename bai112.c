#include<stdio.h>
#include<conio.h>
#include<math.h>


//Lập chương trình in ra hình chữ nhật có kích thước m x n.
//1. Hình chữ nhật đặc
//Ví dụ: Hình chữ nhật có kích thước 7 x 4
//* * * * * * *
//* * * * * * *
//* * * * * * *
//* * * * * * *
//b) Hình chữ nhật rỗng
//Ví dụ: Hình chữ nhật có kích thước 7 x 4
//* * * * * * *
//*           *
//*           *
//* * * * * * *

//khong sai ham

/*
int main()
{
	int a, b, choose = 0;
	do
    {

        printf("\n1. Hinh chu nhat dac.");
        printf("\n2. Hinh chu nhat rong.");
        printf("\n0. Thoat");

        printf("\n\nMoi nhap lua chon(0-2): ");
        scanf_s("%d", &choose);

        switch(choose)
        {
        case 1: 
        	do
        	{
	        	printf("Nhap a: ");
	        	scanf_s("%d", &a);
	        	if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(a <= 0);
	        do
        	{
	        	printf("Nhap b: ");
	        	scanf_s("%d", &b);
	        	if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(b <= 0);

	        printf("\n");

        	for(int i = 0; i < a; i++)
        	{
        		for(int j = 0; j < b; j++)
        		{
        			printf("* ");
        		}
        		printf("\n");
        	}

        	break;
        case 2: 
        	do
        	{
	        	printf("Nhap a: ");
	        	scanf_s("%d", &a);
	        	if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(a <= 0);
	        do
        	{
	        	printf("Nhap b: ");
	        	scanf_s("%d", &b);
	        	if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(b <= 0);

	        printf("\n");
        	
        	for(int i = 0; i < a; i++)
        	{
        		for(int j = 0; j < b; j++)
        		{
        			if(j == 0 || j == (b - 1) || i == 0 || i == (a-1))
	        			printf("* ");
	        		else
	        			printf("  ");
        		}
        		printf("\n");
        	}

        	break;
        case 0:
        	printf("\n\nBan da Thoat.\n\n");
        	return 0;
        default:
            printf("  !!!Ban phai nhap gia tri tu 0 den 5!!!!\n");
            printf("  ---------------------------------------\n");

            break;
        }
    }while(choose != 0);

    _getch();
    return 0;

}
*/

//sai ham

void cau_a(int a, int b);
void cau_b(int a, int b);

int main()
{
	int a, b, choose = 0;
	do
    {

        printf("\n1. Hinh chu nhat dac.");
        printf("\n2. Hinh chu nhat rong.");
        printf("\n0. Thoat");

        printf("\n\nMoi nhap lua chon(0-2): ");
        scanf_s("%d", &choose);

        switch(choose)
        {
        case 1: 
        	do
        	{
	        	printf("Nhap a: ");
	        	scanf_s("%d", &a);
	        	if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(a <= 0);
	        do
        	{
	        	printf("Nhap b: ");
	        	scanf_s("%d", &b);
	        	if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(b <= 0);

	        printf("\n");

        	cau_a(a, b);

        	break;
        case 2: 
        	do
        	{
	        	printf("Nhap a: ");
	        	scanf_s("%d", &a);
	        	if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(a <= 0);
	        do
        	{
	        	printf("Nhap b: ");
	        	scanf_s("%d", &b);
	        	if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(b <= 0);

	        printf("\n");
        	
        	cau_b(a, b);

        	break;
        case 0:
        	printf("\n\nBan da Thoat.\n\n");
        	return 0;
        default:
            printf("  !!!Ban phai nhap gia tri tu 0 den 5!!!!\n");
            printf("  ---------------------------------------\n");

            break;
        }
    }while(choose != 0);
    _getch();
    return 0;
}

void cau_a(int a, int b)
{
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void cau_b(int a, int b)
{
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			if(j == 0 || j == (b - 1) || i == 0 || i == (a-1))
    			printf("* ");
    		else
    			printf("  ");
		}
		printf("\n");
	}
}