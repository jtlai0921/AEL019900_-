#include <stdio.h>
#include <stdlib.h>

struct stru1{
    char c[4];
    int i;
    float f;
}stru_1;
struct stru2{
    char c;
    short int si;
    int i;
    float f;
}stru_2;
int main(int argc, char *argv[]) {
    printf("char���Ϊ��O����Ŷ�=%d\n", sizeof(char));
    printf("short int���Ϊ��O����Ŷ�=%d\n", sizeof(short int));
    printf("int���Ϊ��O����Ŷ�=%d\n", sizeof(int));
    printf("float���Ϊ��O����Ŷ�=%d\n", sizeof(float));
    printf("���cstru1���Ϊ��O����Ŷ�=%d\n", sizeof(stru_1));
    printf("���cstru2���Ϊ��O����Ŷ�=%d\n", sizeof(stru_2));
    system("PAUSE");
	return 0;
}
