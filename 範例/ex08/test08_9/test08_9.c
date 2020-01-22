#include <stdio.h>
#include <stdlib.h>

int GCD(int, int);
int main(int argc, char *argv[]) {
	printf(" GCD(48, 36) = %d \n\n", GCD(48,36));
	system("PAUSE");
	return 0;
}

int GCD(int a, int b){
    int r;
    r = a % b;
    if (r==0)
        return b;
	return GCD(b, r);
}    

