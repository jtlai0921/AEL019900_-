#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, k;
	int A[2][3]={{1,2,3},{4,5,6}};
	int B[3][2]={{1,2},{3,6},{4,2}};
	int C[2][2];
	
	printf("\n¯x°} A \n");
	for(i=0; i<2; i++) {
	    for(j=0; j<3; j++) {
	    	printf(" %d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n¯x°} B \n");
	for(i=0; i<3; i++) {
	    for(j=0; j<2; j++) {
	    	printf(" %d ", B[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<2; i++) {
	    for(j=0; j<2; j++) {
	        C[i][j]=A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j];
        }
	}
	
	printf("\n¯x°}A * ¯x°}B \n");  
	for(i=0; i<2; i++) {
	    for(j=0; j<2; j++) {
	    	printf(" %d ", C[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
