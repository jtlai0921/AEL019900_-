#include <stdio.h>
#include <stdlib.h>

int fun1(int x, int y){
    printf("函式 fun1()\n");
    return x + y;
}
int fun2(int x, int y){
    printf("函式 fun2()\n");
    return x - y;
}

int main(int argc, char *argv[]) {
    int (*ptr)(int, int); /* 宣告函式指標 */
    int i;
    
    ptr = fun1;
    i = ptr(20, 10);
    printf("%d\n", i);
    
    ptr = fun2;
    i = ptr(20, 10);
    printf("%d\n", i);
    
    system("PAUSE");
	return 0;
}
