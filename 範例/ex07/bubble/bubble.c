#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[5] = {4,-15,20,13,-6};
	int i, iLoop, index, temp;   /* iLoop記錄排列次數,index為元素註標 */
	printf(" 排  序  前 ：");
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
		printf("\n 第 %d 次排列：", iLoop);
    	for(i=0; i<5; i++){
	    	printf("   a[%d]=%3d",i ,a[i]);
	    }
	}

    printf("\n\n");
    system("PAUSE");
	return 0;
}
