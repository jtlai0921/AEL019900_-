#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, max, arr[5];
    printf(" �гs���J 5 �Ӿ��(�γr�I , �j�})�G");
    scanf("%d,%d,%d,%d,%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    max=arr[0];
	
	for (i=1; i< sizeof(arr)/sizeof(int); i++) {
	    if (arr[i] > max) 
		    max = arr[i];
	}
	printf("\n �̤j�Ȭ� %d ", max);
       
	printf("\n\n");
	system("PAUSE");
	return 0;
}   
