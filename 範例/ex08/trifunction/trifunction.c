#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main(int argc, char *argv[]) {
	double r;
	int x;
	printf("\n x:角度量 \t r:弳度量 \t sin \t\t csc");
	printf("\n ======================================================= ");
	for(x=30; x<=150; x+=30) {
		r = x*(PI/180); 
		printf("\n %3d \t\t %.5f \t %.5f \t %.5f",x,r,sin(r),1/sin(r));
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
