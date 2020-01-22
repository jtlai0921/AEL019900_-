#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, j;               /* 陣列索引 */
    int hSum, vSum;         /* 暫存水平及垂直分績的總和  */
    int no[4]={1,2,3,4};    /* 編號 */
	int score[][3] = {{87,64,88},{93,72,86},{80,88,89},{79,91,90}};
	printf("\n 編號 \t 語文 \t 數理 \t 智力 \t 總分 ");
	printf("\n ========================================");
	for(i=0; i<4 ; i++) {
		printf("\n  %d ", no[i]);
		hSum = 0;
		for(j=0; j<3; j++) {
		    printf("\t  %d ", score[i][j]);
		    hSum += score[i][j];
		}
		printf("\t %d ", hSum);
	}
	printf("\n 平均 ");
	for(j=0; j<3 ; j++) {
		vSum=0;
		for(i=0; i<4; i++) {
			vSum+=score[i][j];
		}
		printf("\t %.1f ", vSum/4.0);
	}
    printf("\n\n");
    system("PAUSE");
	return 0;
}
