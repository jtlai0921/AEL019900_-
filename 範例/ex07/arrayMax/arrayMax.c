#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, max, arr[5];
    printf(" 請連續輸入 5 個整數(用逗點 , 隔開)：");
    scanf("%d,%d,%d,%d,%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    max=arr[0];
	
	for (i=1; i< sizeof(arr)/sizeof(int); i++) {
	    if (arr[i] > max) 
		    max = arr[i];
	}
	printf("\n 最大值為 %d ", max);
       
	printf("\n\n");
	system("PAUSE");
	return 0;
}   
