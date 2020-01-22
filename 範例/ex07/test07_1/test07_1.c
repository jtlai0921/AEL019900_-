#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(int argc, char *argv[]) {
	char name[MAX][10];
	int score[MAX][2];
	float avg[MAX];
	
	int i;
	for(i=0; i<MAX; i++) {
	    printf("\n 輸入學生姓名：");
		scanf("%s", name[i]);
		printf(" 輸入國文,英語成績(用空格隔開)：");
		scanf("%d %d", &score[i][0], &score[i][1]);
	}

	for(i=0; i<MAX; i++) {
		avg[i]=(score[i][0]+score[i][1])/2.0;
	}
	
	int iLoop, j, ft, it;
	char st[10];
	for(iLoop=1; iLoop<MAX; iLoop++) {
        for(j=0; j<(MAX-iLoop); j++) { 
            if (avg[j] < avg[j+1]) {
                ft=avg[j]; avg[j]=avg[j+1]; avg[j+1]=ft;
                it=score[j][0]; score[j][0]=score[j+1][0]; score[j+1][0]=it;
                it=score[j][1]; score[j][1]=score[j+1][1]; score[j+1][1]=it;
                strcpy(st, name[j]); strcpy(name[j],name[j+1]); strcpy(name[j+1], st);
            }
        }
    }

	printf("\n\n 姓名\t\t國文\t英文\t平均");
	printf("\n =====================================");
	for (i=0; i<MAX; i++) {
		printf("\n %s\t\t%d\t%d\t%5.1f", name[i], score[i][0], score[i][1], avg[i]);
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}

