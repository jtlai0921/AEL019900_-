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
	printf("\n �аݱz���H�Υd���X�̫e�����Ʀr�O : ");
	scanf("%d", &n);
	switch(n)
	{
		case JCB:
			printf("\n �z���H�Υd�O JCB �d ! \n");
			break;
		case VISA:
			printf("\n �z���H�Υd�O VISA �d ! \n");
			break;
		case MASTER:
			printf("\n �z���H�Υd�O MASTER �d ! \n");
			break;
		default:
			printf(" �z�O�ϥΨ䥦���H�Υd! ......\n");
	}
	system("PAUSE");
	return 0;
}
