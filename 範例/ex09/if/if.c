#include <stdio.h>
#include <stdlib.h>
#define MEMBER 1
#define CREDIT_CARD 0
#if MEMBER == 1
    #if CREDIT_CARD == 1
		#define MSG "�H�Υd�馩��"  
        #define DISCOUNT 0.9  
    #else 
		#define MSG "�{���馩��"   
        #define DISCOUNT 0.85  
    #endif  
#else 
    #if CREDIT_CARD == 1 
    	#define MSG "�H�Υd"  
        #define DISCOUNT 1.0  
    #else  
        #define MSG "�{���馩��" 
		#define DISCOUNT 0.95  
    #endif  
#endif
int main(int argc, char *argv[]) {
	int money = 12345;	
	#if MEMBER == 1
		printf("�w�� %d ���A�|���ϥ�%s��I %.0f ��\n", money, MSG, money*DISCOUNT);
	#else
		printf("�w�� %d ���A�D�|���ϥ�%s��I %.0f ��\n", money, MSG, money*DISCOUNT);	
	#endif
	system("PAUSE");
	return 0;
}
