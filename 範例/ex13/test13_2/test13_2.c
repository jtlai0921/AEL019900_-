#include <stdio.h>
#include <stdlib.h>

struct node{
    char name[8];
    int id;
    int age;
    struct node *next;
};
struct node *getNode(void);
void addNode(struct node *);
void deleteNode(struct node *);
void showNode(struct node *);
void freeNode(struct node *);
int main(int argc, char *argv[]) {
    char op;
    struct node *head = getNode();
    while(1){
        printf("===========================\n");
        printf("  <1> 新增資料\n");
        printf("  <2> 刪除資料\n");
        printf("  <3> 顯示資料串列\n");
        printf("  <4> 結束程式\n");
        printf("  請輸入1～4\n");
        printf("===========================\n");
        op = getche();
        printf("\n");
        switch(op){
            case '1':
                addNode(head);
                break;
            case '2':
                deleteNode(head);
                break;
            case '3':
                showNode(head);
                break;
            case '4':    
                freeNode(head);
                system("PAUSE");
                return 0;
                break;
        }
    }    
}
struct node *getNode(void){
    struct node * n;
    n = malloc(sizeof(struct node));
    if(n == NULL){
        printf("配置記憶體失敗！");
        return NULL;
    }
    else{
        n->next = NULL;
        return n;
    }
}
void addNode(struct node *ptr){
    struct node *new, *temp, *prev;
    new = getNode();
    printf("===========================\n");
    printf("請輸入員工編號：");
    scanf("%d", &new->id);
    printf("請輸入員工姓名：");
    scanf("%s", new->name);
    printf("請輸入員工年資：");
    scanf("%d", &new->age);
    printf("===========================\n");
    prev = ptr;
    temp=ptr->next;
    while(temp!= NULL){
        if(temp->age > new->age){
            prev = temp;
            temp = temp->next;
        }
        else{
            new->next = temp;
            prev->next = new;
            return;
        }
    }
    prev->next = new;
}
void deleteNode(struct node *ptr){
    struct node *temp, *prev;
    int id;
    
    printf("===========================\n");
    printf("請輸入要刪除的員工編號：");
    scanf("%d", &id); 
    prev = ptr;
    temp = ptr->next;
    while(temp != NULL){
        if(temp->id == id){
            prev->next = temp->next;
            free(temp);
            return;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
    printf("查無此員工編號！\n");
}
void showNode(struct node *ptr){
    struct node *n;
    
    if(ptr->next == NULL){
        printf("串列內無資料\n");
    }
    else{
        printf("===========================\n");
        for(n = ptr->next; n != NULL; n = n->next){
            printf("編號：%d\t姓名：%s\t年資：%d\n", n->id, n->name, n->age);
        }
        printf("===========================\n");
    }
}
void freeNode(struct node *ptr){
    struct node *n, *p;
    for(n = ptr; n != NULL; ){
        p = n;
        n = n->next;
        free(p);
    }
}
 
