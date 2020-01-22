#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("請輸入一個整數值： "); 
	scanf("%d", &num);
	printf("\n");
	printf("%d 為", num);
	printf("%s", (num>0)?"正數":((num==0)?"零":"負數"));
	printf("\n\n");
	system("PAUSE");
	return 0;
}
