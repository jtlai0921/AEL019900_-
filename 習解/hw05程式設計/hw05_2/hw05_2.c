#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("�п�J�@�ӫD�s����ơG ");
	scanf("%d", &num);
	
	printf("\n�ҿ�J����Ƭ� "); 
	if (num>0) {
		printf("��"); 
	    if (num % 2 == 0) printf("����"); 
        else printf("�_��"); 
    } else {
	    printf("�t"); 
	    if (num % 2 == 0) printf("����"); 
        else printf("�_��"); 
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
