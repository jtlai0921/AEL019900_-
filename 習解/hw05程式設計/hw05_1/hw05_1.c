#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char keyin;
    printf("�п�J 0 ~ 6 ��������ơG ");
    keyin=getchar();
    switch (keyin) {
    	case '0':
    		printf("�P����"); break;
    	case '1':
    		printf("�P���@"); break;
    	case '2':
    		printf("�P���G"); break;
    	case '3':
    		printf("�P���T"); break;
    	case '4':
    		printf("�P���|"); break;
    	case '5':
    		printf("�P����"); break;
    	case '6':
    		printf("�P����"); break;	 	
        default:
			printf("��J���~�I");		
	}
     
    printf("\n\n") ;
    system("PAUSE");
	return 0;
}
