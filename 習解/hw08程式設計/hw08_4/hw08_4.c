#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]) {
    char sub[5][15] = {"Dog","Cat","Pig","Monkey","Elephant"};
    char ver[3][15] = {"runs","walks","jumps"};
    char adv[2][15] = {"quickly","slowly"};
    int i;
    srand((unsigned) time(NULL));
    for(i=0; i<5; i++) { 
        int r1 = rand()%5;
	    int r2 = rand()%3;
        int r3 = rand()%2;
        printf(" %s %s %s. \n\n", sub[r1], ver[r2], adv[r3]);
    }
    system("PAUSE");
	return 0;
}
