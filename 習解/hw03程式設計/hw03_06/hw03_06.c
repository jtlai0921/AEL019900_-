#include <stdio.h>
#include <stdlib.h>
#define RATE 0.0315
int main(int argc, char *argv[]) {
	int money = 1000000;
	double interest;
	interest = money + money * RATE * 3;
	printf("%d �� 3 �~��Q�����Q�M = %f ��\n", money, interest);
	/*�]���|���ǹL���誺�禡�A�ҥH�X�~�N���X���N�i�H*/
	interest = money * (1 + RATE) * (1 + RATE) * (1 + RATE);
	printf("%d �� 3 �~�ƧQ�����Q�M = %f ��\n", money, interest);	
	system("PAUSE");
	return 0;
}
