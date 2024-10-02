#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng số nguyên tố phân biệt trong mảng các số nguyên
//(demphanbiet)


//Cho 1 mang 

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


	printf("\n\nCac so nguyen to phan biet trong mang:\n");
	
	//Xu ly de
	int dem = 0;

    for(int i = 0; i < N; i++)
    {
        int CheckTrung = 1;
        
        for (int j = i - 1; j >= 0; j--)//khi i = 0, vong for nay se dc bo qua
	    {
	        if (a[j] == a[i])
	        {
	            CheckTrung =  0; // Bị trùng
	        }
	    }

        if (CheckTrung == 1)  // chỉ xử lý khi không trùng
        {
        	int songuyento = 1;

        	if (a[i] < 2)
		    {
		        songuyento = 0;
		    }
		    else if (a[i] > 2)
		    {
		        if (a[i] % 2 == 0)
		        {
		            songuyento = 0;
		        }
		        else
		        {
			        for (int j = 2; j < a[i]; j++)
			        {
			            if (a[i] % j == 0)
			            {
			                songuyento = 0;
			            }
			        }
			    }
		    }

            if(songuyento == 1)
            {
            	printf("%d  ", a[i]);
                dem++;
            }
        }
    }

    printf("\n\nSo luong so nguyen to phan biet trong mang la: %d.", dem);

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

	printf("\n\nCac so nguyen to phan biet trong mang:\n");

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
	int dem = 0;

    for(int i = 0; i < N; i++)
    {
        int CheckTrung = 1;
        
        for (int j = i - 1; j >= 0; j--)//khi i = 0, vong for nay se dc bo qua
	    {
	        if (a[j] == a[i])
	        {
	            CheckTrung =  0; // Bị trùng
	        }
	    }

        if (CheckTrung == 1)  // chỉ xử lý khi không trùng
        {
        	int songuyento = 1;

        	if (a[i] < 2)
		    {
		        songuyento = 0;
		    }
		    else if (a[i] > 2)
		    {
		        if (a[i] % 2 == 0)
		        {
		            songuyento = 0;
		        }
		        else
		        {
			        for (int j = 2; j < a[i]; j++)
			        {
			            if (a[i] % j == 0)
			            {
			                songuyento = 0;
			            }
			        }
			    }
		    }

            if(songuyento == 1)
            {
            	printf("%d  ", a[i]);
                dem++;
            }
        }
    }

    printf("\n\nSo luong so nguyen to phan biet trong mang la: %d.", dem);
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

	printf("\n\nCac so nguyen to phan biet trong mang:\n");

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
	int dem = 0;

    for(int i = 0; i < N; i++)
    {
        int CheckTrung = 1;
        
        for (int j = i - 1; j >= 0; j--)//khi i = 0, vong for nay se dc bo qua
	    {
	        if (a[j] == a[i])
	        {
	            CheckTrung =  0; // Bị trùng
	        }
	    }

        if (CheckTrung == 1)  // chỉ xử lý khi không trùng
        {
        	int songuyento = 1;

        	if (a[i] < 2)
		    {
		        songuyento = 0;
		    }
		    else if (a[i] > 2)
		    {
		        if (a[i] % 2 == 0)
		        {
		            songuyento = 0;
		        }
		        else
		        {
			        for (int j = 2; j < a[i]; j++)
			        {
			            if (a[i] % j == 0)
			            {
			                songuyento = 0;
			            }
			        }
			    }
		    }

            if(songuyento == 1)
            {
            	printf("%d  ", a[i]);
                dem++;
            }
        }
    }

    printf("\n\nSo luong so nguyen to phan biet trong mang la: %d.", dem);
}
*/