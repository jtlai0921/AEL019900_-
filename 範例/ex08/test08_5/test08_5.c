#include <stdio.h>
#include <stdlib.h>

int f(int);
int g(int);
int main(int argc, char *argv[]) {
	printf("g(4) = %d \n\n", g(4));
	
	system("PAUSE");
	return 0;
}

int f(int n) {
	if (n>3) {
		return 1;
	} else if(n==2) {
	    return 3+f(n+1);
	} else {
		return 1+f(n+1);
	}
}

int g(int n) {
	int i, j=0;
	for(i=1; i<=n-1; i=i+1) {
		j = j + f(i);
	}
	return j;
}


