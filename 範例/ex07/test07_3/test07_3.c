#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, X[10]={0};
	for(i=0; i<10; i=i+1) {
		scanf("%d", &X[(i+2)%10]);
	}
	
	printf("\n");
	for (i=0; i<10; i++) {
		printf(" %d ", X[i]);
	}

	return 0;
}

