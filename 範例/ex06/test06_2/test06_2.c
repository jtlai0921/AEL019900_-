#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int guess, ans=72;
	int count=0;
	int isGuess=0;
	printf("**** 猜數目遊戲 ****\n");
	do {
		printf("\n從 0~100 中猜一個整數：");
		scanf("%d", &guess);
		if (guess==ans) {
			printf("賓果！ 你答對了！ 正確答案是 %d", ans); 
			isGuess=1;
		} else {
			if (guess>ans) {
				printf("猜太大了！ 再來一次！ 加把勁！"); 
			} else {
				printf("猜太小了！ 再來一次！ 不氣餒！"); 
		    }
		}
		count++;
		printf("\n");
	} while (isGuess!=1);
	printf("\n你總共猜了 %d 次！\n\n", count);
	
	system("PAUSE");
	return 0;
}
