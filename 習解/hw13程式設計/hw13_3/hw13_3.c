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
    printf("請輸入學生人數：");
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
        
        printf("請輸入姓名：");
        scanf("%s", ptr->name);
        printf("請輸入學號：");
        scanf("%s", ptr->id);
        printf("請輸入入學成績：");
        scanf("%d", &ptr->score);
    }
    printf("  姓名\t學號\t入學成績\n"); 
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
