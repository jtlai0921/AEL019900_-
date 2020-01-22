#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int US;
	float rate = 29.93;
	printf("請輸入美元金額：");
    scanf("%d",&US);
    printf("%d美元可兌換新台幣 %.1f 元\n\n",US,US*rate);

	system("PAUSE");
	return 0;
}
