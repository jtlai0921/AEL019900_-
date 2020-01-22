#include <stdio.h>
#include <stdlib.h>

void printout(int, int[]);
void bubble(int, int[]);

int main(int argc, char *argv[]) {
    int i, arr[6]={23,-5,12,-7,0,9};
    printf("陣列 排序前 的元素內容：");
    printout(6, arr);
    bubble(6, arr);
    printf("陣列 排序後 的元素內容：");
    printout(6, arr);
    
    system("PAUSE");
	return 0;
}

void printout(int n, int tArr[]) { 
    int i;
    for(i=0; i<n; i++) {
    	printf(" %d ", tArr[i]);
	}
	printf("\n\n");
}

void bubble(int n, int tArr[]) {
	int loop,index,temp;
	for(loop=1; loop<n; loop++) {
		for(index=0; index<(n-loop); index++) {
			if(tArr[index]<tArr[index+1]) {
				temp=tArr[index];
				tArr[index]=tArr[index+1];
				tArr[index+1]=temp;
			}
		}
	}
}

