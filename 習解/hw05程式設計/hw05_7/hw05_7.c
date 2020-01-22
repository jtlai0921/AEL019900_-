#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int deposit;
	float rate;
	char grade;
	printf("輸入存款金額： ");
	scanf("%d",&deposit);
	rate = (deposit>=100000) ? 4.5 : 2.2;
	printf("\n利率為： %.1f%%",rate);
	grade = (deposit>=100000) ? 'A' : (((deposit<100000)&&(deposit>=50000)) ? 'B' : 'C') ;
	printf("\n會員等級是： %c",grade);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
