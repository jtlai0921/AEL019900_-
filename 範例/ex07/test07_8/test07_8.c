#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, sum, arr[10];
    for(i=0; i<10; i=i+1)
        arr[i]=i;
    sum=0;
    for(i=1; i<9; i=i+1)
        sum = sum-arr[i-1]+arr[i]+ arr[i+1];
    printf("%d", sum);
	
	return 0;
}
