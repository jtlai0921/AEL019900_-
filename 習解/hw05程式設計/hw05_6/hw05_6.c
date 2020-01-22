#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int income;
	double tax;
	printf("請輸入您的綜合所得淨額： ");
	scanf("%d",&income) ;
	if (income<=540000) tax=0;
	if ((income>540000) && (income<=1210000)) tax=0.12*income;
	if ((income>1210000) && (income<=2420000)) tax=0.2*income;
	if ((income>2420000) && (income<=4530000)) tax=0.3*income;
	if ((income>4530000) && (income<=10310000)) tax=0.4*income;
	if (income>10310000) tax=0.45*income;
	printf("\n您所要繳交的所得稅額是： %.1f",tax);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
