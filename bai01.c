#include<stdio.h>
#include<conio.h>
#include<math.h>


//Tính S(n) = 1 + 2 + 3 + ... + n


//Khong sai ham con
/*
int main()
{

    int i = 1;
    int N;
    long S = 0;

    printf("\nNhap N: ");    
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        S = S + i;
    }

    /*
    int i = 1;
    while(i <= N)
    {
        S = S + i;
        i++;
    }
    *
    
    printf("\nTong 1 + 2 + ...  + %d la: %ld ", N, S);
    getch();
    return 0;
}
*/


//Sai ham con
int Tong(int N )
{
    long S = 0;
    for(int i = 1; i <= N; i++)
    {
        S += i; 
    }
    return S;
}

int main()
{

    int N;
    
    printf("Nhap N: ");
    scanf_s("%d", &N);
    int S = Tong(N);
    printf("Tong S = %ld", S);
    _getch();
}

