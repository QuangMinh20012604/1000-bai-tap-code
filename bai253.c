#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b hay không?


//khong sai ham

/*
#define MAX 100

int main()
{
	int Na, Nb, a[MAX], b[MAX];

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
		if (Nb < Na || Nb > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Nb < Na || Nb > MAX);

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
	int dem = 0, flat = 0;
	
	for (int i = 0; i < Na; i++)
	{
		
		for (int j = 0; j < Nb; j++)
		{
			int checktrung = 1;
			for(int k = j - 1; k >= 0; k--)
			{
				if(b[j] == b[k])
				{
					checktrung = 0;
				}
				//printf("%d %d  %d    ", a[i], b[j], checktrung);
			}
			
			if(checktrung == 1)
			{
				if (a[i] == b[j])
				{
					dem++;
				}
			}
			//printf("\n dem: %d\n", dem);
		}
		
		if(dem == Na)
		{
			flat = 1;
		}
	}

	if(flat == 1)
		printf("\nCac phan tu mang a nam trong mang b.");
	else
		printf("\nCac phan tu mang a khong nam trong mang b.");

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int Na, Nb, a[MAX], b[MAX];

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
		if (Nb < Na || Nb > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Nb < Na || Nb > MAX);

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
	int dem = 0, flat = 0;
	
	for (int i = 0; i < Na; i++)
	{
		
		for (int j = 0; j < Nb; j++)
		{
			int checktrung = 1;
			for(int k = j - 1; k >= 0; k--)
			{
				if(b[j] == b[k])
				{
					checktrung = 0;
				}
				//printf("%d %d  %d    ", a[i], b[j], checktrung);
			}
			
			if(checktrung == 1)
			{
				if (a[i] == b[j])
				{
					dem++;
				}
			}
			//printf("\n dem: %d\n", dem);
		}
		
		if(dem == Na)
		{
			flat = 1;
		}
	}

	if(flat == 1)
		printf("\nCac phan tu mang a nam trong mang b.");
	else
		printf("\nCac phan tu mang a khong nam trong mang b.");
}
//

/*
//Test o visual
#define MAX 100

void nhap_xuat(int a[], int b[], int &Na, int &Nb);
void Xuly(int a[], int b[], int Na, int Nb);

int main()
{
	int Na, Nb, a[MAX], b[MAX];

	nhap_xuat(a, b, Na, Nb);
	
	printf("\n\n");

	//Xu ly de
	Xuly(a, b, Na, Nb);

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
		if (Nb < Na || Nb > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Nb < Na || Nb > MAX);

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

void Xuly(int a[], int b[], int Na, int Nb)
{
	int dem = 0, flat = 0;
	
	for (int i = 0; i < Na; i++)
	{
		
		for (int j = 0; j < Nb; j++)
		{
			int checktrung = 1;
			for(int k = j - 1; k >= 0; k--)
			{
				if(b[j] == b[k])
				{
					checktrung = 0;
				}
				//printf("%d %d  %d    ", a[i], b[j], checktrung);
			}
			
			if(checktrung == 1)
			{
				if (a[i] == b[j])
				{
					dem++;
				}
			}
			//printf("\n dem: %d\n", dem);
		}
		
		if(dem == Na)
		{
			flat = 1;
		}
	}

	if(flat == 1)
		printf("\nCac phan tu mang a nam trong mang b.");
	else
		printf("\nCac phan tu mang a khong nam trong mang b.");
}
*/
 