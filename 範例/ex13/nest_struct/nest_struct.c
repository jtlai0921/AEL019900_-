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
    struct person p = {"Z123456789", "���|", {2001,2,2}, {"Lee", "Sam"}};
    printf("�����Ҧr���G%s\n", p.id);
    printf("�m�W�G%s\n", p.cname);
    printf("�ͤ�G%d/%d/%d\n", p.birth.year - 1911, p.birth.month, p.birth.day);
    printf("�^��m�W�G%s %s\n", p.name.first, p.name.last);
    system("PAUSE");
	return 0;
}
