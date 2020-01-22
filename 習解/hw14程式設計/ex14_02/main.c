#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum card
{
   JCB=35,
   VISA=45,
   MASTER=54
};

int main(int argc, char *argv[]) {
	int n;
	printf("\n 請問您的信用卡號碼最前面兩位數字是 : ");
	scanf("%d", &n);
	switch(n)
	{
		case JCB:
			printf("\n 您的信用卡是 JCB 卡 ! \n");
			break;
		case VISA:
			printf("\n 您的信用卡是 VISA 卡 ! \n");
			break;
		case MASTER:
			printf("\n 您的信用卡是 MASTER 卡 ! \n");
			break;
		default:
			printf(" 您是使用其它的信用卡! ......\n");
	}
	system("PAUSE");
	return 0;
}
