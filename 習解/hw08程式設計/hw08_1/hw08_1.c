#include <stdio.h>
#include <stdlib.h>

int GCD(int, int);

int main(int argc, char *argv[]) {
	int num1, num2 ;
	printf(" 請輸入第一個數：") ;
	scanf("%d", &num1);
	printf(" 請輸入第二個數：") ;
	scanf("%d", &num2);
	printf(" 最大公因數：%d\n\n", GCD(num1, num2)) ;
	system("PAUSE");
	return 0;
}

int GCD(int a, int b)
{
	if (a==0 || b==0)
	{
		return 0;
	}
	else
	{
		if ((a % b)==0)
			return b ;
		else
			return GCD(b, a%b);
	}
}

