#include <stdio.h>
#include <stdlib.h>
#define CIRCLE 1
#if CIRCLE == 1	/*�ھ�CIRCLE�����w�q�ȡA�өw�q���P��AREA����*/ 
	#define AREA(a) (3.14*(a)*(a))
	#define MSG "��Υb�|�G"
#else
	#define AREA(a) ((a)*(a))
	#define MSG "���������G"
#endif

int main(int argc, char *argv[]) {
	int x;	
	printf("�п�J%s",MSG);
	scanf("%d",&x);
	#if CIRCLE == 1	/*�]���ԭz�����e���P�A�ҥH�α��󦡽sĶ*/
		printf("��έ��n����G%.2f\n",AREA(x));
	#else
		printf("����έ��n����G%d\n",AREA(x));	
	#endif
	system("PAUSE");
	return 0;
}
