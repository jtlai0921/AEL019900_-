#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;                           //�ŧi�r���ܼ� 
	printf("\n����J�@�Ӧr���G");      //��J���� 
	ch=getchar();
	printf("����J���r���O  ");        //��X���� 
	putchar(ch);
	printf("\n"); 
	printf("\n����J�@�Ӧr���G");        //��J���� 
	ch=getche();
	printf("\n����J���r���O  ");        //��X���� 
	putchar(ch);
	printf("\n"); 
	printf("\n����J�@�Ӧr���G");        //��J���� 
	ch=getch();
	printf("\n����J���r���O  ");        //��X���� 
	putchar(ch);
	printf("\n\n"); 

	system("PAUSE");
	return 0;
}
