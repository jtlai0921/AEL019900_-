#include <stdio.h>
#include <stdlib.h>

void printChar(char ch, int cNum) {
	int i;
	for (i=1; i<=cNum; i++) {
		printf("%c", ch);
	}
	printf("\n");
	return;
}

int main(int argc, char *argv[]) {
	char c1='A';
	int n1=12;
	printChar(c1, n1);       /* 實引數使用變數 */ 
	printChar('$', 15);      /* 實引數使用常值 */ 
	printChar(c1+1, n1+5);   /* 實引數使用運算式 */ 
	
	printf("\n");
	system("PAUSE");
	return 0;
}


