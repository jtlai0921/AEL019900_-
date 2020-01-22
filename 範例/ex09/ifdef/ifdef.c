#include <stdio.h>
#include <stdlib.h>
#define BOOK_JAVA "Java基礎必修課" 
#define BOOK_VC "Visual C#基礎必修課"
#define PRICE_JAVA 500 
#define PRICE_VC 450
#define MSG_BOOK "書名: %s \n"
#define MSG_PRICE "定價： %d  售價: %.0f \n"

int main(int argc, char *argv[]) {
	#ifndef DISCOUNT 			/* 如果沒有宣告DISCOUNT巨集 */
		#define DISCOUNT 0.95
	#else
		#undef DISCOUNT			/* 取消DISCOUNT巨集宣告 */
		#define DISCOUNT 0.95	 
    #endif
	#ifdef BOOK_JAVA  			/* 如果有宣告BOOK_JAVA巨集 */
		printf(MSG_BOOK, BOOK_JAVA);
		printf(MSG_PRICE, PRICE_JAVA, PRICE_JAVA*DISCOUNT);
	#else
		printf(MSG_BOOK, BOOK_VC);
		printf(MSG_PRICE, PRICE_VC, PRICE_VC*DISCOUNT);
	#endif
    system("PAUSE");	
	return 0;
}
