#include <stdio.h>
#include <stdlib.h>

int G(int);
int K(int[], int);
int main(int argc, char *argv[]) {
    printf("G(3) = %d \n\n", G(3)) ; 
    system("PAUSE");
	return 0;
}

int K(int a[], int n){
	if(n>=0)
	    return (K(a,n-1)+a[n]);
    else
        return 0;
}

int G(int n){
	int a[]={5,4,3,2,1};
	return K(a,n);
}
