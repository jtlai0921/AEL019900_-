#include <stdio.h>
#include <stdlib.h>
int g(int);
int main(int argc, char *argv[]) {
	printf(" g(13) = %d \n\n", g(13));
	system("PAUSE");
	return 0;
}

int g(int a) {
	if (a>1) {
		return g(a-2)+3;
	}
	return a;
}
