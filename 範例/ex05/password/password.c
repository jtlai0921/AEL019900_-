#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char pw[8];
    printf("½Ð¿é¤J±K½X¡G");
    scanf("%s", pw) ;
    if (strcmp(pw, "5875487")==0)
        printf("\n±K½X¥¿½T¡AÅwªï¥úÁ{");
    else
        printf("\n±K½X¿ù»~¡A©Úµ´¶i¤J");
	    
    printf("\n\n")    ;
    system("PAUSE");
    return 0;
}

