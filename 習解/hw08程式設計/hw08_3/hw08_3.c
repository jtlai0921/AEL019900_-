#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp(int, int, float);
int main(int argc, char *argv[]) {
    int money, year;
	float rate, perRate;
	printf("== 複利率本利和試算 ==\n");
	printf(" 請輸入本金：");
	scanf("%d", &money);
	printf(" 請輸入年利率(％)：");
	scanf("%f", &rate);
	printf(" 幾年後領回：");
	scanf("%d", &year); 
	perRate=rate/100;
	printf("\n");
	printf(" *** %d年後領回本利和：%d \n\n", year, comp(money, year, perRate));
   	system("PAUSE");	
   	return 0;
}

int comp(int vm, int vy, float vr)	{
	return vm*pow(1+vr/12, vy*12);
} 

