#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int a1[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int a2[4][3];
	int i,j;

	printf(" 矩陣翻轉前：\n"); 
	for (i=0; i<4; i++) {
		for(j=0; j<3; j++) {
		   printf(" %2d ", a1[i][j]);
		}
		printf("\n"); 
	}
	
	for (i=0; i<4; i++) {
		for(j=0; j<3; j++) {
		   a2[4-1-i][j]=a1[i][j];
		}
	}
		
	printf("\n 矩陣翻轉後：\n"); 
	for (i=0; i<4; i++) {
		for(j=0; j<3; j++) {
		   printf(" %2d ", a2[i][j]);
		}
		printf("\n"); 
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
