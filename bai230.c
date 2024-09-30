#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy liệt kê tần suất xuất hiện của các giá trị xuất hiện trong mảng
// (lietke). (Lưu ý: mỗi giá trị liệt kê một lần)


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


	printf("\n\n");
	
	//Xu ly de
	for (int i = 0; i < N; i++)
	{
	    int dem = 0;
	
	    for(int j = 0; j < N; j++)
	    {
	    	if(a[i] == a[j])
	    	{
	    		if(i <= j)
	    			dem++;
	    		else
	    			break;
	    	}
	    }

	    if (dem != 0)
	    {
			printf("So lan suat hien cua %d trong mang la: %d.\n", a[i], dem);
		}
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
void Xuly();

int main()
{
	nhap();
	xuat();

	printf("\n\n");

	//Xu ly de
	Xuly();

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
void Xuly()
{
	for (int i = 0; i < N; i++)
	{
	    int dem = 0;
	    
	    
	    for (int j = 0; j < N; j++)
	    {
	        if(i > j)
	        {
	        	if(a[i] == a[j])
	        		break;
	        } 
	        else
	        {
	        	if(a[i] == a[j])
	        		dem++;
	        }
	    }
	    
	    if (dem != 0)
	    {
			printf("So lan suat hien cua %d trong mang la: %d.\n", a[i], dem);
		}
	}
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

void Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n\n");

	//Xu ly de
	Xuly(a, N);

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

void Xuly(int a[], int N)
{
	for (int i = 0; i < N; i++)
	{
	    int dem = 0;
	    
	    
	    for (int j = 0; j < N; j++)
	    {
	        if(i > j)
	        {
	        	if(a[i] == a[j])
	        		break;
	        } 
	        else
	        {
	        	if(a[i] == a[j])
	        		dem++;
	        }
	    }
	    
	    if (dem != 0)
	    {
			printf("So lan suat hien cua %d trong mang la: %d.\n", a[i], dem);
		}
	}
}
*/