#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mon;
	printf("�п�J�@�� 1~12 ����������G ");
	scanf("%d", &mon);
	switch(mon) {
		case 3:
		case 4:
		case 5:	
		    printf("�K��"); break;
		case 6:
		case 7:
		case 8:	
		    printf("�L��"); break;
		case 9:
		case 10:
		case 11:	
		    printf("���"); break;
		case 12:
		case 1:
		case 2:	
		    printf("�V��"); break;
		default:			    
		    printf("��J���~�I");	 
	}
	
	printf("\n\n");
    system("PAUSE");
	return 0;
}
