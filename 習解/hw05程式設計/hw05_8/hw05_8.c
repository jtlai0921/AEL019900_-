#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int item;
	
	printf("\n 1. ī�G");
	printf("\n 2. ����");
	printf("\n 3. �~�G");
	printf("\n �п�J�ﶵ<1~3>�G ",item);
	scanf("%d",&item);
	if (item==1) printf("\n �^���r�G %s","apple");
	if (item==2) printf("\n �^���r�G %s","banana");
	if (item==3) printf("\n �^���r�G %s","mango");
	printf("\n\n");
	system("PAUSE");
	return 0;
}
