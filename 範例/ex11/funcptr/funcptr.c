#include <stdio.h>
#include <stdlib.h>

int fun1(int x, int y){
    return (x > y) ? x : y;
}
int fun2(int x, int y){
    return (y > x) ? x : y;
}

int main(int argc, char *argv[]) {
    int i, t = 0;
    int a[3] = {3,5,4};
    int(*arr[2])(int, int) = {fun1, fun2};

    for(i = 0; i < 2; i ++){
        t += arr[i](arr[i](a[0], a[1]),a[2]);
    }
    printf("程计の程计キА琌%f\n", t / 2.0);
    system("PAUSE");
	return 0;
}
