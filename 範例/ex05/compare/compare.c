#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1,n2,max;
	printf("請連續輸入兩個整數(用空格區分): ");
	scanf("%d %d", &n1, &n2);
	max=(n1>n2) ? n1 : n2 ;
	printf("\n%d 和 %d 較大值為 %d", n1, n2, max);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
