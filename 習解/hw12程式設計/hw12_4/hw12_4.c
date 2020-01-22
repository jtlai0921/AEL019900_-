#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int iupper=0; //糶じ
    int ipunct=0; //才腹
    int ilower=0; //糶じ
    int idigit=0; //计じ
    int ialnum=0; //ゅ计じ
    int ialpha=0; //璣ゅじ
    int iother=0;
    int i;
    char cha[80];
    char chb[20];
    printf("叫块﹃A\n");
    gets(cha);
    printf("叫块﹃B\n");
    gets(chb);
    strcat(cha, chb);
    printf("A+B=%s\n", cha);
    for(i = 0; cha[i] != '\0'; i ++){
        if(isalnum(cha[i]) != 0){
            ialnum ++;
            if(isalpha(cha[i]) != 0){
                ialpha ++;
                if(isupper(cha[i]) != 0){
                    iupper ++;
                }
                else
                    ilower ++;
            }
            else if(isdigit(cha[i]) != 0)
                idigit ++;
        }
        else if(ispunct(cha[i])!= 0){
            ipunct ++; 
        }
        else
            iother ++;
    }
    printf("ゅ计Τ%d\n", ialnum);
    printf("璣ゅダΤ%d\n", ialpha);
    printf("糶ダΤ%d\n", iupper);
    printf("糶ダΤ%d\n", ilower);
    printf("计Τ%d\n", idigit);
    printf("才腹Τ%d\n", ipunct);
    printf("ㄤΤ%d\n", iother);
    system("PAUSE");
	return 0;
}
