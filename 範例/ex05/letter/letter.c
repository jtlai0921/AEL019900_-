#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char keyin;
	printf("請輸入 b,c,d 其中一個字母： ");
	keyin = getche();
	printf("\n\n");
	switch (keyin) { 
	    case 'B':
	    case 'b':
		   printf("bird");
		   break;
		case 'C':
	    case 'c':
		   printf("cat");
	       break; 
		case 'D':
	    case 'd':
		   printf("dog");
		   break;
		default:
		   printf("輸入錯誤！");  
    }
    printf("\n\n");
    system("PAUSE");
	return 0;
}
