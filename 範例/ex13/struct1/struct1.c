#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char no[8];
    char name[16];
    int age;
}John = {"08101", "�i�T", 17};
struct student Mary = {"08301", "����", 17};
int main(int argc, char *argv[]) {
    struct student Leo, Amy, Amy2;
    printf("Leo���y���\n");
    printf("�п�J�Ǹ��G");
    gets(Leo.no);
    printf("�п�J�m�W�G");
    scanf("%s", Leo.name);
    printf("�п�J�~�֡G");
    scanf("%d", &Leo.age);
    
    strcpy(Amy.no, "08201");
    strcpy(Amy.name, "�p��");
    Amy.age = 16; 
    Amy2 = Amy;
    
    printf("     ���y���\n");
    printf("�m�W    �Ǹ�    �~��\n");
    printf("%s\t%s\t%d\n", John.name, John.no, John.age);
    printf("%s\t%s\t%d\n", Mary.name, Mary.no, Mary.age);
    printf("%s\t%s\t%d\n", Leo.name, Leo.no, Leo.age);
    printf("%s\t%s\t%d\n", Amy.name, Amy.no, Amy.age);
    printf("%s\t%s\t%d\n", Amy2.name, Amy2.no, Amy2.age);
    system("PAUSE");
	return 0;
}
