#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float r;
	printf("請輸入圓形半徑(公分)： ");
	scanf("%f",&r);
	printf("圓形半徑為： %.1f 公分\n",r);
	printf("圓形面積為： %.2f 平方公分\n\n",r*r*3.14159);
	
	system("PAUSE");
	return 0;
}
