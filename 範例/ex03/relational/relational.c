#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a = 2, b = 3;
	printf("a = %d, b = %d a < b = %d\n", a, b, a < b);
	printf("a = %d, b = %d a >= b = %d\n", a, b, a >= b);
	printf("a = %d, b = %d\n", a, b);
	printf("++a == b = %d\n", ++a == b);
	printf("a = %d, b = %d\n", a, b);
	printf("a != b-- = %d\n", a != b--);
	printf("a = %d, b = %d\n", a, b);
	system("PAUSE");
	return 0;
}
