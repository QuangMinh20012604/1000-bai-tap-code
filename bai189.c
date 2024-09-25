#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê các giá trị trong mảng một chiều các số nguyên tố có chữ số
//đầu tiên là chữ số lẻ (lietketdaule).


//khong sai ham

/*
#define MAX 100

int main()
{
	int N, a[MAX];

	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if (N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	} while (N < 1 || N > MAX);

	//Gán phan tu mang
	for (int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}


	printf("\n");

	//Xu ly de
	int songuyento, count_ngto = 0, count_ngtodaule;

	//Tim so nguyen to dau tien
	for (int i = 0; i < N; i++)
	{
		count_ngto = 0;

		if (a[i] < 2)
			count_ngto++;
		else
		{
			if (a[i] == 2)
				break;
			else
			{
				count_ngto = 0;
				for (int j = 2; j < a[i]; j++)
				{
					if (a[i] % j == 0)
						count_ngto++;
				}
				if (count_ngto == 0)
				{
					break;
				}
			}
		}
	}

	if (count_ngto != 0)
		printf("\nKhong ton tai so nguyen to nao trong mang.");
	else
	{
		//in cac so nguyen to trong mang
		printf("\nCac so nguyen to co trong mang la:\n");

		for (int i = 0; i < N; i++)
		{
			count_ngto = 0;

			if (a[i] < 2)
				count_ngto++;
			else
			{
				if (a[i] == 2)
					printf("%d  ", a[i]);
				else
				{
					count_ngto = 0;
					for (int j = 2; j < a[i]; j++)
					{
						if (a[i] % j == 0)
							count_ngto++;
					}
					if (count_ngto == 0)
					{
						printf("%d  ", a[i]);
					}
				}
			}
		}

		count_ngto = 0;
		count_ngtodaule = 0;

		printf("\n\nCac so nguyen to co chu so dau tien la chu so le la:\n");
		//kiem tra chu cai dau tien cua so nguyen to 
		for (int i = 0; i < N; i++)
		{
			if (a[i] < 2)
				count_ngto++;
			else
			{
				if (a[i] == 2)
					count_ngto = 0;
				else
				{
					count_ngto = 0;
					for (int j = 2; j < a[i]; j++)
					{
						if (a[i] % j == 0)
							count_ngto++;

					}
				}
				if (count_ngto == 0)
				{
					
					int lietkedaule;
					songuyento = a[i];

					for (songuyento; songuyento != 0; songuyento /= 10)
					{
						lietkedaule = songuyento % 10;
					}

					if (lietkedaule % 2 != 0)
					{
						printf("%d  ", a[i]);
						count_ngtodaule++;

					}
				}
			}
		}
		if (count_ngtodaule == 0)
			printf("\nKhong ton tai so nguyen to nao co chu so dau tien la chu so le.");
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX];

void nhap();
void xuat();
void SoThoaManDieuKien();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien();

	_getch();
	return 0;
}

void nhap()
{
	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}

void xuat()
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void SoThoaManDieuKien()
{
	int songuyento, count_ngto = 0, count_ngtodaule;

	//Tim so nguyen to dau tien
	for (int i = 0; i < N; i++)
	{
		count_ngto = 0;

		if (a[i] < 2)
			count_ngto++;
		else
		{
			if (a[i] == 2)
				break;
			else
			{
				count_ngto = 0;
				for (int j = 2; j < a[i]; j++)
				{
					if (a[i] % j == 0)
						count_ngto++;
				}
				if (count_ngto == 0)
				{
					break;
				}
			}
		}
	}

	if (count_ngto != 0)
		printf("\nKhong ton tai so nguyen to nao trong mang.");
	else
	{
		//in cac so nguyen to trong mang
		printf("\nCac so nguyen to co trong mang la:\n");

		for (int i = 0; i < N; i++)
		{
			count_ngto = 0;

			if (a[i] < 2)
				count_ngto++;
			else
			{
				if (a[i] == 2)
					printf("%d  ", a[i]);
				else
				{
					count_ngto = 0;
					for (int j = 2; j < a[i]; j++)
					{
						if (a[i] % j == 0)
							count_ngto++;
					}
					if (count_ngto == 0)
					{
						printf("%d  ", a[i]);
					}
				}
			}
		}

		count_ngto = 0;
		count_ngtodaule = 0;

		printf("\n\nCac so nguyen to co chu so dau tien la chu so le la:\n");
		//kiem tra chu cai dau tien cua so nguyen to 
		for (int i = 0; i < N; i++)
		{
			if (a[i] < 2)
				count_ngto++;
			else
			{
				if (a[i] == 2)
					count_ngto = 0;
				else
				{
					count_ngto = 0;
					for (int j = 2; j < a[i]; j++)
					{
						if (a[i] % j == 0)
							count_ngto++;

					}
				}
				if (count_ngto == 0)
				{
					
					int lietkedaule;
					songuyento = a[i];

					for (songuyento; songuyento != 0; songuyento /= 10)
					{
						lietkedaule = songuyento % 10;
					}

					if (lietkedaule % 2 != 0)
					{
						printf("%d  ", a[i]);
						count_ngtodaule++;

					}
				}
			}
		}
		if (count_ngtodaule == 0)
			printf("\nKhong ton tai so nguyen to nao co chu so dau tien la chu so le.");
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int &N);
void xuat(int a[], int N);
void SoThoaManDieuKien(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	SoThoaManDieuKien(a, N);

	_getch();
	return 0;
}

void nhap(int a[], int &N)
{
	//So phan tu mang
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}

void xuat(int a[], int N)
{
	//In mang
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
	}
}
void SoThoaManDieuKien(int a[], int N)
{
	int songuyento, count_ngto = 0, count_ngtodaule;

	//Tim so nguyen to dau tien
	for (int i = 0; i < N; i++)
	{
		count_ngto = 0;

		if (a[i] < 2)
			count_ngto++;
		else
		{
			if (a[i] == 2)
				break;
			else
			{
				count_ngto = 0;
				for (int j = 2; j < a[i]; j++)
				{
					if (a[i] % j == 0)
						count_ngto++;
				}
				if (count_ngto == 0)
				{
					break;
				}
			}
		}
	}

	if (count_ngto != 0)
		printf("\nKhong ton tai so nguyen to nao trong mang.");
	else
	{
		//in cac so nguyen to trong mang
		printf("\nCac so nguyen to co trong mang la:\n");

		for (int i = 0; i < N; i++)
		{
			count_ngto = 0;

			if (a[i] < 2)
				count_ngto++;
			else
			{
				if (a[i] == 2)
					printf("%d  ", a[i]);
				else
				{
					count_ngto = 0;
					for (int j = 2; j < a[i]; j++)
					{
						if (a[i] % j == 0)
							count_ngto++;
					}
					if (count_ngto == 0)
					{
						printf("%d  ", a[i]);
					}
				}
			}
		}

		count_ngto = 0;
		count_ngtodaule = 0;

		printf("\n\nCac so nguyen to co chu so dau tien la chu so le la:\n");
		//kiem tra chu cai dau tien cua so nguyen to 
		for (int i = 0; i < N; i++)
		{
			if (a[i] < 2)
				count_ngto++;
			else
			{
				if (a[i] == 2)
					count_ngto = 0;
				else
				{
					count_ngto = 0;
					for (int j = 2; j < a[i]; j++)
					{
						if (a[i] % j == 0)
							count_ngto++;

					}
				}
				if (count_ngto == 0)
				{
					
					int lietkedaule;
					songuyento = a[i];

					for (songuyento; songuyento != 0; songuyento /= 10)
					{
						lietkedaule = songuyento % 10;
					}

					if (lietkedaule % 2 != 0)
					{
						printf("%d  ", a[i]);
						count_ngtodaule++;

					}
				}
			}
		}
		if (count_ngtodaule == 0)
			printf("\nKhong ton tai so nguyen to nao co chu so dau tien la chu so le.");
	}
}
*/