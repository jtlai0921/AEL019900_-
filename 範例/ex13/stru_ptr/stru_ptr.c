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
    printf(" === 學籍登錄 ===\n");
    for(i = 0; i < SIZE; i++, ptr++){
        printf("第%2d學生學號=", i+1);
        gets((*ptr).no);
        printf("第%2d學生姓名=", i+1);
        gets(ptr->name);
        printf("第%2d學生成績=", i+1);
        gets(keyin);
        ptr->score = atoi(keyin);
    }
    ptr = p;
    printf(" === 學生資料查詢 ===\n學號=");
    gets(keyin);
    for(i = 0; i < SIZE; i++, ptr++){
        if(strcmp(ptr->no, keyin) == 0){
            flag = i;
            break;
        }
    }
    if(flag == -1)
        printf("查無資料！\n");
    else{
        printf("學號=%s\t", p[flag].no);
        printf("姓名=%s\t", (*ptr).name);
        printf("成績=%d\n", ptr->score);
    } 
    system("pause");
	return 0;
}
