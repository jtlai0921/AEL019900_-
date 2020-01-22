#include <stdio.h>
#include <stdlib.h>
#define BOOK_TITLE "C語言基礎必修課"
const int PRICE = 500;
int main(int argc, char *argv[]) {
	int num=3;
	printf("%s %d 本 合計 %d 元\n",BOOK_TITLE,num,num*PRICE);
	/*PRICE = 550;*/
	system("PAUSE");
	return 0;
}
