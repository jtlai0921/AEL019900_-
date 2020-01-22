#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	for(i=1; i<=5; i++) {
		printf("\n ²Ä %d ­Ó¶Ã¼Æ : %d", i, rand());
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
