#include <stdio.h>
#include <stdlib.h>

struct data{
    char name[12];
    char id[8];
    int score;
    struct data *next;
};
int main(int argc, char *argv[]) {
    struct data *ptr, *head, *newptr;
    char keyin[12];
    int num;
    char ch;
    int i;
    
    head = ptr = newptr = NULL;
    printf("�п�J�ǥͤH�ơG");
    scanf("%d", &num);
    for(i = 0; i < num; i ++){
        if(i == 0){
            ptr = (struct data *)malloc(sizeof(struct data));
            head= ptr;
        }
        else{
            newptr = (struct data *)malloc(sizeof(struct data));
            ptr->next= newptr;
            ptr = newptr;
        }
        ptr->next = NULL;
        
        printf("�п�J�m�W�G");
        scanf("%s", ptr->name);
        printf("�п�J�Ǹ��G");
        scanf("%s", ptr->id);
        printf("�п�J�J�Ǧ��Z�G");
        scanf("%d", &ptr->score);
    }
    printf("  �m�W\t�Ǹ�\t�J�Ǧ��Z\n"); 
    ptr = head;
    for(i = 0; i < num; i ++){
        printf("%s\t%s\t%d\n", ptr->name, ptr->id, ptr->score);
        ptr = ptr->next;
    }
    ptr = head;
    for(i = 0; i < num; i ++){
        newptr = ptr->next;
        free(ptr);
        ptr = newptr;
    }
    system("PAUSE");
	return 0;
}
