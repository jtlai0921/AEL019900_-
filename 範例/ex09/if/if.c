#include <stdio.h>
#include <stdlib.h>
#define MEMBER 1
#define CREDIT_CARD 0
#if MEMBER == 1
    #if CREDIT_CARD == 1
		#define MSG "信用卡折扣後"  
        #define DISCOUNT 0.9  
    #else 
		#define MSG "現金折扣後"   
        #define DISCOUNT 0.85  
    #endif  
#else 
    #if CREDIT_CARD == 1 
    	#define MSG "信用卡"  
        #define DISCOUNT 1.0  
    #else  
        #define MSG "現金折扣後" 
		#define DISCOUNT 0.95  
    #endif  
#endif
int main(int argc, char *argv[]) {
	int money = 12345;	
	#if MEMBER == 1
		printf("定價 %d 元，會員使用%s實付 %.0f 元\n", money, MSG, money*DISCOUNT);
	#else
		printf("定價 %d 元，非會員使用%s實付 %.0f 元\n", money, MSG, money*DISCOUNT);	
	#endif
	system("PAUSE");
	return 0;
}
