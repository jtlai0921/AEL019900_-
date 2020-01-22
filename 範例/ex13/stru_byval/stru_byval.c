#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct scores{
    char no[8];
    int score;
}John={"08101", 40};

void func(struct scores a){
    a.score = sqrt(a.score) * 10;
    printf("傳值呼叫函式內\n");
    printf("學號%s成績=%d\n", a.no, a.score);
}
int main(int argc, char *argv[]) {
    printf("傳值呼叫前\n");
    printf("學號%s成績=%d\n", John.no, John.score);
    func(John);
    printf("傳值呼叫後\n");
    printf("學號%s成績=%d\n", John.no, John.score);
    system("pause");
	return 0;
}
