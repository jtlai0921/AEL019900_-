#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int income;
	double tax;
	printf("�п�J�z����X�ұo�b�B�G ");
	scanf("%d",&income) ;
	if (income<=540000) tax=0;
	if ((income>540000) && (income<=1210000)) tax=0.12*income;
	if ((income>1210000) && (income<=2420000)) tax=0.2*income;
	if ((income>2420000) && (income<=4530000)) tax=0.3*income;
	if ((income>4530000) && (income<=10310000)) tax=0.4*income;
	if (income>10310000) tax=0.45*income;
	printf("\n�z�ҭnú�檺�ұo�|�B�O�G %.1f",tax);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
