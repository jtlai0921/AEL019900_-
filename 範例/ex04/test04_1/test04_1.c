#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char str1[30],str2[30];
    printf("\n輸入第一個字串： ");
    gets(str1);
    printf("\n輸入第二個字串： ");
    scanf("%s",str2);
    printf("\n第一個取得的字串是： %s\n", str1);
    printf("\n第二個取得的字串是： ");
    puts(str2);
    printf("\n");	
	
    system("PAUSE");
    return 0;
}
