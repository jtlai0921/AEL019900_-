#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int score1,score2,score3;
	float avg;
	printf("請輸入第一次計概成績： ");
	scanf("%d",&score1);
	printf("請輸入第二次計概成績： ");
	scanf("%d",&score2);
	printf("請輸入第三次計概成績： ");
	scanf("%d",&score3);
	avg=(float)(score1+score2+score3)/3;
	printf("\n成績1\t成績2\t成績3\t平均\n");
	printf("-------------------------------------\n");
	printf("%d\t\%d\t%d\t%.1f\n\n",score1,score2,score3,avg);
	
	system("PAUSE");
	return 0;
}
