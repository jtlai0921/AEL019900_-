#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, hold, n=10;
	int a[]={0,1,2,3,4,5,6,7,8,9};
	for(i=0; i<=n-2; i=i+1) {
		hold = a[i];
		a[i] = a[i+1];
		a[i+1] = hold;
	}
	printf("\n");
	for(i=0; i<=n-1; i++) {
		printf(" %d ", a[i]);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
