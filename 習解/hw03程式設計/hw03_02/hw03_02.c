#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 10, y = 4;
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	/*���k�p��ɾ��x�By�n�j���૬���B�I�ơA�~��p��X���T���ȡC*/ 
	printf("%d / %d = %f\n", x, y, (float)x / (float)y);/*�B�I�ƭn��%f�~�ॿ�T����ܼƭ�*/
	printf("%d %% %d = %d\n", x, y, x % y); 
	system("PAUSE");
	return 0;
}
