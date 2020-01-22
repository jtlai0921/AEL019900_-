#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x=14;
	double y=18.52, h=12.3;
	printf("梯形上底為 %d、下底為 %f、高為 %f\n面積為 %f\n", x, y, h, (x + y) * h / 2);/*x會自動轉型為double*/ 
	system("PAUSE");
	return 0;
}
