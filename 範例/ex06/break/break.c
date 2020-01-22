#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int count=0;
	char pw[8]="5487587", pwKeyin[8];
	int isPass=0;
	do {
		count++;
	    printf("\n 請輸入密碼：");
        scanf("%s",pwKeyin);
        if (strcmp(pwKeyin, pw)==0) {  
            printf(" 密碼正確，歡迎使用\n");
            isPass=1;
            break;
        } else { 
            printf(" 第 %d 次 密碼輸入錯誤！\n",count);
        } 
	} while(count<3);
    if (isPass!=1) printf("\n 已三次密碼輸入錯誤，停止使用！");
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
