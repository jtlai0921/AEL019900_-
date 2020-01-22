#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main(int argc, char *argv[]) {
	int k, res;
	res = fact(5);
	printf(" 5! = %d \n", res);
	k = 6;
    printf(" %d! = %d \n", k, fact(k));
    
    printf("\n");
    system("PAUSE");
	return 0;
}
 
int fact(int n) {
	if(n==1) {
	    return 1;	
	} else {
		return n * fact(n-1);
	}
} 
