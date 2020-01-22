#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1,n2;
	printf("**** ―ㄢタ俱计程そ计 ****\n");
	printf("\n硈尿块ㄢタ俱计(ノ筳秨)");
	scanf("%d %d", &n1, &n2); 
	int max,min,rem;
	if (n1>n2) {
		max=n1; 
		min=n2;
	} else {
		max=n2;
		min=n1;
	}
	while (max%min != 0) {
		rem = max%min;
		max=min;
		min=rem;
	}
	printf("\n程そ计 %d\n\n", min);
	
	system("PAUSE");
	return 0;
}
