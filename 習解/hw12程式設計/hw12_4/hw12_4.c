#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int iupper=0; //�j�g�r��
    int ipunct=0; //�Ÿ�
    int ilower=0; //�p�g�r��
    int idigit=0; //�Ʀr�r��
    int ialnum=0; //��Ʀr�r��
    int ialpha=0; //�^��r��
    int iother=0;
    int i;
    char cha[80];
    char chb[20];
    printf("�п�J�r��A�G\n");
    gets(cha);
    printf("�п�J�r��B�G\n");
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
    printf("��Ʀr��%d��\n", ialnum);
    printf("�^��r����%d��\n", ialpha);
    printf("�j�g�r����%d��\n", iupper);
    printf("�p�g�r����%d��\n", ilower);
    printf("�Ʀr��%d��\n", idigit);
    printf("�Ÿ���%d��\n", ipunct);
    printf("��L��%d��\n", iother);
    system("PAUSE");
	return 0;
}
