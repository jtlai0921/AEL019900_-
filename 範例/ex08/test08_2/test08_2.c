#include <stdio.h>
#include <stdlib.h>

int C(int, int);
int main(int argc, char *argv[]) {
	int N, M, ans;
	printf(" 請連續輸入兩個整數 N,M (用逗點隔開)：");
	scanf("%d,%d", &N, &M);
	if(N >= M) {
		ans = C(N, M);
		printf("\n 組合公式 C(%d, %d) = %d \n\n", N, M, ans);
	} else {
		printf("\n 整數 N 必須大於 M \n\n");
	}

    system("PAUSE");
	return 0;
}

int C(int n, int m) {
	if(n==m || m==0) {
		return 1;
	} else {
		return C(n-1, m) + C(n-1, m-1);
	}
}

