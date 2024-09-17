#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì


//khong sai ham

/*
int main()
{
	int a, b, c;
	do
	{
		do
		{
			printf("Nhap canh a: ");
			scanf_s("%d", &a);
			if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(a <= 0);
		do
		{
			printf("Nhap canh b: ");
			scanf_s("%d", &b);
			if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(b <= 0);
		do
		{
			printf("Nhap canh c: ");
			scanf_s("%d", &c);
			if(c <= 0)	printf("c phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(c <= 0);

		if(a + b <= c || a + c <= b ||  b + c <= a)
	    {
	        printf("\nTam giac khong hop le. Xin kiem tra lai !!!\n\n");
	    }
	}while(a + b <= c || a + c <= b ||  b + c <= a);

	printf("\nDay la tam giac: ");
	if((a == b) && (a == c))
	{
		printf("Deu.");
	}
	else if(a == b || a == c || b == c)
	{
		printf("Can.");
	}
	else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		printf("Vuong.");
	}
	else
	{
		printf("Thuong.");
	}

	_getch();
	return 0;
	
}
*/

//sai ham
void KiemtraTamGiac(int a, int b, int c);

int main()
{

	int a, b, c;
	do
	{
		do
		{
			printf("Nhap canh a: ");
			scanf_s("%d", &a);
			if(a <= 0)	printf("a phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(a <= 0);
		do
		{
			printf("Nhap canh b: ");
			scanf_s("%d", &b);
			if(b <= 0)	printf("b phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(b <= 0);
		do
		{
			printf("Nhap canh c: ");
			scanf_s("%d", &c);
			if(c <= 0)	printf("c phai lon hon 0. Xin moi nhap lai!!!\n");
		}while(c <= 0);

		if(a + b <= c || a + c <= b ||  b + c <= a)
	    {
	        printf("\nTam giac khong hop le. Xin kiem tra lai !!!\n\n");
	    }
	}while(a + b <= c || a + c <= b ||  b + c <= a);

	KiemtraTamGiac(a, b, c);

	_getch();
	return 0;
}

void KiemtraTamGiac(int a, int b, int c)
{
	printf("\nDay la tam giac: ");
	if((a == b) && (a == c))
	{
		printf("Deu.");
	}
	else if(a == b || a == c || b == c)
	{
		printf("Can.");
	}
	else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		printf("Vuong.");
	}
	else
	{
		printf("Thuong.");
	}
}