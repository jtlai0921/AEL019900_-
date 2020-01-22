#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2, LCM, GCD;
	int max, min, rem;
	printf("*** ―ㄢ俱计程そ计(GCD)㎝程そ计(LCM) ***");
	printf("\n\n 叫块ㄢタ俱计(ノ筳秨)");
	scanf("%d %d",&num1, &num2) ;

	if(num1>num2) {
		max=num1;
		min=num2;
	} else {
		max=num2;
		min=num1;
	}

	while(max%min != 0) {
		rem=max%min;
		max=min;
		min=rem;
	}
	GCD=min;
	LCM=num1*num2/GCD;
	
	printf("\n 璸衡挡狦"); 
	printf("\n %d , %d 程そ计(GCD) %d", num1, num2, GCD);
	printf("\n %d , %d 程そ计(LCM) %d", num1, num2, LCM);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
