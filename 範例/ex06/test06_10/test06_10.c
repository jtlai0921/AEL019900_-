#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x=0, n=5;
	int i, j;
	for (i=1; i<=n; i=i+1) {
	    for (j=1; j<=n; j=j+1) {
	    	if ((i+j) == 2) x=x+2;
	    	if ((i+j) == 3) x=x+3;
	    	if ((i+j) == 4) x=x+4;
		}
	}
	printf("%d\n", x);
	
	system("PAUSE")	;
	return 0;
}
