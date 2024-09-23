#include<stdio.h>
#include<conio.h>
#include<math.h>


//Hãy tìm giá trị đầu tiên trong mảng một chiều các số nguyên có chữ số
//đầu tiên là chữ số lẻ (dauledautien). Nếu trong mảng không tồn tại giá
//trị như vậy thì hàm sẽ trả về giá trị 0.


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
	int temp, chusodau = 0, dauledautien = 0;

	for(int i = 0; i < N; i++)
	{
		temp = a[i];
		for (temp; temp >= 10; temp /= 10)	//temp < 10: ket thuc vong lap
		{
			int dv = temp % 10;
		}
		if(temp % 2 == 1)
		{
			chusodau = temp;
			dauledautien = a[i];
			break;	
		}
	}

	if(chusodau % 2 == 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien trong mang co chu so dau tien la chu so le la: %d.", dauledautien);

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

void SoCoChuSoLeDauTien();

int main()
{
	nhap();
	xuat();

	printf("\n");

	//Xu ly de

	SoCoChuSoLeDauTien();

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
void SoCoChuSoLeDauTien()
{
	int temp, chusodau = 0, dauledautien = 0;

	for(int i = 0; i < N; i++)
	{
		temp = a[i];
		for (temp; temp >= 10; temp /= 10)	//temp < 10: ket thuc vong lap
		{
			int dv = temp % 10;
		}
		if(temp % 2 == 1)
		{
			chusodau = temp;
			dauledautien = a[i];
			break;	
		}
	}

	if(chusodau % 2 == 0)
		printf("\n0");
	else
		printf("\nGia tri dau tien trong mang co chu so dau tien la chu so le la: %d.", dauledautien);
}
//

/*
//Test o visual
int N, a[MAX];
*/