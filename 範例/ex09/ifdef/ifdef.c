#include <stdio.h>
#include <stdlib.h>
#define BOOK_JAVA "Java��¦���׽�" 
#define BOOK_VC "Visual C#��¦���׽�"
#define PRICE_JAVA 500 
#define PRICE_VC 450
#define MSG_BOOK "�ѦW: %s \n"
#define MSG_PRICE "�w���G %d  ���: %.0f \n"

int main(int argc, char *argv[]) {
	#ifndef DISCOUNT 			/* �p�G�S���ŧiDISCOUNT���� */
		#define DISCOUNT 0.95
	#else
		#undef DISCOUNT			/* ����DISCOUNT�����ŧi */
		#define DISCOUNT 0.95	 
    #endif
	#ifdef BOOK_JAVA  			/* �p�G���ŧiBOOK_JAVA���� */
		printf(MSG_BOOK, BOOK_JAVA);
		printf(MSG_PRICE, PRICE_JAVA, PRICE_JAVA*DISCOUNT);
	#else
		printf(MSG_BOOK, BOOK_VC);
		printf(MSG_PRICE, PRICE_VC, PRICE_VC*DISCOUNT);
	#endif
    system("PAUSE");	
	return 0;
}
