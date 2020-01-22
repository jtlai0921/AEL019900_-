#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int count=0,num,sum=0;
	char ans;
	do {
		count++;
		printf(" 輸入第 %d 個整數：", count);
		scanf("%d", &num);
		sum += num;
		printf(" 是否繼續(Y/N)？");
		ans = getche();
		printf("\n\n");
	} while(ans=='Y' || ans=='y');
	printf(" 共輸入 %d 個整數，總和為 %d \n\n", count, sum);
	
	system("PAUSE");
	return 0;
}
