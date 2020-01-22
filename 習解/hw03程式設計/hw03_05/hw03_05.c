#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int c = 128;
	/*只要指定c強制轉型為double，其他運算元也會自動轉型為double*/
	printf("攝氏 %d度  = 華氏 %f度\n", c, (double)c * 9 / 5 + 32);
	system("PAUSE");
	return 0;
}
