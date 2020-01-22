#include <stdio.h>
#include <stdlib.h>

void factor(long , long );

int main(int argc, char *argv[]) {
	long number, div;
	
	printf("輸入一個欲作因數分解的數值：");
	scanf("%d", &number);
	printf("%d = ",number );
	factor(number, 2);
	printf("\n\n");
	system("PAUSE");
	return 0;
}

void factor(long num, long div)
{
    if(num==1 || div>num)
    {
    	printf("\b");
    	return ;
    }
    else
    {
        if(num%div==0)
        {
    		printf("%d*", div);
    		factor(num/div, div);
        }
        else
        {
            div= div==2 ? 3 : div+2;
            factor(num, div);
        }
    }
}


