#include <stdio.h>
#include <stdlib.h>
#define RATE 0.0315
int main(int argc, char *argv[]) {
	int money = 1000000;
	double interest;
	interest = money + money * RATE * 3;
	printf("%d 元 3 年單利的本利和 = %f 元\n", money, interest);
	/*因為尚未學過次方的函式，所以幾年就乘幾次就可以*/
	interest = money * (1 + RATE) * (1 + RATE) * (1 + RATE);
	printf("%d 元 3 年複利的本利和 = %f 元\n", money, interest);	
	system("PAUSE");
	return 0;
}
