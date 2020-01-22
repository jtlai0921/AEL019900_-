#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j;
	int A[3][4]={{2,4,6,8},{1,3,5,7},{1,2,3,4}};
	//int rowSum=0;
	for(i=0; i<3; i++){
		int rowSum=0;
		for(j=0; j<4; j++){
			rowSum += A[i][j];
		}
	    printf("The sum of row %d is %d. \n", i, rowSum);
	}
	
	return 0;
}
