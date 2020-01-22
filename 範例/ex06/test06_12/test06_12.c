#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	for (i=0; i<=10; i=i+1) {
		printf("%d  ", i);
		i=i+1;
	}
	printf("\n");
	return 0;
}
