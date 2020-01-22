#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n[9][9]={0};
	int i, j;
	
	for (i=0 ; i<9 ; i++) {
		for (j=0 ; j<9 ; j++)
			n[i][j] = (i+1)*(j+1);
	}
	for (i=0 ; i<9 ; i++) {
		for (j=0 ; j<9 ; j++) {
			printf(" %2d ", n[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}

