#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 10
int stack[SIZE]={0};
int sp = -1;
int *ptr = stack;
void push(void){
    if(sp >= SIZE - 1)
        printf("\n���|�w��\n");
    else{
        sp ++;
        printf("     push���=");
        scanf("%d", ptr);
        ptr ++;
        printf("\n");
    }
}

void pop(void){
    if(sp < 0)
        printf("\n���|���L���\n");
    else{
        printf("     pop���=%d\n", *--ptr);
        sp --;
    }
}

void list(void){
    int i, * iptr;
    if(sp < 0)
        printf("\n���|���L���\n");
    else{
        iptr = stack;
        printf("���|���e="); 
        for(i = 0; i <= sp; i ++){
            printf(" %d ", *iptr++);
        }
        printf("\n ���|�ϥβv %d/%d\n", sp + 1, SIZE);
    }
}
int main(int argc, char *argv[]) {
    char choice;
    while(1){
        printf("\n=====================\n");
        printf("     (1) Push\n");
        printf("     (2) Pop\n");
        printf("     (3) List Stack\n");
        printf("     (0) Quit\n");
        printf("     �п�J�ﶵ...");
        
        choice = getche();
        printf("\n");
        switch(choice){
            case '1':
                push();
                break;
            case '2':
                pop();
                break;
            case '3':
                list();
                break;
            case '0':
                printf("\n");
                return 0;
        }
    }    
}
