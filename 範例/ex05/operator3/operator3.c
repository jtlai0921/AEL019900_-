#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("�п�J�@�Ӿ�ƭȡG "); 
	scanf("%d", &num);
	printf("\n");
	printf("%d ��", num);
	printf("%s", (num>0)?"����":((num==0)?"�s":"�t��"));
	printf("\n\n");
	system("PAUSE");
	return 0;
}
