#include <stdio.h>
#include <stdlib.h>
#define MAX 16

int main(int argc, char *argv[]) {
    int a[] = {12,4,65,28,100,9,20,79,48,72,61,96,88,38,16,22};
    int i, iLoop, index, temp;     /* iLoop�O���ƦC����,index���������ޭ� */ 
    for(iLoop=1; iLoop<MAX; iLoop++) {
        for (index=0; index<(MAX-iLoop); index++) { 
            if (a[index] > a[index+1]) {
                temp = a[index];
                a[index] = a[index+1];
                a[index+1] = temp;
            }
        }
    }
    printf(" a�}�C�Ƨǫ�G");
    for(i=0; i<MAX; i++){
        printf(" %d", a[i]);
    }
    
    printf("\n\n �G���j�M�k\n");
    int fNum, find=0;
    printf("\n �п�J���j�M�����(0~100)�G ");
    scanf("%d", &fNum);
    int low=0, high=MAX-1, mid;
    while (low<=high && find==0) { 
        mid=(low+high)/2;
	    if (a[mid]==fNum) {
        	find=1;
 		} else {
			if(a[mid]>fNum) high=mid-1;
			else low=mid+1;
		}
    }
    
	if (find==1) 
		printf("\n ��� %d �b�}�C���� a[%d] ��", fNum, mid);
	else
	    printf("\n ��� %d ��Ƥ��b�}�C��", fNum);
		
    printf("\n\n");
    system("PAUSE");
    return 0;
}
