#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, data[6];
	for (i=0; i<6; i++) {
        printf("請輸入第 %d 個整數資料到陣列中：", i+1);
        scanf("%d", &data[i]);
    }   

    printf("\n");
    system("PAUSE");
	return 0;
}

