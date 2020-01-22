#include <stdio.h>
#include <stdlib.h>
#define MAX 16

int main(int argc, char *argv[]) {
    int a[] = {12,4,65,28,100,9,20,79,48,72,61,96,88,38,16,22};
    int i, iLoop, index, temp;     /* iLoop記錄排列次數,index為元素索引值 */ 
    for(iLoop=1; iLoop<MAX; iLoop++) {
        for (index=0; index<(MAX-iLoop); index++) { 
            if (a[index] > a[index+1]) {
                temp = a[index];
                a[index] = a[index+1];
                a[index+1] = temp;
            }
        }
    }
    printf(" a陣列排序後：");
    for(i=0; i<MAX; i++){
        printf(" %d", a[i]);
    }
    
    printf("\n\n 二分搜尋法\n");
    int fNum, find=0;
    printf("\n 請輸入欲搜尋的整數(0~100)： ");
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
		printf("\n 整數 %d 在陣列元素 a[%d] 內", fNum, mid);
	else
	    printf("\n 整數 %d 資料不在陣列中", fNum);
		
    printf("\n\n");
    system("PAUSE");
    return 0;
}
