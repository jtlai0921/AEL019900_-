#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("叫块獶箂俱计 ");
	scanf("%d", &num);
	
	printf("\n┮块俱计 "); 
	if (num>0) {
		printf("タ"); 
	    if (num % 2 == 0) printf("案计"); 
        else printf("计"); 
    } else {
	    printf("璽"); 
	    if (num % 2 == 0) printf("案计"); 
        else printf("计"); 
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
