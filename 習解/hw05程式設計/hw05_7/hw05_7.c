#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int deposit;
	float rate;
	char grade;
	printf("��J�s�ڪ��B�G ");
	scanf("%d",&deposit);
	rate = (deposit>=100000) ? 4.5 : 2.2;
	printf("\n�Q�v���G %.1f%%",rate);
	grade = (deposit>=100000) ? 'A' : (((deposit<100000)&&(deposit>=50000)) ? 'B' : 'C') ;
	printf("\n�|�����ŬO�G %c",grade);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
