#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	//int d[6], val, allBig;
	//for(i=1; i<=5; i=i+1) {
	//	scanf("%d", &d[i]);
	//}
	//scanf("%d", &val);
	
	int i, val, allBig;
	//int d[6]={0,11,12,13,14,15}; val=3;
	int d[6]={0,11,12,13,14,25}; val=20;
	//int d[6]={0,23,15,18,20,11}; val=12;
	//int d[6]={0,18,17,19,24,15}; val=16;
	
	allBig=TRUE;
	for (i=1; i<=5; i=i+1) {
		if(d[i]>val) {
			allBig=TRUE;
		} else {
			allBig=FALSE;
			//break;
		}
	}
    if(allBig==TRUE) {
    	printf("%d is the smallest. \n", val);
	} else {
		printf("%d is not the smallest. \n", val);
	}	
		
	system("PAUSE");
	return 0;
}
