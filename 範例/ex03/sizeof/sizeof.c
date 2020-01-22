#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[]) {
  char c = 'A';   // c 為字元變數,變數數值為'A' 
  printf("char資料變數占用的記憶體大小： %d \n", sizeof(c));         // c 為變數
  printf("int資料常值占用的記憶體大小： %d \n", sizeof(123));        // 123 為常值
  printf("double資料常值占用的記憶體大小： %d \n", sizeof(123.45)); // 123.45 為常值
	
	printf("大 char=%d\n",CHAR_MAX); 
	printf("小 char=%d\n",CHAR_MIN); 
	printf("大 Uchar=%d\n",UCHAR_MAX); 
	printf("大 short=%d\n",SHRT_MAX); 
	printf("小 short=%d\n",SHRT_MIN); 
	printf("大 Ushort=%d\n",USHRT_MAX); 
	printf("Minimum value for int=%d\n",INT_MAX); 
    printf("Minimum value for int=%d\n",INT_MIN); 
    printf("Minimum value for Uint=%d\n",ULONG_LONG_MAX);
	printf("float最大值:%e\t最小值%e\n",FLT_MAX,FLT_MIN); 

    //printf("Maximum value for double=%lf\n",Long_MAX); 
    //printf("Minimum value for double=%lf\n",Long_MIN); 
	return 0;
}
