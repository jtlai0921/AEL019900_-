#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[16] = {12,4,65,28,100,9,20,79,48,72,61,96,88,38,16,22};
	int i, fNum, find=0;    /* 當find=1時,代表資料有找到  */ 
	printf(" 循序搜尋法\n");
    printf("\n 請輸入欲搜尋的整數(0~100)： ");
	scanf("%d", &fNum);
	for(i=0; i<16; i++) {
		if(a[i] == fNum) {
			printf("\n 整數 %d 在陣列元素 a[%d] 內", fNum, i);
			find=1;
			break;
		}
	}
	if (find != 1) printf("\n 整數 %d 資料不在陣列中", fNum);
	
	printf("\n\n");
    system("PAUSE");
    return 0;
}

