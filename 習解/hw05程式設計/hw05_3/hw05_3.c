#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mon;
	printf("請輸入一個 1~12 之間的月份： ");
	scanf("%d", &mon);
	switch(mon) {
		case 3:
		case 4:
		case 5:	
		    printf("春天"); break;
		case 6:
		case 7:
		case 8:	
		    printf("夏天"); break;
		case 9:
		case 10:
		case 11:	
		    printf("秋天"); break;
		case 12:
		case 1:
		case 2:	
		    printf("冬天"); break;
		default:			    
		    printf("輸入錯誤！");	 
	}
	
	printf("\n\n");
    system("PAUSE");
	return 0;
}
