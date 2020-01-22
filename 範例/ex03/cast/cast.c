#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	unsigned char x = 255;
	printf("++x = %d\n", ++x);
	signed char y =127;
	printf("++y = %d\n", ++y);
	unsigned char x2 = 255;	
	int x3 = (int) x2;
	printf("++x3 = %d\n", ++x3);
	double z = 3.99;
	printf("z = %f, z * 2 = %f\n", z, z * 2);
	printf("(int) z = %d, (int) z * 2 = %d\n",(int) z,(int) z * 2);
	printf("x2=%d, x2 / 2=%d, (float)a/2=%f\n",x2, x2 / 2, (float) x2 / 2);
	system("PAUSE");
	return 0;
}
