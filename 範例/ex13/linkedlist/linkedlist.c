#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name[12];
    struct ndoe *next;
};

int main(int argc, char *argv[]) {
    struct node *head, *ptr, *newptr;
    int i;
    /* ���� node 1 */
    newptr = (struct node*)malloc(sizeof(struct node));
    strcpy(newptr->name, "David");
    newptr->next = NULL;
    head = ptr = newptr;
    /* ���� node 2 */
    newptr = (struct node*)malloc(sizeof(struct node));
    strcpy(newptr->name, "Tom");
    newptr->next = NULL;
    ptr->next = newptr;
    ptr = newptr;
    /* ���� node 3 */
    newptr = (struct node*)malloc(sizeof(struct node));
    strcpy(newptr->name, "Jack");
    newptr->next = NULL;
    ptr->next = newptr;
    ptr = newptr;
    /* ��ܩҦ���� */
    ptr = head;
    i = 1;
    while(ptr != NULL){
        printf("\n node %d ==>�m�W�G%s\n", i ++, ptr->name);
        ptr = ptr->next;
    }
    printf("\n");
    system("PAUSE");
	return 0;
}
