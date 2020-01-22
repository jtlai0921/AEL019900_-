#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int item;
	
	printf("\n 1. 蘋果");
	printf("\n 2. 香蕉");
	printf("\n 3. 芒果");
	printf("\n 請輸入選項<1~3>： ",item);
	scanf("%d",&item);
	if (item==1) printf("\n 英文單字： %s","apple");
	if (item==2) printf("\n 英文單字： %s","banana");
	if (item==3) printf("\n 英文單字： %s","mango");
	printf("\n\n");
	system("PAUSE");
	return 0;
}
