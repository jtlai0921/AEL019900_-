#include <stdio.h>
#include <stdlib.h>
#define CTOF 1
int main(int argc, char *argv[]) {
	double g =128;
	#if CTOF ==1	/*根據CTOF巨集值，執行不同的敘述*/ 
		printf("攝氏 %.1f 度轉華氏等於 %.1f 度\n",g ,g*9/5+32);
	#else
		printf("華氏 %.1f 度轉攝氏等於 %.1f 度\n",g ,(g-32)*5/9);	
	#endif
	system("PAUSE");
	return 0;
}
