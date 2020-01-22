#include <stdio.h>
#include <stdlib.h>

int fun(int[], int);
int main(int argc, char *argv[]) {
	int arr[10] = {1,3,9,2,5,8,4,9,6,7};
	printf(" fun(arr, 10) = %d  \n\n", fun(arr, 10));
	system("PAUSE");
	return 0;
}

int fun(int a[], int n) {
    int i, index=0;
    for(i=1; i<=n-1; i++) {
        if (a[i] >= a[index]) {
            index = i;
        }
        printf(" %d   %d \n", i, index);
    }
    return index;
}
