#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch='A';
	int n=1, m;
	do {
		m=n;
		do {
			printf(" %c", ch);
			ch++;
			m--;
		} while(m>0);
		printf("\n");
		n=n+2;
	} while(ch<'Z');
	
	printf("\n");
	system("PAUSE");
	return 0;
}
