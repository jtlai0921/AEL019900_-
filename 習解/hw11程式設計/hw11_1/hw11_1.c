#include <stdio.h>
#include <stdlib.h>
/*
輸入km公里,輸出mi英里及nmi海里 
*/
float func(int km, float *nmi){
    *nmi = 0.53995 * km;
    return 0.62137 * km;
}
int main(int argc, char *argv[]) {
    int i;
    float mi, nmi;
    
    mi = func(12, &nmi);
    printf("12公里等於\t%f英里\t%f海里\n", mi, nmi); 
    system("PAUSE");
	return 0;
}
