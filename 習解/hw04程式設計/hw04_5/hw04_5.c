#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int score1,score2,score3;
	float avg;
	printf("�п�J�Ĥ@���p�����Z�G ");
	scanf("%d",&score1);
	printf("�п�J�ĤG���p�����Z�G ");
	scanf("%d",&score2);
	printf("�п�J�ĤT���p�����Z�G ");
	scanf("%d",&score3);
	avg=(float)(score1+score2+score3)/3;
	printf("\n���Z1\t���Z2\t���Z3\t����\n");
	printf("-------------------------------------\n");
	printf("%d\t\%d\t%d\t%.1f\n\n",score1,score2,score3,avg);
	
	system("PAUSE");
	return 0;
}
