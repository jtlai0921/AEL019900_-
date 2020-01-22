#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int data[6] = {10,-15,20,-25,30,-5};
	for (i=0; i<6; i++) {
        printf(" data[%d] = %3d \n", i, data[i]);
    }
 
    printf("\n");
	system("PAUSE");
	return 0;
}
