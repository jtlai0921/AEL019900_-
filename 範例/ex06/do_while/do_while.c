#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int count=0,num,sum=0;
	char ans;
	do {
		count++;
		printf(" ��J�� %d �Ӿ�ơG", count);
		scanf("%d", &num);
		sum += num;
		printf(" �O�_�~��(Y/N)�H");
		ans = getche();
		printf("\n\n");
	} while(ans=='Y' || ans=='y');
	printf(" �@��J %d �Ӿ�ơA�`�M�� %d \n\n", count, sum);
	
	system("PAUSE");
	return 0;
}
