#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp(int, int, float);
int main(int argc, char *argv[]) {
    int money, year;
	float rate, perRate;
	printf("== �ƧQ�v���Q�M�պ� ==\n");
	printf(" �п�J�����G");
	scanf("%d", &money);
	printf(" �п�J�~�Q�v(�H)�G");
	scanf("%f", &rate);
	printf(" �X�~���^�G");
	scanf("%d", &year); 
	perRate=rate/100;
	printf("\n");
	printf(" *** %d�~���^���Q�M�G%d \n\n", year, comp(money, year, perRate));
   	system("PAUSE");	
   	return 0;
}

int comp(int vm, int vy, float vr)	{
	return vm*pow(1+vr/12, vy*12);
} 

