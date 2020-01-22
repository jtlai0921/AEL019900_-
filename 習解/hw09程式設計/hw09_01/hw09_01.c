#include <stdio.h>
#include <stdlib.h>
#define ADD(x, y) ((x)+(y))
#define SUB(x, y) ((x)-(y))
#define MUL(x, y) ((x)*(y))
#define DIV(x, y) ((y)==0?0:(double)(x)/(y))	/*利用三元運算子來避免除數為0所產生的錯誤*/ 
int main(int argc, char *argv[]) {
	int x=15, y=4;
	printf("%d + %d = %d\n",x,y,ADD(x,y));
	printf("%d - %d = %d\n",x,y,SUB(x,y));
	printf("%d * %d = %d\n",x,y,MUL(x,y));
	printf("%d / %d = %f\n",x,y,DIV(x,y));	
	system("PAUSE");
	return 0;
}
