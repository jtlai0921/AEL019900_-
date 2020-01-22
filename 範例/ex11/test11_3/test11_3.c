#include <stdio.h>
#include <stdlib.h>

int func(int *a, int n){
    int i, ptr = 0;
    for(i = 1;i < n; i ++){
        if(a[i] >= a[ptr]){
            ptr = i;
        }
    }
    return ptr;
}
int main(int argc, char *argv[]) {
    int array[10] = {0,2,7,6,8,3,5,4,8,1};
    
    printf("%d\n", func(array, 10));
    system("PAUSE");
	return 0;
}
