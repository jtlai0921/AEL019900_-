#include <stdio.h>
#include <stdlib.h>

int f(int);

int main(int argc, char *argv[]) {
   	printf("\n �O��� 8 ���Y�Ƭ��G %d \n", f(8));
	printf("\n �O��� 20 ���Y�Ƭ��G %d \n\n", f(20));
   	system("PAUSE");	
   	return 0;
}

int f(int n) {   
    if(n==1 || n==2) {
	 	return 1;
	} else {
		return f(n-1)+f(n-2); 
	}
}
