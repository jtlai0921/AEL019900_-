#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	for(i=1; i<=5; i++) {
		printf("\n �� %d �Ӷü� : %d", i, rand());
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
