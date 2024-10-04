#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy trộn hai mảng tăng dần lại thành 1 mảng được sắp thứ tự tăng dần
//(tronmang)


//khong sai ham

/*
#define MAX 100

int main()
{
	int Na, Nb, a[MAX], b[MAX], c[2*MAX];

	//So phan tu mang a
	printf("\nMang a:");

	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Na);
		if (Na < 1 || Na > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Na < 1 || Na > MAX);

	//Gán phan tu mang a
	for (int i = 0; i < Na; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//In mang a
	printf("\n");
	for (int i = 0; i < Na; i++)
	{
		printf("%d  ", a[i]);
	}

	//So phan tu mang b
	printf("\n\nMang b:");
	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Nb);
		if (Nb < 1 || Nb > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Nb < 1 || Nb > MAX);

	//Gán phan tu mang b
	for (int i = 0; i < Nb; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &b[i]);
	}

	//In mang b
	printf("\n");
	for (int i = 0; i < Nb; i++)
	{
		printf("%d  ", b[i]);
	}

	printf("\n\n");

	//Xu ly de
	
	//gop 2 mang a va b vao mang c
	for (int i = 0; i < Na; i++)
	{
		c[i] = a[i];
	}
	
	for (int i = Na; i < Na + Nb; i++)
	{
		c[i] = b[i - Na];
	}
	
	//in mang c
	printf("\nMang c (mang gop a, b):\n");
	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}

	//Sap xep mang c tang dan

	for(int i = 0; i < (Na + Nb - 1); i++)
	{
		for(int j = i + 1; j < Na + Nb; j++)
		{
			if(c[i] > c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}

	printf("\n\nMang gop sau khi sap xep:\n");

	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int Na, Nb, a[MAX], b[MAX], c[2*MAX];

void nhap_xuat();
void Xuly();

int main()
{
	nhap_xuat();
	
	printf("\n\n");

	//Xu ly de
	Xuly();

	_getch();
	return 0;
}

void nhap_xuat()
{
	//So phan tu mang a
	printf("\nMang a:");

	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Na);
		if (Na < 1 || Na > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Na < 1 || Na > MAX);

	//Gán phan tu mang a
	for (int i = 0; i < Na; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//In mang a
	printf("\n");
	for (int i = 0; i < Na; i++)
	{
		printf("%d  ", a[i]);
	}

	//So phan tu mang b
	printf("\n\nMang b:");
	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Nb);
		if (Nb < 1 || Nb > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Nb < 1 || Nb > MAX);

	//Gán phan tu mang b
	for (int i = 0; i < Nb; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &b[i]);
	}

	//In mang b
	printf("\n");
	for (int i = 0; i < Nb; i++)
	{
		printf("%d  ", b[i]);
	}
}

void Xuly()
{
	//gop 2 mang a va b vao mang c
	
	for (int i = 0; i < Na; i++)
	{
		c[i] = a[i];
	}
	
	for (int i = Na; i < Na + Nb; i++)
	{
		c[i] = b[i - Na];
	}
	
	//in mang c
	printf("\nMang c (mang gop a, b):\n");
	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}

	//Sap xep mang c tang dan

	for(int i = 0; i < (Na + Nb - 1); i++)
	{
		for(int j = i + 1; j < Na + Nb; j++)
		{
			if(c[i] > c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}

	printf("\n\nMang gop sau khi sap xep:\n");

	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap_xuat(int a[], int b[], int &Na, int &Nb);
void Xuly(int a[], int b[], int c[], int Na, int Nb);

int main()
{
	int Na, Nb, a[MAX], b[MAX], c[2*MAX];

	nhap_xuat(a, b, Na, Nb);
	
	printf("\n\n");

	//Xu ly de
	Xuly(a, b, c, Na, Nb);

	_getch();
	return 0;
}

void nhap_xuat(int a[], int b[], int &Na, int &Nb)
{
	//So phan tu mang a
	printf("\nMang a:");

	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Na);
		if (Na < 1 || Na > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Na < 1 || Na > MAX);

	//Gán phan tu mang a
	for (int i = 0; i < Na; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//In mang a
	printf("\n");
	for (int i = 0; i < Na; i++)
	{
		printf("%d  ", a[i]);
	}

	//So phan tu mang b
	printf("\n\nMang b:");
	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Nb);
		if (Nb < 1 || Nb > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Nb < 1 || Nb > MAX);

	//Gán phan tu mang b
	for (int i = 0; i < Nb; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &b[i]);
	}

	//In mang b
	printf("\n");
	for (int i = 0; i < Nb; i++)
	{
		printf("%d  ", b[i]);
	}
}

void Xuly(int a[], int b[], int c[], int Na, int Nb)
{
	//gop 2 mang a va b vao mang c
	for (int i = 0; i < Na; i++)
	{
		c[i] = a[i];
	}
	
	for (int i = Na; i < Na + Nb; i++)
	{
		c[i] = b[i - Na];
	}
	
	//in mang c
	printf("\nMang c (mang gop a, b):\n");
	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}

	//Sap xep mang c tang dan

	for(int i = 0; i < (Na + Nb - 1); i++)
	{
		for(int j = i + 1; j < Na + Nb; j++)
		{
			if(c[i] > c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}

	printf("\n\nMang gop sau khi sap xep:\n");

	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}
}
*/
