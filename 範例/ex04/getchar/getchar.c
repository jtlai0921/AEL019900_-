#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;                           //宣告字元變數 
	printf("\n請鍵入一個字元：");      //輸入提示 
	ch=getchar();
	printf("所鍵入的字元是  ");        //輸出提示 
	putchar(ch);
	printf("\n"); 
	printf("\n請鍵入一個字元：");        //輸入提示 
	ch=getche();
	printf("\n所鍵入的字元是  ");        //輸出提示 
	putchar(ch);
	printf("\n"); 
	printf("\n請鍵入一個字元：");        //輸入提示 
	ch=getch();
	printf("\n所鍵入的字元是  ");        //輸出提示 
	putchar(ch);
	printf("\n\n"); 

	system("PAUSE");
	return 0;
}
