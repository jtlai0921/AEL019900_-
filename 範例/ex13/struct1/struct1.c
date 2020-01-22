#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char no[8];
    char name[16];
    int age;
}John = {"08101", "張三", 17};
struct student Mary = {"08301", "阿美", 17};
int main(int argc, char *argv[]) {
    struct student Leo, Amy, Amy2;
    printf("Leo學籍資料\n");
    printf("請輸入學號：");
    gets(Leo.no);
    printf("請輸入姓名：");
    scanf("%s", Leo.name);
    printf("請輸入年齡：");
    scanf("%d", &Leo.age);
    
    strcpy(Amy.no, "08201");
    strcpy(Amy.name, "小美");
    Amy.age = 16; 
    Amy2 = Amy;
    
    printf("     學籍資料\n");
    printf("姓名    學號    年齡\n");
    printf("%s\t%s\t%d\n", John.name, John.no, John.age);
    printf("%s\t%s\t%d\n", Mary.name, Mary.no, Mary.age);
    printf("%s\t%s\t%d\n", Leo.name, Leo.no, Leo.age);
    printf("%s\t%s\t%d\n", Amy.name, Amy.no, Amy.age);
    printf("%s\t%s\t%d\n", Amy2.name, Amy2.no, Amy2.age);
    system("PAUSE");
	return 0;
}
