#include <stdio.h>
#include <stdlib.h>

int F(int);
int main(int argc, char *argv[]) {
	printf("F(14) = %d \n\n", F(14));
	system("PAUSE");
	return 0;
}

int F(int n) {
	if (n<=4) {
	    return n;	
	} else {
		return n+F(n-3) ;
	}
}
