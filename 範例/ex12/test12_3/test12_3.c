#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
    char str[100];
	int k, i;
	int ulen = 0; /*�s��j�g�r�����*/
	int llen = 0; /*�s��p�g�r�����*/
	int len = 0; /*����r�����*/
	int mlen = 0; /*�̪�����r�����*/
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
            if(islower(str[i]) == 0){ /* �s��j�g */
                ulen ++;
                if(ulen == k){
                    len += ulen;
                    if(len > mlen)
                        mlen = len;
                }
                else if(ulen > k)
                    len = k;
            }
	        else{ /* �Ѥj�g�ܦ��p�g */
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
            if(islower(str[i]) != 0){ /* �s��p�j�g */
                llen ++;
                if(llen == k){
                    len += llen;
                    if(len > mlen)
                        mlen = len;
                }
                else if(llen > k)
                    len = k;
            }
            else{ /* �Ѥp�g�ܦ��j�g */
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
