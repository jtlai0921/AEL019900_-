#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int N, fac=1;
	printf("�п�J�@�ӥ���ơG");
	scanf("%d", &N);
	int i=1;
	printf("%d! = ", N);
	while(i<=N) {
		if (i<N) printf("%d * ", i);
		if (i==N) printf("%d ", i);
		fac = fac * i; 
		i++;
	}
	printf("= %d", fac);
	printf("\n\n");
	
	system("PAUSE");	
	return 0;
}
