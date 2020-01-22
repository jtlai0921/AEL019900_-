#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=2, x=3;
	int N=65536;
	while (i<=N) {
		i = i*i*i;
		x = x+1;
	}
	printf("%d   %d \n", i ,x);
	
	printf("\n");
	system("PAUSE");
	return 0;
}
