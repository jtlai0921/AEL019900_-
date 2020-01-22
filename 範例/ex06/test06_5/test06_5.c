#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 76;
	int j = 48;
	int k;
	while ((i % j) != 0) {
		k = i % j;
		i = i;
		j = k;
	}
	printf("%d\n",j);
	
	system("PAUSE");
	return 0;
}
