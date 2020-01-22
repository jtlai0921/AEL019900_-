#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year;
	printf("請輸入一個 4 位數的西元年： ");
	scanf("%d",&year);
	
	if ((year%4==0) && ((year%100!=0) || (year%400==0)))
        printf("\n西元 %d 年為閏年。", year);
    else
        printf("\n西元 %d 年為平年。", year);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
