#include <stdio.h>
#include <stdlib.h>
#define SEX_TITLE(s) (s==0)?"�p�j":"����"
#define PASS(s) (s>=60)?"�ή�":"���ή�"
#define PRIZE(s) (s>=90)?"500��":(s>=80)?"200��":"���F�з�"
int main(int argc, char *argv[]) {
	int score=0, userSex=0;
	char name[20];
	printf("�п�J�m�W�G");
	scanf("%s", &name);
	printf("�п�J�ʧO�G(0=�k�ʡB1=�k��)");
	scanf("%d", &userSex);
	printf("%s%s�z�n�I�п�J���ơG", name, SEX_TITLE(userSex));
	scanf("%d", &score);
	printf("%s%s�z�����Z%s�I\n", name, SEX_TITLE(userSex), PASS(score));
	printf("�z�����Ǫ��G%s�I\n", PRIZE(score));
	system("PAUSE");
	return 0;
}
