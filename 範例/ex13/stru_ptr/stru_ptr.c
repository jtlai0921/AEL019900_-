#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define SIZE 3
struct student{
    char no[8];
    char name[16];
    int score;
};
int main(int argc, char *argv[]) {
    struct student p[SIZE];
    struct student *ptr;
    int i, flag=-1;
    char keyin[8];
    
    ptr = p;
    printf(" === ���y�n�� ===\n");
    for(i = 0; i < SIZE; i++, ptr++){
        printf("��%2d�ǥ;Ǹ�=", i+1);
        gets((*ptr).no);
        printf("��%2d�ǥͩm�W=", i+1);
        gets(ptr->name);
        printf("��%2d�ǥͦ��Z=", i+1);
        gets(keyin);
        ptr->score = atoi(keyin);
    }
    ptr = p;
    printf(" === �ǥ͸�Ƭd�� ===\n�Ǹ�=");
    gets(keyin);
    for(i = 0; i < SIZE; i++, ptr++){
        if(strcmp(ptr->no, keyin) == 0){
            flag = i;
            break;
        }
    }
    if(flag == -1)
        printf("�d�L��ơI\n");
    else{
        printf("�Ǹ�=%s\t", p[flag].no);
        printf("�m�W=%s\t", (*ptr).name);
        printf("���Z=%d\n", ptr->score);
    } 
    system("pause");
	return 0;
}
