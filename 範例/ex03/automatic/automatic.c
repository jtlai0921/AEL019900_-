#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float f = 5 / 2;
	printf("f = 5 / 2, f = %f\n", f);
	printf("5.5 / 2 = %f\n", 5.5 / 2);
	int i=2; short s=25; double d=2.5;
	f=2.5; 
	printf("(i + f) + ( s / d) = %f\n", (i + f) + ( s / d));
	system("PAUSE");	
	return 0;
}
