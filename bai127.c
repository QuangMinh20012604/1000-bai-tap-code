#include<stdio.h>
#include<conio.h>
#include<math.h>


//Viết hàm sắp xếp mảng một chiều các số thực tăng dần.

//Các thuật toán sắp xếp

//1. Sắp xếp chọn (Selection Sort)	//Đã làm
//2. Sắp xếp chèn (Insertion Sort)	//Đã làm
//3. Sắp xếp nổi bọt (Bubble Sort)	//Đã làm
//(Các thuật toán sắp xếp cơ bản 1-3)

//4. Sắp xếp nhanh (Quick Sort)
//5. Sắp xếp trộn (Merge Sort)
//6. Sắp xếp vun đống (Heap Sort)
//7. Sắp xếp đếm (Counting Sort)
//8. (Tim Sort)
//9. (Tree Sort)
//10. (Shell Sort)
//11. (Bucket Sort)
//12. (Radix Sort)
//13. (Cube Sort)
//...


//khong sai ham

/********************
 *  Selection Sort  *
 ********************/

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\n");

	float min, temp;

	printf("\nMang truoc khi sap xep:\n");
	
	for(int i = 0; i < N; i++)
	{
		printf("%0.2f  ", a[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N; i++)
	{
		min = a[i];
		for(int j = i; j < N; j++)
		{
			if(min > a[j])	
			{
				temp = min;
				min = a[j];
				a[j] = temp;
			}
		}
		a[i] = min;

		//test
		printf("Lan %d: ", i+ 1);
		for(int k = 0; k < N; k++)
		{
			printf("%0.2f  ", a[k]);
		}
		printf("\n");
		//
	}

	printf("\nMang sau khi da sap xep:\n");
	
	for(int k = 0; k < N; k++)
	{
		printf("%0.2f  ", a[k]);
	}

	_getch();
	return 0;
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////

/**********************
 *  Interchange Sort  *
 **********************/

/*
#define MAX 100

int main()
{
	int N;
	float a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\n");

	float min, temp;

	printf("\nMang truoc khi sap xep:\n");
	
	for(int i = 0; i < N; i++)
	{
		printf("%0.2f  ", a[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N - 1; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(a[i] > a[j])	
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		//test
		printf("Lan %d: ", i+ 1);
		for(int k = 0; k < N; k++)
		{
			printf("%0.2f  ", a[k]);
		}
		printf("\n");
		//
	}

	printf("\nMang sau khi da sap xep:\n");
	
	for(int k = 0; k < N; k++)
	{
		printf("%0.2f  ", a[k]);
	}

	_getch();
	return 0;
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////

/*****************
 *  Bubble Sort  *
 *****************/

//
#define MAX 100

int main()
{
	int N;
	float a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	printf("\n");

	float min, temp;

	printf("\nMang truoc khi sap xep:\n");
	
	for(int i = 0; i < N; i++)
	{
		printf("%0.2f  ", a[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N - 1; i++)
	{
		for(int j = N - 1; j > i; j--)
		{
			if(a[j] < a[j - 1])	
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}

		//test
		printf("Lan %d: ", i+ 1);
		for(int k = 0; k < N; k++)
		{
			printf("%0.2f  ", a[k]);
		}
		printf("\n");
		//
	}

	printf("\nMang sau khi da sap xep:\n");
	
	for(int k = 0; k < N; k++)
	{
		printf("%0.2f  ", a[k]);
	}

	_getch();
	return 0;
}
//





//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


//sai ham

/********************
 *  Selection Sort  *
 ********************/

/*
#define MAX 100

void SelectionSort(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	SelectionSort(a, N);

	_getch();
	return 0;
}

void SelectionSort(float a[], int N)
{
	printf("\n");

	float min, temp;

	printf("\nMang truoc khi sap xep:\n");
	
	for(int i = 0; i < N; i++)
	{
		printf("%0.2f  ", a[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N; i++)
	{
		min = a[i];
		for(int j = i; j < N; j++)
		{
			if(min > a[j])	
			{
				temp = min;
				min = a[j];
				a[j] = temp;
			}
		}
		a[i] = min;
	}

	printf("\nMang sau khi da sap xep:\n");
	
	for(int k = 0; k < N; k++)
	{
		printf("%0.2f  ", a[k]);
	}
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////

/**********************
 *  Interchange Sort  *
 **********************/

/*
#define MAX 100

void InterchangeSort(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	InterchangeSort(a, N);

	_getch();
	return 0;
}

void InterchangeSort(float a[], int N)
{
	printf("\n");

	float min, temp;

	printf("\nMang truoc khi sap xep:\n");
	
	for(int i = 0; i < N; i++)
	{
		printf("%0.2f  ", a[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N - 1; i++)
	{
		for(int j = N - 1; j > i; j--)
		{
			if(a[j] < a[j - 1])	
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}

	printf("\nMang sau khi da sap xep:\n");
	
	for(int k = 0; k < N; k++)
	{
		printf("%0.2f  ", a[k]);
	}
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////

/*****************
 *  Bubble Sort  *
 *****************/

/*
#define MAX 100

void BubbleSort(float a[], int N);

int main()
{
	int N;
	float a[MAX];

	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &N);
		if(N < 1 || N > MAX)
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}while(N < 1 || N > MAX);

	for(int i = 0; i < N; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}

	BubbleSort(a, N);

	_getch();
	return 0;
}

void BubbleSort(float a[], int N)
{
	printf("\n");

	float min, temp;

	printf("\nMang truoc khi sap xep:\n");
	
	for(int i = 0; i < N; i++)
	{
		printf("%0.2f  ", a[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N - 1; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(a[i] > a[j])	
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\nMang sau khi da sap xep:\n");
	
	for(int k = 0; k < N; k++)
	{
		printf("%0.2f  ", a[k]);
	}
}
*/
