#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[]) {
  char c = 'A';   // c ���r���ܼ�,�ܼƼƭȬ�'A' 
  printf("char����ܼƥe�Ϊ��O����j�p�G %d \n", sizeof(c));         // c ���ܼ�
  printf("int��Ʊ`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123));        // 123 ���`��
  printf("double��Ʊ`�ȥe�Ϊ��O����j�p�G %d \n", sizeof(123.45)); // 123.45 ���`��
	
	printf("�j char=%d\n",CHAR_MAX); 
	printf("�p char=%d\n",CHAR_MIN); 
	printf("�j Uchar=%d\n",UCHAR_MAX); 
	printf("�j short=%d\n",SHRT_MAX); 
	printf("�p short=%d\n",SHRT_MIN); 
	printf("�j Ushort=%d\n",USHRT_MAX); 
	printf("Minimum value for int=%d\n",INT_MAX); 
    printf("Minimum value for int=%d\n",INT_MIN); 
    printf("Minimum value for Uint=%d\n",ULONG_LONG_MAX);
	printf("float�̤j��:%e\t�̤p��%e\n",FLT_MAX,FLT_MIN); 

    //printf("Maximum value for double=%lf\n",Long_MAX); 
    //printf("Minimum value for double=%lf\n",Long_MIN); 
	return 0;
}
