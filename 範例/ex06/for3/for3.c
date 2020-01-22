#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum=0;
	printf("\n");
	for(n=1; n<=10; n++){
		printf(" %d", n);
		sum += n;
		if (n<10) printf(" +");
	}
	printf(" = %d \n\n", sum);
	
	system("PAUSE");
	return 0;
}
