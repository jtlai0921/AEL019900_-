#include <stdio.h>
#include <stdlib.h>

struct date{
    int year;
    int month;
    int day;
};
struct ename{
    char last[12];
    char first[12];
};

int main(int argc, char *argv[]) {
    struct person{
        char id[11];
        char cname[10];
        struct date birth;
        struct ename name;
    };
    struct person p = {"Z123456789", "李四", {2001,2,2}, {"Lee", "Sam"}};
    printf("身分證字號：%s\n", p.id);
    printf("姓名：%s\n", p.cname);
    printf("生日：%d/%d/%d\n", p.birth.year - 1911, p.birth.month, p.birth.day);
    printf("英文姓名：%s %s\n", p.name.first, p.name.last);
    system("PAUSE");
	return 0;
}
