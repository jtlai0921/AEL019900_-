#include <stdio.h>
#include <stdlib.h>
#define SEX_TITLE(s) (s==0)?"小姐":"先生"
#define PASS(s) (s>=60)?"及格":"不及格"
#define PRIZE(s) (s>=90)?"500元":(s>=80)?"200元":"未達標準"
int main(int argc, char *argv[]) {
	int score=0, userSex=0;
	char name[20];
	printf("請輸入姓名：");
	scanf("%s", &name);
	printf("請輸入性別：(0=女性、1=男性)");
	scanf("%d", &userSex);
	printf("%s%s您好！請輸入分數：", name, SEX_TITLE(userSex));
	scanf("%d", &score);
	printf("%s%s您的成績%s！\n", name, SEX_TITLE(userSex), PASS(score));
	printf("您的獎學金：%s！\n", PRIZE(score));
	system("PAUSE");
	return 0;
}
