#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int s;
	for (s=100; s>=0; s--) {
		printf("%d :\t",s);
	    if (s >= 90) {
            printf("A");
        } else if (s >= 80) {
            printf("B");
        } else if (s > 60) {
            printf("D");
        } else if (s > 70) {
            printf("C");
        } else {
            printf("F"); 
        }
	    printf("\n");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

