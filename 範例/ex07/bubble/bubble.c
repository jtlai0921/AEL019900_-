#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[5] = {4,-15,20,13,-6};
	int i, iLoop, index, temp;   /* iLoop�O���ƦC����,index���������� */
	printf(" ��  ��  �e �G");
	for(i=0; i<5; i++) {
		printf("   a[%d]=%3d",i ,a[i]);
	}
	for(iLoop=1; iLoop<5; iLoop++) {
    	for (index=0; index<(5-iLoop); index++) { 
    	    if (a[index] > a[index+1]) {
    	    	temp = a[index];
    	    	a[index] = a[index+1];
    	    	a[index+1] = temp;
			}
		}
		printf("\n �� %d ���ƦC�G", iLoop);
    	for(i=0; i<5; i++){
	    	printf("   a[%d]=%3d",i ,a[i]);
	    }
	}

    printf("\n\n");
    system("PAUSE");
	return 0;
}
