#include <stdio.h>
#include <stdlib.h>

int fun(int);
int main(int argc, char *argv[]) {
    printf("f(5) = %d \n\n", fun(5));

    system("PAUSE");
	return 0;
}

int fun(int n) {
	int fac=1;
	//if(n >= 0) {
	if(n > 0) {
        fac = n * fun(n-1);
	}
	return fac;
}
