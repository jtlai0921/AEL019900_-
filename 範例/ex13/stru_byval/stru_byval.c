#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct scores{
    char no[8];
    int score;
}John={"08101", 40};

void func(struct scores a){
    a.score = sqrt(a.score) * 10;
    printf("�ǭȩI�s�禡��\n");
    printf("�Ǹ�%s���Z=%d\n", a.no, a.score);
}
int main(int argc, char *argv[]) {
    printf("�ǭȩI�s�e\n");
    printf("�Ǹ�%s���Z=%d\n", John.no, John.score);
    func(John);
    printf("�ǭȩI�s��\n");
    printf("�Ǹ�%s���Z=%d\n", John.no, John.score);
    system("pause");
	return 0;
}
