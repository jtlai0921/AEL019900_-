#include <stdio.h>
#include <stdlib.h>

struct data{
    char name[12];
    char id[8];
    int score;
};

int main(int argc, char *argv[]) {
    struct data *ptr;
    char keyin[12];
    int num;
    char ch;
    int i;
    
    printf("�п�J�ǥͤH�ơG");
    scanf("%d", &num);
    ptr = (struct data *)malloc(num * sizeof(struct data));
    for(i = 0; i < num; i ++){
        printf("�п�J�m�W�G");
        scanf("%s", ptr[i].name);
        printf("�п�J�Ǹ��G");
        scanf("%s", ptr[i].id);
        printf("�п�J�J�Ǧ��Z�G");
        scanf("%d", &ptr[i].score);
    }
    printf("  �m�W\t�Ǹ�\t�J�Ǧ��Z\n"); 
    for(i = 0; i < num; i ++){
        printf("%s\t%s\t%d\n", ptr[i].name, ptr[i].id, ptr[i].score);
    }
    
    free(ptr);
    system("PAUSE");
	return 0;
}
