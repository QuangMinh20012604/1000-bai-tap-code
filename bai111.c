#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình in ra tam giác cân có độ cao h.
//a. Tam giác cân đặc nằm giữa màn hình.
//Ví dụ với h = 4
//      *
//    * * *
//  * * * * *
//* * * * * * *
//b. Tam giác cân rỗng nằm giữa màn hình.
//Ví dụ với h = 4
//      *
//    *   *
//  *       *
//* * * * * * *
//c. Tam giác vuông cân đặc
//Ví dụ với h = 4
//* 
//* *
//* * *
//* * * *
//d. Tam giác vuông cân rỗng
//Ví dụ với h = 5
//* 
//* *
//*   *
//*     *
//* * * * *

//khong sai ham

/*
int main()
{
	int h, choose = 0;
	do
    {

        printf("\n1. Tam giac can dac nam giua man hinh.");
        printf("\n2. Tam giac can rong nam giua man hinh");
        printf("\n3. Tam giac vuong can dac.");
        printf("\n4. Tam giac vuong can rong.");
        printf("\n0. Thoat");

        printf("\n\nMoi nhap lua chon(0-4): ");
        scanf_s("%d", &choose);

        switch(choose)
        {
        case 1: 
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

        	for(int i = 1; i <= h; i++)
        	{
        		for(int j = 1; j <= (h - i); j++)
        		{
        			printf("  ");
        		}
        		for(int j = 1; j <=  (2 * i - 1); j++)
        		{
        			printf("* ");
        		}
        		printf("\n");
        	}

        	break;
        case 2:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

        	for(int i = 1; i <= h; i++)
        	{
        		for(int j = 1; j <= (h - i); j++)
        		{
        			printf("  ");
        		}
        		for(int j = 1; j <=  (2 * i - 1); j++)
        		{
        			//j = 1 || j == (2 * i - 1): để in các cạnh bên; i == h: để in đáy tam giác
        			if(j == 1 || j == (2 * i - 1) || i == h)	
        				printf("* ");
        			else	
        				printf("  ");	
        		}
        		printf("\n");
        	}
        	break;
        case 3:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        for(int i = 1; i <= h; i++)
	        {
	        	for(int j = 1; j <= i; j++)
	        	{
	        		printf("* ");
	        	}
	        	printf("\n");
	        }
        	break;
        case 4:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        for(int i = 1; i <= h; i++)
	        {
	        	for(int j = 1; j <= i; j++)
	        	{
	        		if(j == 1 || j == i || i == h)
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
void cau_a(int h);
void cau_b(int h);
void cau_c(int h);
void cau_d(int h);
void cau_e(int h);
void cau_f(int h);
void cau_g(int h);
void cau_h(int h);
void cau_i(int h);
void cau_k(int h);

int main()
{
	int h, choose = 0;
	do
    {

        printf("\n1. Tam giac can dac nam giua man hinh.");
        printf("\n2. Tam giac can rong nam giua man hinh.");
        printf("\n3. Tam giac vuong can dac (ben trai phia duoi man hinh).");
        printf("\n4. Tam giac vuong can rong (ben trai phia duoi man hinh).");
        //them cau 5 - 6 - 7 - 8 - 9 - 10
        printf("\n5. Tam giac vuong can dac (ben phai phia duoi man hinh).");
        printf("\n6. Tam giac vuong can rong (ben phai phia duoi man hinh).");
        printf("\n7. Tam giac vuong can dac (ben trai phia tren man hinh).");
        printf("\n8. Tam giac vuong can rong (ben trai phia tren man hinh).");
        printf("\n9. Tam giac vuong can dac (ben phai phia duoi man hinh).");
        printf("\n10. Tam giac vuong can rong (ben phai phia duoi man hinh).");
        printf("\n0. Thoat.");

        printf("\n\nMoi nhap lua chon(0 - 10): ");
        scanf_s("%d", &choose);

        switch(choose)
        {
        case 1: 
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

        	cau_a(h);

        	break;
        case 2:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

        	cau_b(h);

        	break;
        case 3:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_c(h);

        	break;
        case 4:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_d(h);

        	break;
        case 5:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_e(h);

        	break;
        case 6:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_f(h);

        	break;
        case 7:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_g(h);

        	break;
        case 8:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_h(h);

        	break;
        case 9:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_i(h);

        	break;
        case 10:
        	do
        	{
	        	printf("Nhap h: ");
	        	scanf_s("%d", &h);
	        	if(h <= 0)	printf("h phai lon hon 0. Xin moi nhap lai!!\n");
	        }while(h <= 0);

	        cau_k(h);

        	break;
        case 0:
        	printf("\n\nBan da Thoat.\n\n");
        	return 0;
        default:
            printf("  !!!Ban phai nhap gia tri tu 0 den 10!!!!\n");
            printf("  ---------------------------------------\n");

            break;
        }
    }while(choose != 0);

    _getch();
    return 0;
}

void cau_a(int h)
{
	for(int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= (h - i); j++)
		{
			printf("  ");
		}
		for(int j = 1; j <=  (2 * i - 1); j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void cau_b(int h)
{
	for(int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= (h - i); j++)
		{
			printf("  ");
		}
		for(int j = 1; j <=  (2 * i - 1); j++)
		{
			//j = 1 || j == (2 * i - 1): để in các cạnh bên; i == h: để in đáy tam giác
			if(j == 1 || j == (2 * i - 1) || i == h)	
				printf("* ");
			else	
				printf("  ");	
		}
		printf("\n");
	}
}

void cau_c(int h)
{
	for(int i = 1; i <= h; i++)
    {
    	for(int j = 1; j <= i; j++)
    	{
    		printf("* ");
    	}
    	printf("\n");
    }
}

void cau_d(int h)
{
	for(int i = 1; i <= h; i++)
    {
    	for(int j = 1; j <= i; j++)
    	{
    		if(j == 1 || j == i || i == h)
    			printf("* ");
    		else
    			printf("  ");
    	}
    	printf("\n");
    }
}

void cau_e(int h)
{
	for(int i = 1; i <= h; i++)
    {
    	for(int j = 1; j <= (h - i); j++)
    	{
    		printf("  ");
    	}
    	for (int j = 1; j <= i; j++)
    	{
    		printf(" *");
    	}
    	printf("\n");
    }
}

void cau_f(int h)
{
	for(int i = 1; i <= h; i++)
    {
    	for(int j = 1; j <= (h - i); j++)
    	{
    		printf("  ");
    	}
    	for (int j = 1; j <= i; j++)
    	{
    		if(j == 1 || j == i || i == h)
    			printf(" *");
    		else
    			printf("  ");
    	}
    	printf("\n");
    }
}

void cau_g(int h)
{
	for(int i = 0; i < h; i++)
    {
    	for(int j = 0; j < (h - i); j++)
    	{
    		printf("* ");
    	}
    	for (int j = 0; j <= i; j++)
    	{
    		printf("  ");
    	}
    	printf("\n");
    }
}

void cau_h(int h)
{
	for(int i = 0; i < h; i++)
    {
    	for(int j = 0; j < (h - i); j++)
    	{
    		if(j == 0 || j == (h - i - 1) || i == 0)
 	   			printf("* ");
 	   		else
 	   			printf("  ");
    	}
    	for (int j = 0; j <= i; j++)
    	{
    		printf("  ");
    	}
    	printf("\n");
    }
}

void cau_i(int h)
{
	for(int i = 0; i < h; i++)
    {
    	for (int j = 0; j < i; j++)
    	{
    		printf("  ");
    	}
    	for(int j = 0; j < (h - i); j++)
    	{
    		printf("* ");
    	}
    	printf("\n");
    }
}
void cau_k(int h)
{
	for(int i = 0; i < h; i++)
    {
    	for (int j = 0; j < i; j++)
    	{
    		printf("  ");
    	}
    	for(int j = 0; j < (h - i); j++)
    	{
    		if(j == 0 || j == (h - i -1) || i == 0)
 	   			printf("* ");
 	   		else
 	   			printf("  ");
    	}
    	printf("\n");
    }
}