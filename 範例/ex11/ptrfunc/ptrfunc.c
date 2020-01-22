#include <stdio.h>
#include <stdlib.h>

int * fun1(int x){
    static int a[8];
    int i;
    for(i = 0; i < 8; i ++){
        a[i] = rand() % x;
    }
    return a;
}

int main(int argc, char *argv[]) {
    int *a;
    int i;
    a = fun1(5);
    for(i = 0; i < 4; i ++){
        printf("%d,%d\n", *(a+i*2), *(a+i*2+1));
    }
    system("PAUSE");
	return 0;
}
