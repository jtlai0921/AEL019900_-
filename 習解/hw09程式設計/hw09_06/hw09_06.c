#include <stdio.h>
#include <stdlib.h>
#define TOTAL 56789
#if TOTAL > 50000	/**�ھ�TOTAL���P���w�q�ȡA�w�q���P��DISCOUNT������/ 
	#define DISCOUNT 0.82
#elif TOTAL > 20000
	#define DISCOUNT 0.85
#elif TOTAL > 10000
	#define DISCOUNT 0.88
#elif TOTAL > 5000
	#define DISCOUNT 0.9
#elif TOTAL > 2000
	#define DISCOUNT 0.95
#else
	#define DISCOUNT 1.0
#endif

int main(int argc, char *argv[]) {
	printf("���O %d ���馩���I %.0f ��\n",TOTAL, TOTAL*DISCOUNT);
	system("PAUSE");
	return 0;
}
