#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("123 �`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123));	/*��ƥ��S�O���w�ɡA�w�]��int��ƫ��O*/ 
	printf("123L �`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123L));	/*��ƥ[L���w�ɡA��long int��ƫ��O*/ 
	printf("123.45 �`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123.45));	/*�B�I�ƥ��S�O���w�ɡA�w�]��double��ƫ��O*/ 
	printf("123.45F �`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123.45F));	/*�B�I�ƥ[F���w�ɡA��float��ƫ��O*/
	printf("123.45L �`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123.45L));	/*�B�I�ƥ[L���w�ɡA��long double��ƫ��O*/
	printf("1.2345e+420 �`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(1.2345e+420));	/*�a�p�ƪ���ǰO����double��ƫ��O*/
	system("PAUSE"); 
	return 0;
}
