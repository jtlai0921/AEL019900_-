#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1,n2,max;
	printf("�гs���J��Ӿ��(�ΪŮ�Ϥ�): ");
	scanf("%d %d", &n1, &n2);
	max=(n1>n2) ? n1 : n2 ;
	printf("\n%d �M %d ���j�Ȭ� %d", n1, n2, max);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
