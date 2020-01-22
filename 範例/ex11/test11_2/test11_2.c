#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int array[] = {0,9,8,7,6,5,4,3,2,1};
    int i, temp, n;
    int *ptr = array;
    n = 10;
    for(i = 0; i < n - 1; i ++){
        temp = *ptr;
        *ptr = *(ptr + 1);
        *++ptr = temp;
    }
    printf("\n");
    for(i = 0; i < n; i ++)
        printf("%d ", array[i]);
    printf("\n");
    system("PAUSE");
	return 0;
}
