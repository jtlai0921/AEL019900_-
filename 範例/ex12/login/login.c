#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char uid[][12] = {"John","Leo","Mary"};
    char pword[][8] = {"123","456","789"};
    char id[12], pw[8];
    int i, flag = 0;
    
    printf("�п�J�Τ�W�١G");
    gets(id);
    printf("�п�J�K�X�G");
    gets(pw);
    
    for(i = 0; i < 3; i ++){
        if(stricmp(uid[i], id) == 0){
            if(strcmp(pword[i], pw) == 0){
                flag = 1;
                break;
            } 
        }
    }
    if(flag == 1)
        printf("%s �w��n�J\n", id);
    else
        printf("�n�J����\n");
     
    system("PAUSE");
	return 0;
}
