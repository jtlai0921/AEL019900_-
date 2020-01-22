#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mygetch(char * s, int len){
    char c;
    int i;

    for(i = 0; i < len - 1; i ++){
        c = getch();
        if(c == '\r') /* 判斷是否按下Enter鍵 */ 
            break;
        *(s + i) = c; /* 接收到的字元放置於陣列中 */ 
        printf("*"); /* 輸出 * 號 */ 
    }
    *(s + i) = '\0'; /* 填上空字元代表字串結束 */ 
}

int main(int argc, char *argv[]) {
    char str[8]; 
    
    mygetch(str, sizeof(str));
    printf("\n%s\n", str);
    system("PAUSE");
	return 0;
}
