#include <stdio.h>
#include <stdlib.h>

//�ŧifun1(), fun()2 
void fun1();	
void fun2();

int main(int argc, char *argv[]) {
 	extern int i; 	/* �ŧi�~���ܼ� */
	printf("==>  in main()  i=%d\n",i++);
	fun1();
	fun2();
   	system("PAUSE");	
   	return 0;
}

//�w�qfun1() 
void fun1(){
	extern int i;	/* �ŧi�~���ܼ� */
	printf("==>  in fun1()  i=%d\n",i++);
}

int i=10;          		/* �ŧi�����ܼ� */

//�w�qfun2() 
void fun2() {
		printf("==>  in fun2()  i=%d\n",i);
}

