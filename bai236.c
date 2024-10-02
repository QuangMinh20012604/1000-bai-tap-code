#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//(*) Cho hai mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong
// mảng b (demsolan)



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
	int dem, demsolan = 0;
	
	for (int i = 0; i < Na; i++)
	{
		dem = 0;

		for (int j = 0; j < Nb; j++)
		{
			if (a[i] == b[j])
			{
				dem++;
				demsolan++;
			}
		}
		printf("Gia tri a[%d] = %d xuat hien %d lan o mang b.\n", i, a[i], dem);
	}

	printf("\nSo lan xuat hien cua mang a trong mang b la: %d.", demsolan);

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
	int dem, demsolan = 0;
	
	for (int i = 0; i < Na; i++)
	{
		dem = 0;

		for (int j = 0; j < Nb; j++)
		{
			if (a[i] == b[j])
			{
				dem++;
				demsolan++;
			}
		}
		printf("Gia tri a[%d] = %d xuat hien %d lan o mang b.\n", i, a[i], dem);
	}

	printf("\nSo lan xuat hien cua mang a trong mang b la: %d.", demsolan);
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

void Xuly(int a[], int b[], int Na, int Nb)
{
	int dem, demsolan = 0;
	
	for (int i = 0; i < Na; i++)
	{
		dem = 0;

		for (int j = 0; j < Nb; j++)
		{
			if (a[i] == b[j])
			{
				dem++;
				demsolan++;
			}
		}
		printf("Gia tri a[%d] = %d xuat hien %d lan o mang b.\n", i, a[i], dem);
	}

	printf("\nSo lan xuat hien cua mang a trong mang b la: %d.", demsolan);
}
*/
