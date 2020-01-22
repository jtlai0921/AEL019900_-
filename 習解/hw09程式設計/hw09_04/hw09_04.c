#include <stdio.h>
#include <stdlib.h>
#define SEX 1
#if SEX == 1	/*根據SEX巨集值，分別定義不同的MSG_SEX和WEIGHT的巨集值*/ 
	#define MSG_SEX "男性"
	#define WEIGHT(h) (((h)-80)*0.7)
#else
	#define MSG_SEX "女性"
	#define WEIGHT(h) (((h)-70)*0.6)
#endif
int main(int argc, char *argv[]) {
	printf("%d 公分%s的標準體重： %.2f\n",172,MSG_SEX,WEIGHT(172));
	system("PAUSE");
	return 0;
}
