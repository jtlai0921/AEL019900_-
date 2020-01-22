#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(int argc, char *argv[]) {
	char fruit[MAX][15];
	int fnum;
	for(fnum=0; fnum<MAX; fnum++) { 
		printf(" 請輸入第 %d 個水果英文的名稱：", fnum+1);
		gets(fruit[fnum]);
	} 

    int iLoop, j;
    char st[15];
    for(iLoop=1; iLoop<MAX; iLoop++) {
       for(j=0; j<(MAX-iLoop); j++) { 
          if (strcmp(fruit[j], fruit[j+1]) == 1) {
              strcpy(st,fruit[j]); strcpy(fruit[j],fruit[j+1]); strcpy(fruit[j+1],st);
          }
       }
    }

	printf("\n 所輸入的水果名稱排序如下："); 
	for(fnum=0; fnum<MAX; fnum++) { 
		printf("\n %d. %s", fnum+1, fruit[fnum]);
	}
	
    printf("\n\n");
    system("PAUSE");
	return 0;
}
