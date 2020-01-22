#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 10
int stack[SIZE]={0};
int sp = -1;
int *ptr = stack;
void push(void){
    if(sp >= SIZE - 1)
        printf("\n堆疊已滿\n");
    else{
        sp ++;
        printf("     push資料=");
        scanf("%d", ptr);
        ptr ++;
        printf("\n");
    }
}

void pop(void){
    if(sp < 0)
        printf("\n堆疊中無資料\n");
    else{
        printf("     pop資料=%d\n", *--ptr);
        sp --;
    }
}

void list(void){
    int i, * iptr;
    if(sp < 0)
        printf("\n堆疊中無資料\n");
    else{
        iptr = stack;
        printf("堆疊內容="); 
        for(i = 0; i <= sp; i ++){
            printf(" %d ", *iptr++);
        }
        printf("\n 堆疊使用率 %d/%d\n", sp + 1, SIZE);
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
        printf("     請輸入選項...");
        
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
