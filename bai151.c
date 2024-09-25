#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm “số nguyên tố lớn nhất” trong mảng một chiều các số nguyên
//(nguyentolonnhat). Nếu mảng không có số nguyên tố thì trả về giá trị 0


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
	int nguyentolonnhat = 0, count;

	//Tìm số nguyên tố đầu tiên
	for(int i = 0; i < N; i++)
	{
		if(a[i] >= 2)	//vi neu so nguyen tố đầu tiên > 2 thì không cần xét bằng 2 nữa. Còn nếu số nguyên tố đầu tiên = 2 thì sẽ tìm xem có số ngto nào lơn hon nó hay không
		{
			if(a[i] == 2)
			{
				nguyentolonnhat = a[i];
				break;
			}
			else
			{
				count = 0;
				for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						count++;
				}
				if(count == 0)	
				{
					nguyentolonnhat = a[i]; 
				}
			}
		}
	}

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 2)
		{
			count = 0;
			for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						count++;
				}
				if(count == 0)	
				{
					if(nguyentolonnhat < a[i])
					nguyentolonnhat = a[i]; 
				}
		
		}
	}

	if (nguyentolonnhat == 0)
		printf("\n%d", nguyentolonnhat);
	else
		printf("\nSo nguyen to lon nhat trong mang la %d.", nguyentolonnhat);

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
void SoNguyenToLonNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	SoNguyenToLonNhat();

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

void SoNguyenToLonNhat()
{
	int nguyentolonnhat = 0, count;

	//Tìm số nguyên tố đầu tiên
	for(int i = 0; i < N; i++)
	{
		if(a[i] >= 2)	//vi neu so nguyen tố đầu tiên > 2 thì không cần xét bằng 2 nữa. Còn nếu số nguyên tố đầu tiên = 2 thì sẽ tìm xem có số ngto nào lơn hon nó hay không
		{
			if(a[i] == 2)
			{
				nguyentolonnhat = a[i];
				break;
			}
			else
			{
				count = 0;
				for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						count++;
				}
				if(count == 0)	
				{
					nguyentolonnhat = a[i]; 
				}
			}
		}
	}

	for(int i = 0; i < N; i++)
	{
		if(a[i] > 2)
		{
			count = 0;
			for(int j = 2; j < a[i]; j++)
				{
					if(a[i] % j == 0)
						count++;
				}
				if(count == 0)	
				{
					if(nguyentolonnhat < a[i])
					nguyentolonnhat = a[i]; 
				}
		
		}
	}

	if (nguyentolonnhat == 0)
		printf("\n%d", nguyentolonnhat);
	else
		printf("\nSo nguyen to lon nhat trong mang la %d.", nguyentolonnhat);
}

//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

int SoNguyenToLonNhat(int a[], int N);

int main()
{
	int N, a[MAX];

	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	int nguyentolonnhat = SoNguyenToLonNhat(a, N);

	if (nguyentolonnhat == 0)
		printf("\n%d", nguyentolonnhat);
	else
		printf("\nSo nguyen to lon nhat trong mang la %d.", nguyentolonnhat);

	_getch();
	return 0;
}

void nhap(int a[], int& N)
{
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

int SoNguyenToLonNhat(int a[], int N)
{
	int nguyentolonnhat = 0, count;

	//Tìm số nguyên tố đầu tiên
	for (int i = 0; i < N; i++)
	{
		if (a[i] >= 2)	//vi neu so nguyen tố đầu tiên > 2 thì không cần xét bằng 2 nữa. Còn nếu số nguyên tố đầu tiên = 2 thì sẽ tìm xem có số ngto nào lơn hon nó hay không
		{
			if (a[i] == 2)
			{
				nguyentolonnhat = a[i];
				break;
			}
			else
			{
				count = 0;
				for (int j = 2; j < a[i]; j++)
				{
					if (a[i] % j == 0)
						count++;
				}
				if (count == 0)
				{
					nguyentolonnhat = a[i];
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (a[i] > 2)
		{
			count = 0;
			for (int j = 2; j < a[i]; j++)
			{
				if (a[i] % j == 0)
					count++;
			}
			if (count == 0)
			{
				if (nguyentolonnhat < a[i])
					nguyentolonnhat = a[i];
			}

		}
	}

	return nguyentolonnhat;
}
*/