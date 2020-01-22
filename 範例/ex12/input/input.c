#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(int argc, char *argv[]) {
    char name[20];
    int score, i;
    
    printf("請輸入英文姓名：");
    fgets(name, sizeof(name), stdin);
    printf("請輸入英文成績：");
    scanf("%d", &score);
    i = strlen(name);
    name[i - 1] = '\0';
    printf("%s 你好！你的英文成績是%d\n", name, score);
    system("PAUSE");

	return 0;
}
