#include <stdio.h>
#include <stdlib.h>

int C(int, int);
int main(int argc, char *argv[]) {
	int N, M, ans;
	printf(" �гs���J��Ӿ�� N,M (�γr�I�j�})�G");
	scanf("%d,%d", &N, &M);
	if(N >= M) {
		ans = C(N, M);
		printf("\n �զX���� C(%d, %d) = %d \n\n", N, M, ans);
	} else {
		printf("\n ��� N �����j�� M \n\n");
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

