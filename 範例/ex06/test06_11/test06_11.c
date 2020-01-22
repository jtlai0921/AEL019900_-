#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n =22;
	printf("%d  ", n);
	while (n!=1) {
		if ((n%2)==1) {
			n=3*n+1;
		} else {
			n=n/2;
		}
		printf("%d  ", n);
	}
	return 0;
}
