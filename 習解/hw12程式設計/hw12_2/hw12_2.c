#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mygetch(char * s, int len){
    char c;
    int i;

    for(i = 0; i < len - 1; i ++){
        c = getch();
        if(c == '\r') /* �P�_�O�_���UEnter�� */ 
            break;
        *(s + i) = c; /* �����쪺�r����m��}�C�� */ 
        printf("*"); /* ��X * �� */ 
    }
    *(s + i) = '\0'; /* ��W�Ŧr���N��r�굲�� */ 
}

int main(int argc, char *argv[]) {
    char str[8]; 
    
    mygetch(str, sizeof(str));
    printf("\n%s\n", str);
    system("PAUSE");
	return 0;
}
