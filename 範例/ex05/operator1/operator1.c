#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, k=5;
	i = 'A'>'B';
	j = ((5+i) == k);
	k = 5+(100<50)*3+(-20!=20)*2;
	printf("i = %d \t j = %d \t k = %d \n\n", i, j, k);
	
	system("PAUSE");
	return 0;
}
