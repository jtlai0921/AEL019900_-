#include <stdio.h>
#include <stdlib.h>
#define SEX 1
#if SEX == 1	/*�ھ�SEX�����ȡA���O�w�q���P��MSG_SEX�MWEIGHT��������*/ 
	#define MSG_SEX "�k��"
	#define WEIGHT(h) (((h)-80)*0.7)
#else
	#define MSG_SEX "�k��"
	#define WEIGHT(h) (((h)-70)*0.6)
#endif
int main(int argc, char *argv[]) {
	printf("%d ����%s���з��魫�G %.2f\n",172,MSG_SEX,WEIGHT(172));
	system("PAUSE");
	return 0;
}
