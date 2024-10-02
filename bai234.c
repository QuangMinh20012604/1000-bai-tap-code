#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho hai mảng số thực a, b. Đếm số lượng giá trị chỉ xuất hiện một
// trong hai mảng (demgiatri)


//khong sai ham

//
#define MAX 100

int main()
{
	int Na, Nb, a[MAX], b[MAX], c[2 * MAX];

	//So phan tu mang a
	printf("\nMang a:");

	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &Na);
		if (Na < 1 || Na > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (Na < 1 || Na > MAX);

	//Gán phan tu mang
	for (int i = 0; i < Na; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//In mang
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

	//Gán phan tu mang
	for (int i = 0; i < Nb; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &b[i]);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < Nb; i++)
	{
		printf("%d  ", b[i]);
	}

	printf("\n");

	//Xu ly de
	//Gộp 2 mảng với nhau
	for (int i = 0; i < Na; i++)
	{
		c[i] = a[i];
	}
	for (int i = Na; i < Na + Nb; i++)
	{
		c[i] = b[i - Na];
	}
	printf("\nMang c (mang gop):\n");
	for (int i = 0; i < Na + Nb; i++)
	{
		printf("%d  ", c[i]);
	}

	//Liệt kê các giá trị chỉ xuất hiện một trong hai mảng
	// => gia tri chỉ xuất hiện 1 lần trong mảng gộp
	printf("\n\nCac gia tri chi xuat hien mot trong hai mang la:\n");

	int dem, demgiatri = 0;
	
	for (int i = 0; i < Na + Nb; i++)
	{
		dem = 0;

		for (int j = 0; j < Na + Nb; j++)
		{
			if (c[i] == c[j])
			{
				if (i != j)
					dem++;
			}
		}
		if(dem == 0)
		{
			printf("%d  ", c[i]);
			demgiatri++;
		}
	}

	printf("\n\nSo luong gia tri chi xuat hien mot trong hai mang la: %d.", demgiatri);

	_getch();
	return 0;
}
