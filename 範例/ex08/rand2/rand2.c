#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int i;
	srand((unsigned) time(NULL));
	for(i=1; i<=5; i++) {
        printf("\n ²Ä %d ­Ó¶Ã¼Æ : %d", i, rand()%100+1);
    }

    printf("\n\n");
    system("PAUSE");
	return 0;
}
