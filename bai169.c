#include<stdio.h>
#include<conio.h>
#include<math.h>


//(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm số chẵn lớn
//nhất nhỏ hơn mọi giá trị lẻ có trong mảng


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
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);
	
	//Gán phan tu mang
	for(int i = 0; i < N; i++)
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
	int le_min = 0, chanlonnhat = -1;

	//tim so le dau tien
	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2) != 0)
		{
			le_min = a[i];
			break;
		}
	}

	//tim so le nho nhat
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 != 0 && a[i] < le_min)
		{
			le_min = a[i];
		}
	}
	
	//tim so chan dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			chanlonnhat = a[i];
			break;
		}
	}
	//tim so chan lon nhat nho hon le_min
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			if(chanlonnhat < a[i] && chanlonnhat < le_min)
			{
				chanlonnhat = a[i];
			}
		}
	}

	if(le_min % 2 == 0)
		printf("\nKhong ton tai so le nao trong mang.");
	else 
	{
		if(chanlonnhat % 2 != 0)
			printf("\nKhong ton tai so chan nao trong mang.");
		else if(chanlonnhat > le_min)
		{
			printf("\nKhong ton tai so chan nao trong mang thoa man dieu kien.");
		}
		else
			printf("\nSo chan lon nhat nho hon moi gia tri le co trong mang la: %d.", chanlonnhat);
	}

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX];
int le_min = 0, chanlonnhat = -1;

void nhap();
void xuat();

void soledautien();
int solenhonhat();
void sochandautien();
int sochanlonnhat(); 

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	soledautien();
	int le_min = solenhonhat();
	sochandautien();
	int chanlonnhat = sochanlonnhat();

	if(le_min % 2 == 0)
		printf("\nKhong ton tai so le nao trong mang.");
	else 
	{
		if(chanlonnhat % 2 != 0)
			printf("\nKhong ton tai so chan nao trong mang.");
		else if(chanlonnhat > le_min)
		{
			printf("\nKhong ton tai so chan nao trong mang thoa man dieu kien.");
		}
		else
			printf("\nSo chan lon nhat nho hon moi gia tri le co trong mang la: %d.", chanlonnhat);
	}

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

void soledautien()
{
	int le_min = 0, chanlonnhat = -1;

	//tim so le dau tien
	for(int i = 0; i < N; i++)
	{
		if((a[i] % 2) != 0)
		{
			le_min = a[i];
			break;
		}
	}	
}

int solenhonhat()
{
	//tim so le nho nhat
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 != 0)
		{	
			if(a[i] < le_min)
				le_min = a[i];
		}
	}
	return le_min;
}

void sochandautien()
{
	//tim so chan dau tien
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			chanlonnhat = a[i];
			break;
		}
	}
}

int sochanlonnhat()
{
	//tim so chan lon nhat nho hon le_min
	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
		{
			if (chanlonnhat < a[i] && chanlonnhat < le_min)
			{
				chanlonnhat = a[i];
			}
		}
	}
	return chanlonnhat;
}
//