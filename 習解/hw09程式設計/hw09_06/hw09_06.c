#include <stdio.h>
#include <stdlib.h>
#define TOTAL 56789
#if TOTAL > 50000	/**根據TOTAL不同的定義值，定義不同的DISCOUNT巨集值/ 
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
	printf("消費 %d 元折扣後實付 %.0f 元\n",TOTAL, TOTAL*DISCOUNT);
	system("PAUSE");
	return 0;
}
