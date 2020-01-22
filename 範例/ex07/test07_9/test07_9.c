#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//int A[]={3,15,8,9,1,34,26};
 	int A[]={10,10,10,10,10,10,10 };
	int p=A[0], q=A[0] ;
	int i;
	for(i=0; i<7; i=i+1) {
		if(A[i]>p) p=A[i];
     	if(A[i]<q) q=A[i];
	}
	
	printf("%d   %d",q ,p);
	
	
	return 0;
}
