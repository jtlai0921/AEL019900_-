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
    
    printf("請輸入學生人數：");
    scanf("%d", &num);
    ptr = (struct data *)malloc(num * sizeof(struct data));
    for(i = 0; i < num; i ++){
        printf("請輸入姓名：");
        scanf("%s", ptr[i].name);
        printf("請輸入學號：");
        scanf("%s", ptr[i].id);
        printf("請輸入入學成績：");
        scanf("%d", &ptr[i].score);
    }
    printf("  姓名\t學號\t入學成績\n"); 
    for(i = 0; i < num; i ++){
        printf("%s\t%s\t%d\n", ptr[i].name, ptr[i].id, ptr[i].score);
    }
    
    free(ptr);
    system("PAUSE");
	return 0;
}
