#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char keyin;
	printf("�п�J b,c,d �䤤�@�Ӧr���G ");
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
		   printf("��J���~�I");  
    }
    printf("\n\n");
    system("PAUSE");
	return 0;
}
