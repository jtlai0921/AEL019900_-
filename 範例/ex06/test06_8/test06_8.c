#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, a=5;
    for (i=0; i<20; i=i+1) {
        i = i + a; 
        printf("%d  ", i);
    }

	printf("\n\n");
	system("PAUSE");
	return 0;
}
