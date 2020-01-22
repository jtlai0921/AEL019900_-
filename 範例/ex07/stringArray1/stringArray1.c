#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char name[5][20] = {"Mary","張三","Tom Cruise","保羅 托馬斯 安德森","李大同"};
	int sNum;
	for(sNum=0; sNum<5; sNum++) {
		printf("\n name[%d] = %s", sNum, name[sNum]);
	}
    printf("\n\n");
    system("PAUSE");
	return 0;
}
