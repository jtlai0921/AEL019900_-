#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, k;
	int x=8, y=3;
	i = (y==3) && (x<3);
	j = (x+y==11) || (y>8);
	k = !((x<=y) && (x>y)||('A'>'C'));
	printf("i = %d \t j = %d \t k = %d \n\n", i, j, k);
	
	system("PAUSE");
	return 0;
}
