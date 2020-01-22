#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2;
	printf(" 請輸入兩個整數(用空格隔開,第二位數不可為 0)： ");
	scanf("%d %d", &n1, &n2);
	printf("\n ***** 加法運算 *****"); 
	printf("\n    1. 加法運算"); 
	printf("\n    2. 減法運算"); 
	printf("\n    3. 乘法運算"); 
	printf("\n    4. 除法運算"); 
	printf("\n    0. 離開運算"); 
	
	char ch1,ch2;
	int loop=1;
	while (loop!=0) {
		printf("\n\n %d, %d 兩數要進行何項運算(0~4)：", n1, n2); 	
		ch1=getche();
		switch(ch1) {
			case '0':
				printf("\n 離開本程式 ...\n\n");
				loop=0;
				break;
			case '1':
				printf("\n %d + %d = %d", n1, n2, n1+n2);
				break;
			case '2':	
				printf("\n %d - %d = %d", n1, n2, n1-n2);
				break;
			case '3':	
				printf("\n %d * %d = %d", n1, n2, n1*n2);
				break;	
			case '4':	
			    printf("\n %d / %d = %d", n1, n2, n1/n2);
				break;
			default:
				printf("\n 按鍵錯誤，請選按 0～4 !");
		}
	}

    system("PAUSE");
    return 0;
}
