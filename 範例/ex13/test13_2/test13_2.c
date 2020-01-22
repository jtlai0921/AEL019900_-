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
        printf("  <1> �s�W���\n");
        printf("  <2> �R�����\n");
        printf("  <3> ��ܸ�Ʀ�C\n");
        printf("  <4> �����{��\n");
        printf("  �п�J1��4\n");
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
        printf("�t�m�O���饢�ѡI");
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
    printf("�п�J���u�s���G");
    scanf("%d", &new->id);
    printf("�п�J���u�m�W�G");
    scanf("%s", new->name);
    printf("�п�J���u�~��G");
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
    printf("�п�J�n�R�������u�s���G");
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
    printf("�d�L�����u�s���I\n");
}
void showNode(struct node *ptr){
    struct node *n;
    
    if(ptr->next == NULL){
        printf("��C���L���\n");
    }
    else{
        printf("===========================\n");
        for(n = ptr->next; n != NULL; n = n->next){
            printf("�s���G%d\t�m�W�G%s\t�~��G%d\n", n->id, n->name, n->age);
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
 
