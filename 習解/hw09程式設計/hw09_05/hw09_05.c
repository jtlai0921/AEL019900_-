#include <stdio.h>
#include <stdlib.h>
#define CTOF 1
int main(int argc, char *argv[]) {
	double g =128;
	#if CTOF ==1	/*�ھ�CTOF�����ȡA���椣�P���ԭz*/ 
		printf("��� %.1f ����ؤ󵥩� %.1f ��\n",g ,g*9/5+32);
	#else
		printf("�ؤ� %.1f ������󵥩� %.1f ��\n",g ,(g-32)*5/9);	
	#endif
	system("PAUSE");
	return 0;
}
