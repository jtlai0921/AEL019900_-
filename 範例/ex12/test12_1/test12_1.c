#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char isbn[14];
	int x = 0; /* 加權和 */
    int i;
    int chk; /* 校驗碼 */

	gets(isbn);
    if(strlen(isbn) == 13){
        for(i = 0; i < 12; i ++){
            if(i % 2 == 0){
                x += isbn[i] - '0';
            }
            else{
                x += (isbn[i] - '0') * 3;
            }
        }
        chk = 10 - (x % 10);
        if(chk == 10){
            chk = 0;
        }
        if((isbn[12] - '0') == chk){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    else{
        printf("0\n");
    }
	system("PAUSE");
	return 0;
}
