#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	for (i=1; i<=25; i+=2){
		printf(" %d", i);
		if (i<25) printf(",");
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
