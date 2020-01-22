#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("123 常值占用的記憶體大小： %d \n", sizeof(123));	/*整數未特別指定時，預設為int資料型別*/ 
	printf("123L 常值占用的記憶體大小： %d \n", sizeof(123L));	/*整數加L指定時，為long int資料型別*/ 
	printf("123.45 常值占用的記憶體大小： %d \n", sizeof(123.45));	/*浮點數未特別指定時，預設為double資料型別*/ 
	printf("123.45F 常值占用的記憶體大小： %d \n", sizeof(123.45F));	/*浮點數加F指定時，為float資料型別*/
	printf("123.45L 常值占用的記憶體大小： %d \n", sizeof(123.45L));	/*浮點數加L指定時，為long double資料型別*/
	printf("1.2345e+420 常值占用的記憶體大小： %d \n", sizeof(1.2345e+420));	/*帶小數的科學記號為double資料型別*/
	system("PAUSE"); 
	return 0;
}
