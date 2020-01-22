#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int p=0;
	int i=4;
	while (i >= 1) {
		p = 10 - 2 *i;
		printf("%d", p);
		i = i - 1;
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
