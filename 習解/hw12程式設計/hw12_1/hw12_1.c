#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char * s){
    int i, len;
    
    len = strlen(s);
    if(s[0] == '+'){
        for(i = 1; i < len; i ++){
            if(i % 2 == 0)
                s[i] += 2;
            else
                s[i] += 1;
        }
    }else if(s[0] == '-'){
        for(i = 1; i < len; i ++){
            if(i % 2 == 0)
                s[i] -= 2;
            else
                s[i] -= 1;
        }
    }
}

int main(int argc, char *argv[]) {
    char str[80];
        
    gets(str);
    func(str);
    printf("%s\n", str);
    system("PAUSE");
	return 0;
}
