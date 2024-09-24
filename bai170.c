#include<stdio.h>
#include<conio.h>
#include<math.h>


//Cho mảng một chiều các số nguyên. Hãy viết hàm tìm số nguyên tố
//nhỏ nhất và lớn hơn mọi giá trị có trong mảng.


//khong sai ham

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
	
	//tim so lon nhat trong mang
	int max = a[0];

	for(int i = 1; i < N; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	printf("\nSo lon nhat trong mang la: %d.", max);

	//tim so nguyen to nho nhat lon hon so lon nhat trong mang
	int songuyentocantim, count = 0;	//count != 0: fales	-	count == 0: true
	for(songuyentocantim = max + 1; ; songuyentocantim++)
	{
		count = 0;
		if(max < songuyentocantim)
		{
			if(songuyentocantim < 2)
			{
				count++;
			}
			else if(songuyentocantim > 2)
			{
				if(songuyentocantim % 2 == 0)
				{
					count++;
				}

				for(int i = 3; i <= sqrt((float) songuyentocantim); i++)
				{
					if (songuyentocantim % i == 0)
		            {
		                count++;
		            }
				}
			}
		}
		if(count == 0)
		{
			break;
		}
	}

	
	printf("\n\nSo nguyen to nho nhat lon hon moi gia tri trong mang la %d.", songuyentocantim);

	_getch();
	return 0;
}
*/

//sai ham

//
#define MAX 100

int N, a[MAX];
int max;

void nhap();
void xuat();
int TimSoLonNhat();
int TimSoNguyenToNhoNhat();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	max = TimSoLonNhat();
	printf("\nSo lon nhat trong mang la: %d.", max);

	int  songuyentocantim = TimSoNguyenToNhoNhat();
	printf("\n\nSo nguyen to nho nhat lon hon moi gia tri trong mang la %d.", songuyentocantim);

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

int TimSoLonNhat()
{
	max = a[0];

	for(int i = 1; i < N; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	
	return max;
}

int TimSoNguyenToNhoNhat()
{
	int songuyentocantim, count = 0;	//count != 0: fales	-	count == 0: true
	for(songuyentocantim = max + 1; ; songuyentocantim++)
	{
		count = 0;
		if(max < songuyentocantim)
		{
			if(songuyentocantim < 2)
			{
				count++;
			}
			else if(songuyentocantim > 2)
			{
				if(songuyentocantim % 2 == 0)
				{
					count++;
				}

				for(int i = 3; i <= sqrt((float) songuyentocantim); i++)
				{
					if (songuyentocantim % i == 0)
		            {
		                count++;
		            }
				}
			}
		}
		if(count == 0)
		{
			break;
		}
	}

	return songuyentocantim;
}

//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);
void xuat(int a[], int N);
int TimSoLonNhat(int a[], int N);
int TimSoNguyenToNhoNhat(int a[], int N, int max);

int main()
{
	int N, a[MAX];
	int max;
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	max = TimSoLonNhat(a, N);
	printf("\nSo lon nhat trong mang la: %d.", max);
	int  songuyentocantim = TimSoNguyenToNhoNhat(a, N, max);
	printf("\n\nSo nguyen to nho nhat lon hon moi gia tri trong mang la %d.", songuyentocantim);

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

int TimSoLonNhat(int a[], int N)
{
	int max = a[0];

	for (int i = 1; i < N; i++)
	{
		if (max < a[i])
			max = a[i];
	}

	return max;
}

int TimSoNguyenToNhoNhat(int a[], int N,int max)
{
	int songuyentocantim, count = 0;	//count != 0: fales	-	count == 0: true
	for (songuyentocantim = max + 1; ; songuyentocantim++)
	{
		count = 0;
		if (max < songuyentocantim)
		{
			if (songuyentocantim < 2)
			{
				count++;
			}
			else if (songuyentocantim > 2)
			{
				if (songuyentocantim % 2 == 0)
				{
					count++;
				}

				for (int i = 3; i <= sqrt((float)songuyentocantim); i++)
				{
					if (songuyentocantim % i == 0)
					{
						count++;
					}
				}
			}
		}
		if (count == 0)
		{
			break;
		}
	}

	return songuyentocantim;

}
*/
