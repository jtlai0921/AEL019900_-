#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, j;               /* �}�C���� */
    int hSum, vSum;         /* �Ȧs�����Ϋ������Z���`�M  */
    int no[4]={1,2,3,4};    /* �s�� */
	int score[][3] = {{87,64,88},{93,72,86},{80,88,89},{79,91,90}};
	printf("\n �s�� \t �y�� \t �Ʋz \t ���O \t �`�� ");
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
	printf("\n ���� ");
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
