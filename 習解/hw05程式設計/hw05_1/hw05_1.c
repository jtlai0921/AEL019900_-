#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char keyin;
    printf("請輸入 0 ~ 6 之間的整數： ");
    keyin=getchar();
    switch (keyin) {
    	case '0':
    		printf("星期日"); break;
    	case '1':
    		printf("星期一"); break;
    	case '2':
    		printf("星期二"); break;
    	case '3':
    		printf("星期三"); break;
    	case '4':
    		printf("星期四"); break;
    	case '5':
    		printf("星期五"); break;
    	case '6':
    		printf("星期六"); break;	 	
        default:
			printf("輸入錯誤！");		
	}
     
    printf("\n\n") ;
    system("PAUSE");
	return 0;
}
