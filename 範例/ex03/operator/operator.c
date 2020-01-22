#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("1 + 4 * 3 / 2 % 5 = %d\n",1 + 4 * 3 / 2 % 5);
	printf("(2 == 2) + 2 = %d\n",(2 == 2) + 2);
	int x = 2, y = 3;
	printf("x >= y && x != y || x * 2 > y = %d\n",x >= y && x != y || x * 2 > y);
	x=2;
	y=3;	
	int z=4;
	z += ++x - --y;
	printf("x = %d,y = %d,z = %d, \n",x, y,z);	
	system("PAUSE");
	return 0;
}
