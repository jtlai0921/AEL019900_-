#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x=0, y=1;
	int i, temp, n;
    printf("請輸入正整數 n : ");
    scanf("%d", &n);
    printf(" %d\n",0);
	for (i=2; i<=n; i++) {
		temp=y;
		y=x+y;    //(a)
		x=temp;
		printf(" %d\n",y);    //(b)
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
