#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    	
	if (a>b) { t=a; a=b; b=t; }
	if (b>c) { t=b; b=c; c=t; }
	if (a>c) { t=a; a=c; c=t; }
	printf("%d %d %d\n", a, b, c);

	if (a+b<=c) printf("No");
	else if (a*a+b*b>c*c) printf("Acute");
	else if (a*a+b*b==c*c) printf("Right");
	else if (a*a+b*b<c*c) printf("Obtuse");
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}

