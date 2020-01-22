#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float x=25.6F, h=10.84F;
	printf("三角形底為 %f 高為 %f, 面積等於 %f\n", x, h, x * h / 2);  /*因為x、h為浮點數,所以2不用強制轉型*/ 
	system("PAUSE");
	return 0;
}
