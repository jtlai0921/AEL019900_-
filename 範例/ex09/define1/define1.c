#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416		/* 宣告符號常數 */
#define AREA PI*r*r		/* 宣告數學公式 */
#define BEGIN_B {		/* 宣告符號替代 */
#define END_B }			/* 宣告符號替代 */
#define INPUT_MSG "請輸入圓形的半徑："		/* 宣告字串替代 */
#define OUTPUT_MSG "圓形的面積等於 %.2f\n"	/* 宣告格式替代 */
#define PAUSE system("PAUSE") 	/* 宣告指令替代 */

int main(int argc, char *argv[]) 
BEGIN_B 
	int r;
	printf(INPUT_MSG);
	scanf("%d",&r);
	printf(OUTPUT_MSG, AREA);
	PAUSE; 
	return 0;
END_B 
