#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j;
	int seat[][4]={{10,20,30,40},{11,22,33,44},{-5,-9,-3,-7}};
	printf(" 讀取二維陣列seat的元素內容：\n\n");
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf(" seat[%d][%d]=%d  ", i, j, seat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
