#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *s){
    char *ptr;
    int len, i;
    int isTrue = 1;
     
    len = strlen(s);
    ptr = s + len - 1;
    for(i = 0; i < len / 2; i ++){
        if(*ptr == *s){
            s ++;
            ptr --;
        }else{
            isTrue = 0;
            break;
        }       
    }
    return isTrue;
}

int main(int argc, char *argv[]) {
    char str[80];
    int i;
    
    gets(str);
    strlwr(str);
    i = isPalindrome(str);
    printf("%d\n", i);
    system("PAUSE");
	return 0;
}
