#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int count=0;
	char pw[8]="5487587", pwKeyin[8];
	int isPass=0;
	do {
		count++;
	    printf("\n �п�J�K�X�G");
        scanf("%s",pwKeyin);
        if (strcmp(pwKeyin, pw)==0) {  
            printf(" �K�X���T�A�w��ϥ�\n");
            isPass=1;
            break;
        } else { 
            printf(" �� %d �� �K�X��J���~�I\n",count);
        } 
	} while(count<3);
    if (isPass!=1) printf("\n �w�T���K�X��J���~�A����ϥΡI");
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
