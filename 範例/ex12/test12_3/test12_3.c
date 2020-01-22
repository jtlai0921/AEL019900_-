#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
    char str[100];
	int k, i;
	int ulen = 0; /*連續大寫字串長度*/
	int llen = 0; /*連續小寫字串長度*/
	int len = 0; /*交錯字串長度*/
	int mlen = 0; /*最長交錯字串長度*/
	char ch;

	scanf("%d\n", &k);
	gets(str);
	
	ch = str[0];
	if(islower(ch) == 0)
	    ulen = 1;
    else
        llen = 1;
    if(k == 1){
        len = 1;
        mlen = 1;
    }
	for(i = 1; str[i] != '\0'; i++){
        if(islower(ch) == 0){ 
            if(islower(str[i]) == 0){ /* 連續大寫 */
                ulen ++;
                if(ulen == k){
                    len += ulen;
                    if(len > mlen)
                        mlen = len;
                }
                else if(ulen > k)
                    len = k;
            }
	        else{ /* 由大寫變成小寫 */
	            if(ulen < k)
	               len = 0;
	            llen = 1;
	            ulen = 0;
	            if(llen == k){
	                len += llen;
	                if(len > mlen)
	                   mlen = len;
                }
            }
        }
        else{
            if(islower(str[i]) != 0){ /* 連續小大寫 */
                llen ++;
                if(llen == k){
                    len += llen;
                    if(len > mlen)
                        mlen = len;
                }
                else if(llen > k)
                    len = k;
            }
            else{ /* 由小寫變成大寫 */
                if(llen < k)
                    len = 0;
                ulen = 1;
                llen = 0;
                if(ulen == k){
                    len += ulen;
                    if(len > mlen)
                        mlen = len;
                }
            }
        }
        ch = str[i];
    }
    printf("%d\n", mlen);
    system("PAUSE");
	return 0;
}
