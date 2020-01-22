#include <stdio.h>
#include <stdlib.h>

double avg (int, int);    /* 函式原型宣告 */ 

int main(int argc, char *argv[]) {
	int n1, n2;
	double average;
	printf("請連續輸入兩個整數(用空格隔開)：");
	scanf("%d %d", &n1, &n2) ;
	average=avg(n1, n2);      /* 有傳回值的函式呼叫 */ 
	printf("兩整數的平均值為 %.1f", average);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}

double avg(int n1, int n2) {   /* 被呼叫的函式定義主體 */ 
    double a;
    a = (n1 + n2)/2.0 ;
    return a;
}
 
