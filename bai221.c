#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy cho biết sự tương quan giữa số lượng số chẵn và số lượng số lẻ
// trong mảng các số nguyên (tuongquanchanle)
// - Hàm này trả về một trong ba giá trị -1, 0, và 1.
// - Giá trị -1 có nghĩa số lượng số chẵn nhiều hơn số lẻ.
// - Giá trị 0 có nghĩa số lượng số lẻ bằng số lượng số chẵn
// - Giá trị 1 có nghĩa số lẻ nhiều hơn số chẵn


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
	int demchan = 0, demle = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
			demchan++;
		else if(a[i] % 2 != 0)
			demle++;
	}

	printf("\nChan: %d\tLe: %d\n", demchan, demle);

	if(demchan > demle)
		printf("1");
	else if(demchan < demle)
		printf("-1");
	else
		printf("0");


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
int Xuly();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de
	int tuongquanchanle = Xuly();

	printf("%d", tuongquanchanle);
	
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
int Xuly()
{
	int demchan = 0, demle = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
			demchan++;
		else if(a[i] % 2 != 0)
			demle++;
	}

	printf("\nChan: %d\tLe: %d\n", demchan, demle);

	if(demchan > demle)
		return 1;
	else if(demchan < demle)
		return -1;
	else
		return 0;
}
//

/*
//Test o visual
#define MAX 100

void nhap(int a[], int& N);

void xuat(int a[], int N);

int Xuly(int a[], int N);

int main()
{
	int N, a[MAX];
	
	nhap(a, N);
	xuat(a, N);

	printf("\n");

	//Xu ly de
	int tuongquanchanle = Xuly(a, N);

	printf("%d", tuongquanchanle);

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

int Xuly(int a[], int N)
{
	int demchan = 0, demle = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] % 2 == 0)
			demchan++;
		else if(a[i] % 2 != 0)
			demle++;
	}

	printf("\nChan: %d\tLe: %d\n", demchan, demle);

	if(demchan > demle)
		return 1;
	else if(demchan < demle)
		return -1;
	else
		return 0;
}
*/