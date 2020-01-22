#include <stdio.h>
#include <stdlib.h>

int f(int);

int main(int argc, char *argv[]) {
   	printf("\n 費氏第 8 項係數為： %d \n", f(8));
	printf("\n 費氏第 20 項係數為： %d \n\n", f(20));
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
