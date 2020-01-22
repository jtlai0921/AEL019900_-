#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char * strarr[3];
    int i;
    
    for(i = 0; i < 3; i ++){
        char temp[80];
        gets(temp);
        strarr[i] = malloc(strlen(temp) + 1);
        strcpy(strarr[i], temp);
    }
    for(i = 0; i < 3; i ++)
        printf("strarr[%d] = %s\n", i, strarr[i]);
    for(i = 0; i < 3; i ++)
        free(strarr[i]);
    system("PAUSE");
	return 0;
}
