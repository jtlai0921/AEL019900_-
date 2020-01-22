#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, b[100], a[100];
	
	for(i=1; i<=100; i=i+1) {
		b[i]=i;
	}
	a[0]=0;
	for(i=1; i<=100; i=i+1) {
		a[i]=b[i]+a[i-1];
	}
  
  	printf("%d\n" ,a[29]);
	printf("%d\n" ,a[30]);
  	printf("%d\n" ,a[49]);
  	printf("%d\n" ,a[50]);
  	printf("%d\n" ,a[50]-a[30]);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
