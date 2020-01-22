#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int k=4, m=1;
	int i, j;
	for (i=1; i<=5; i++) {
		for (j=1; j<=k; j++) {
			printf(" ");
		}
		for (j=1; j<=m; j++) {
			printf("*");
		}
		printf("\n");
		k=k-1;
		//m=m+1;
		m=2*i+1;
	} 
	
	printf("\n");
	system("PAUSE");
	return 0;
}
