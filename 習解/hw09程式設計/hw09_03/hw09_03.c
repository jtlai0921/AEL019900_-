#include <stdio.h>
#include <stdlib.h>
#include "average.h"	/*�t�Javerage.h�ۭq���Y��*/ 
int main(int argc, char *argv[]) {
	int a=12,b=27,c=7,d=59;
	printf("%d�B%d�������Ƭ� %f\n",a,b,AVERAGE2(a,b));
	printf("%d�B%d�B%d�������Ƭ� %f\n",a,b,c,AVERAGE3(a,b,c));
	printf("%d�B%d�B%d�B%d�������Ƭ� %f\n",a,b,c,d,AVERAGE4(a,b,c,d));	
	system("PAUSE");
	return 0;
}
