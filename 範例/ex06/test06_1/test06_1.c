#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1,n2;
	printf("**** �D�⥿��ƪ��̤j���]�� ****\n");
	printf("\n�s���J��ӥ����(�ΪŮ�j�})�G");
	scanf("%d %d", &n1, &n2); 
	int max,min,rem;
	if (n1>n2) {
		max=n1; 
		min=n2;
	} else {
		max=n2;
		min=n1;
	}
	while (max%min != 0) {
		rem = max%min;
		max=min;
		min=rem;
	}
	printf("\n�̤j���]�Ƭ� %d\n\n", min);
	
	system("PAUSE");
	return 0;
}
