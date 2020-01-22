#include <stdio.h>
#include <stdlib.h>

int F(int);

int main(int argc, char *argv[]) {
	printf("F(7) = %d \n\n", F(7));
	system("PAUSE");
	return 0;
}

int F(int a){
    if (a<0) 
    	return 1;
	else
        return F(a-2)+F(a-3);
}

