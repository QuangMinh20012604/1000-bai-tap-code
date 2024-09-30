#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy đếm số lượng giá trị có chữ số tận cùng bằng 5 trong mảng các số
// nguyên (demtancung)


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
	int demtancung = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)	//khi số âm lấy phần dư thì kết quả sẽ ra số âm
		{
			if((a[i] % 10) == -5)
			{
				demtancung++;
				printf("%d  ", a[i]);
			}
		}

		else if(a[i] > 0)	
		{
			if((a[i] % 10) == 5)
			{
				demtancung++;
				printf("%d  ", a[i]);
			}
		}
		
	}

	printf("\n\nSo luong gia tri co chu so tan cung bang 5 trong mang la: %d.", demtancung);


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

	printf("\n");

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
	int demtancung = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)	//khi số âm lấy phần dư thì kết quả sẽ ra số âm
		{
			if((a[i] % 10) == -5)
			{
				demtancung++;
				printf("%d  ", a[i]);
			}
		}

		else if(a[i] > 0)	
		{
			if((a[i] % 10) == 5)
			{
				demtancung++;
				printf("%d  ", a[i]);
			}
		}
		
	}

	printf("\n\nSo luong gia tri co chu so tan cung bang 5 trong mang la: %d.", demtancung);
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

	printf("\n");

	//Xu ly de
	Xuly();

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

void Xuly()
{
	int demtancung = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)	//khi số âm lấy phần dư thì kết quả sẽ ra số âm
		{
			if((a[i] % 10) == -5)
			{
				demtancung++;
				printf("%d  ", a[i]);
			}
		}

		else if(a[i] > 0)	
		{
			if((a[i] % 10) == 5)
			{
				demtancung++;
				printf("%d  ", a[i]);
			}
		}
		
	}

	printf("\n\nSo luong gia tri co chu so tan cung bang 5 trong mang la: %d.", demtancung);
}
*/