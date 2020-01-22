#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void getRnd(int[], int, int, int); 

int main(int argc, char *argv[]) {
    int rNum=7, min=1, max=49;
	int data[rNum];
	getRnd(data, rNum, min, max);           /* 呼叫產生不重複亂數函式 */ 
	printf(" 1~49 之間 7 個不重複的整數：");
	int i;
	for(i=0; i<rNum; i++) {
	    printf("%d  ", data[i]);
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

void getRnd(int a[], int rn, int n1, int n2) {
   	if ((rn>n2-n1+1)||(n1>n2)) {
		printf("傳入函式資料錯誤！\n");
		return; 
	}
	int i, n=0, rnd, repeat;
	srand((unsigned) time(NULL));
	do {
		repeat=0;
		rnd=rand()%(n2-n1+1)+n1;     /* 隨機產生 n1~n2之間的整數 */
		for (i=0; i<rn; i++){        /* 檢查產生的亂數有無重複 */
			if (a[i] == rnd) repeat=1;
		}
		if (repeat == 0) {          /* 若產生的亂數沒有重複,填入陣列中 */
		    a[n]=rnd;
			n++;
	    }
	} while(n<rn);
}
