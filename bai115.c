#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh.
//Tính điểm trung bình và xuất kết quả.


//khong sai ham

/*
int main()
{
	float toan, van, average;
	char hoten[50];

	printf("Nhap ho va ten: ");
	fgets(hoten, sizeof(hoten), stdin);
	//gets(hoten);
	printf("Nhap diem toan: ");
	scanf_s("%f", &toan);
	printf("Nhap diem van: ");
	scanf_s("%f", &van);

	average = (toan + van) / 2;

	printf("\nHo va ten: %s.\n", hoten);
	printf("Diem toan: %.2f.\n", toan);
	printf("Diem van: %.2f.\n", van);
	printf("Diem trung binh %.2f.", average);

	_getch();
	return 0;
}
*/

//sai ham
//
//Sài biến toàn cục
//
float toan, van, average;
char hoten[50];

void Nhap();
void XulyTrungBinh();
void Xuat();


int main()
{
	
	Nhap();
	XulyTrungBinh();
	Xuat();

	_getch();
	return 0;
}

void Nhap(n)
{

	printf("Nhap ho va ten: ");
	//fgets(hoten, 50, stdin);
	fgets(hoten, sizeof(hoten), stdin);	
	//gets(hoten);	//báo lỗi
	printf("Nhap diem toan: ");
	scanf_s("%f", &toan);
	printf("Nhap diem van: ");
	scanf_s("%f", &van);
}
void Xuat()
{

	printf("\nHo va ten: %s\n", hoten);
	printf("Diem toan: %.2f.\n", toan);
	printf("Diem van: %.2f.\n", van);
	printf("Diem trung binh %.2f.", average);

}

void XulyTrungBinh()
{
	average = (toan + van) / 2;
}
//

