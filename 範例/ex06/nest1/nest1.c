#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j;
	for(i=1; i<=9; i++) {
		for(j=i; j>0; j--) {
			printf("%d ", j);
		}  
		printf("\n");
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
