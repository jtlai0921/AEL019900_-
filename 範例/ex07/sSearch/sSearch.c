#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[16] = {12,4,65,28,100,9,20,79,48,72,61,96,88,38,16,22};
	int i, fNum, find=0;    /* ��find=1��,�N���Ʀ����  */ 
	printf(" �`�Ƿj�M�k\n");
    printf("\n �п�J���j�M�����(0~100)�G ");
	scanf("%d", &fNum);
	for(i=0; i<16; i++) {
		if(a[i] == fNum) {
			printf("\n ��� %d �b�}�C���� a[%d] ��", fNum, i);
			find=1;
			break;
		}
	}
	if (find != 1) printf("\n ��� %d ��Ƥ��b�}�C��", fNum);
	
	printf("\n\n");
    system("PAUSE");
    return 0;
}

