#include <stdio.h>
#include <stdlib.h>
/*
��Jkm����,��Xmi�^����nmi���� 
*/
float func(int km, float *nmi){
    *nmi = 0.53995 * km;
    return 0.62137 * km;
}
int main(int argc, char *argv[]) {
    int i;
    float mi, nmi;
    
    mi = func(12, &nmi);
    printf("12��������\t%f�^��\t%f����\n", mi, nmi); 
    system("PAUSE");
	return 0;
}
