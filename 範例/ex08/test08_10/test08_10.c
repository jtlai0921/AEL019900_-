#include <stdio.h>
#include <stdlib.h>

int s=1;

void add(int a) {
	int s=6;
	for(  ; a>=0; a=a-1) {
		printf("%d,", s);
		s++;
		printf("%d,", s);
	}
}

int main(int argc, char *argv[]) {
	printf("%d,", s);
	add(s);
	printf("%d,", s);
	s=9;
	printf("%d,", s);
	
	return 0;
}
