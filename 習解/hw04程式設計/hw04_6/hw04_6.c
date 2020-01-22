#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float f1=33.3;
	int n1=3;

	printf("\n%.1f + %d = %.1f",f1,n1,f1+n1);
	printf("\n%.1f - %d = %.1f",f1,n1,f1-n1);
	printf("\n%.1f * %d = %.1f",f1,n1,f1*n1);
	printf("\n%.1f / %d = %.1f\n\n",f1,n1,f1/n1);
	
	system("PAUSE");
	return 0;
}
