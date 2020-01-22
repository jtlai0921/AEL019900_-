#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert(char s[], int n){
    int i = 0;
    int digit;
    
    while(n / 16 > 0){
        digit = n % 16;
        s[i++] = (digit < 10) ? digit + '0' : digit - 10 + 'A';
        n /= 16;
    }
    s[i++] = (n < 10) ? n + '0' : n - 10 + 'A';
    s[i] = 0;
    strrev(s);
}

int main(int argc, char *argv[]) {
    char str[10];
    int num;
    
    gets(str);
    num = atoi(str);
    convert(str, num);
    printf("%s\n", str);
    
    system("PAUSE");
	return 0;
}
