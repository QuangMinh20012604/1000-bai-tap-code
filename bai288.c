#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>


//Hãy xuất các phần tử trong mảng theo yêu cầu: các phần tử chẵn có
//màu vàng, các phần tử lẻ có màu trắng (xuatchanle)

//Test o visual
#define MAX 100

// Hàm tô màu
void textcolor(int x)
{
    HANDLE mau;
    mau = GetStdHandle
    (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}
void nhap(int a[], int& n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf_s("%d", &n);
        if (n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }
}

void XuatChanVangLeTrang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            textcolor(14);
            printf("%4d", a[i]);
        }
        else
        {
            textcolor(7);
            printf("%4d", a[i]);
        }
    }
}


int main()
{
    int n, k;
    int a[MAX];

    nhap(a, n);
    XuatChanVangLeTrang(a, n);


    _getch();
    return 0;
}