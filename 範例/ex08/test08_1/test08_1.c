#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void getRnd(int[], int, int, int); 

int main(int argc, char *argv[]) {
    int rNum=7, min=1, max=49;
	int data[rNum];
	getRnd(data, rNum, min, max);           /* �I�s���ͤ����ƶüƨ禡 */ 
	printf(" 1~49 ���� 7 �Ӥ����ƪ���ơG");
	int i;
	for(i=0; i<rNum; i++) {
	    printf("%d  ", data[i]);
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

void getRnd(int a[], int rn, int n1, int n2) {
   	if ((rn>n2-n1+1)||(n1>n2)) {
		printf("�ǤJ�禡��ƿ��~�I\n");
		return; 
	}
	int i, n=0, rnd, repeat;
	srand((unsigned) time(NULL));
	do {
		repeat=0;
		rnd=rand()%(n2-n1+1)+n1;     /* �H������ n1~n2��������� */
		for (i=0; i<rn; i++){        /* �ˬd���ͪ��üƦ��L���� */
			if (a[i] == rnd) repeat=1;
		}
		if (repeat == 0) {          /* �Y���ͪ��üƨS������,��J�}�C�� */
		    a[n]=rnd;
			n++;
	    }
	} while(n<rn);
}
