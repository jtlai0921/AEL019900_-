#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int p[10]={0};
	int i, num, over=0;
	do {
		printf(" 未簽到座號：");
		over=1;
		for(i=0; i<10; i++) {
			if(p[i]!=1) {
				printf(" %d ", i+1);
				over=0;
			}
		}
		if (over==1) {
			printf("沒有，全員到齊！\n\n");
			break; 
		}
		printf("\n");
		printf(" 請輸入座號(1~10)：");
		scanf("%d", &num);
		for(i=0; i<10; i++) {
		    if(num==(i+1)) {
		    	p[i]=1;
		        break;
		    }
		}
	} while(over!=1);
	
	system("PAUSE");
	return 0;
}
