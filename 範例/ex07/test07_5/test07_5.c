#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int A[5], B[5], i, C;
	for(i=1; i<=4; i=i+1){
		A[i]=2+i*4;
		B[i]=i*5;
	}
	C=0;
    for(i=1; i<=4; i=i+1){
    	printf("\n %d    %d",A[i], B[i]);
		if(B[i] > A[i]) {
    		C=C+(B[i]%A[i]);
		} else {
			C=1;
		}
		printf("  %d", C);
	}
 	printf("\n %d", C);	
	
	printf("\n\n");
	system("PAUSE");
    return 0;
}
