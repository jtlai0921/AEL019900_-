#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1=34, n2=100, n3=-67;
	int max;
	printf("�T�Ӿ�Ƥ��O�� %d, %d, %d \n", n1, n2, n3);
	if (n1>n2) {		//�P�_ n1 �O�_�j�� n2
		if(n1>n3)		//�P�_ n1 �O�_�j�� n3
    		max=n1;
		else
    		max=n3;
	} else {				
		if(n2>n3)		//�P�_ n2 �O�_�j�� n3
    		max=n2;
   		else
	 		max=n3;
	}	
   	printf("\n������G�G�̤j�Ƭ� %d, \n\n", max);
	   
   	system("PAUSE");	
   	return 0;
}
