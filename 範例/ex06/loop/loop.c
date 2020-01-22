#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, max, fac=1;
	printf(" 請輸入正整數max：");
	scanf("%d", &max);
	for (n=1;  ; n++) {
		fac = fac * n;	
		if (fac > max) {
			fac = fac/n;
			n--;
			break;
		}
	}
	printf("\n n = %d", n);
	printf("\n %d! = %d <= %d", n, fac, max);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
