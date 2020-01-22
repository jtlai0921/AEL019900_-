#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int degree;
	double pay;
	printf("輸入用電度數： ");
	scanf("%d",&degree);
	if(degree <= 110) pay = degree*2.1;
    if(degree >= 111 && degree <= 330) {
      pay = 110*2.1+(degree-110)*3.02;
    }
    if(degree >= 331 && degree <= 500) {
      pay = 110*2.1+(330-110)*3.02+(degree-330)*4.05;
    }
    if(degree >= 501) {
      pay = 110*2.1+(330-110)*3.02+(500-330)*4.05+(degree-500)*4.51;
    }
    printf("\n應繳電費為： %.1f\n\n", pay);
	
	system("PAUSE");
	return 0;
}
