#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main(int argc, char *argv[]) {
	double r=6.4;
	printf("圓的半徑為%f，圓面積為%f\n",r, PI*r*r);
	printf("圓的半徑為%f，圓周長為%f\n",r, PI*r*2);	
	printf("圓的半徑為%f，1/4圓面積為%f\n",r, PI*r*r/4);
	system("PAUSE");
	return 0;
}
