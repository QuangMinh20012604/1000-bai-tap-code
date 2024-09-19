#include<stdio.h>
#include<conio.h>
#include<math.h>


//Một số nguyên 𝑥 = 𝑎 ̅̅𝑘̅̅𝑎̅̅𝑘̅−̅̅1̅̅…̅̅̅𝑎̅2̅̅𝑎̅1̅ được gọi là số Amstrong khi
//𝑥 = 𝑎𝑘𝑘 + 𝑎𝑘𝑘−1 + ⋯ + 𝑎2𝑘 + 𝑎1𝑘
//Hãy viết chương trình liệt kê tất cả các số Amstrong năm trong đoạn
//[1,1.000.000].


//Số Amstrong là số mà Tổng của các chữ số của chính nó với mũ lũy thừa của số chữ số bằng chính nó.

//ví dụ:
//1634 = 1^4 + 6^4 + 3^4 + 4^4

//Các số Armstrong có tới 10 chữ số là:

//1, 2, 3, 4, 5, 6, 7, 8, 9, 					//1 chữ số
//153, 370, 371, 407, 							//3 chữ số
//1634, 8208, 9474, 							//4 chữ số
//54748, 92727, 93084, 							//5 chữ số
//548834, 										//6 chữ số
//1741725, 4210818, 9800817, 9926315, 			//7 chữ số
//24678050, 24678051, 88593477,					//8 chữ số
//146511208, 472335975, 534494836, 912985153, 	//9 chữ số
//4679307774									//10 chữ số


//khong sai ham

/*
int main()
{
	long soChuso = 0, S = 0;
	long N_temp;
	
	printf("    Cac so Amstrong nam trong doan [1;1.000.000] la: \n");

	for(long N = 1; N <= 1000000; N++)
	{
		S = 0;			//reset S sau khi chạy 1 vòng for
		soChuso = 0;	//reset soChuso sau khi chạy 1 vòng for	
		N_temp = N;

		for(N_temp; N_temp != 0; N_temp /= 10)
		{
			soChuso++;
		}
		N_temp = N;
		for(N_temp; N_temp != 0; N_temp /= 10)
		{
			S += pow((N_temp % 10) , soChuso);
		}

		if(S == N)
		{
			printf("%8ld", N);
		}
	}
	_getch();
	return 0;
}
*/

//sai ham
void KiemtraSoAmstrong();

int main()
{
	KiemtraSoAmstrong();
	
	_getch();
	return 0;
}

void KiemtraSoAmstrong()
{
	long soChuso = 0, S = 0;
	long N_temp;
	
	printf("    Cac so Amstrong nam trong doan [1;1.000.000] la: \n");

	for(long N = 1; N <= 1000000; N++)
	{
		S = 0;			//reset S sau khi chạy 1 vòng for
		soChuso = 0;	//reset soChuso sau khi chạy 1 vòng for	
		N_temp = N;

		for(N_temp; N_temp != 0; N_temp /= 10)
		{
			soChuso++;
		}
		N_temp = N;
		for(N_temp; N_temp != 0; N_temp /= 10)
		{
			S += pow((N_temp % 10) , soChuso);
		}

		if(S == N)
		{
			printf("%8ld", N);
		}
	}
}
