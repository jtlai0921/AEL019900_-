#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char name[5][20] = {"Mary","�i�T","Tom Cruise","�Où ������ �w�w��","���j�P"};
	int sNum;
	for(sNum=0; sNum<5; sNum++) {
		printf("\n name[%d] = %s", sNum, name[sNum]);
	}
    printf("\n\n");
    system("PAUSE");
	return 0;
}
