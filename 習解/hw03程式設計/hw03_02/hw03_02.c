#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 10, y = 4;
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	/*除法計算時整數x、y要強制轉型為浮點數，才能計算出正確的值。*/ 
	printf("%d / %d = %f\n", x, y, (float)x / (float)y);/*浮點數要用%f才能正確顯示變數值*/
	printf("%d %% %d = %d\n", x, y, x % y); 
	system("PAUSE");
	return 0;
}
