#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("123.45 顯示：%f\n",123.45);
	printf("0.123456789 顯示：%f\n",0.123456789);	
	printf("123.45F 顯示：%f\n",123.45F);
	printf("1.2345e2 顯示：%f\n",1.2345e2);
	printf("1.2345e8 顯示：%f\n",1.2345e8);
	printf("1.2345e-2 顯示：%f\n",1.2345e-2);
	return 0;
}
