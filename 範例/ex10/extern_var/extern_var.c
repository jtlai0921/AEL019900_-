#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "shopping.h"			//含入shopping.h標頭檔

int main(int argc, char *argv[])
{
	//使用extern宣告total變數，本程式可以使用shopping.h的total變數
	//以達成跨檔案存取變數的目的。
 	extern int total;			//使用shopping.h的total全域變數
	char ch;
	int keyin;
	do
	{
		printf("   請輸入購物金額：");
		scanf("%d", &keyin);
		printf("   目前應付總金額：%d\n", buy(keyin));
		printf("是否(y/n)繼續購物：");
		ch=toupper(getche());  
		printf("\n\n");
	}while(ch=='Y');	
	printf("謝謝您的購買，總共 %d 元\n", total);
	system("PAUSE");	
	return 0;
}

