#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2, LCM, GCD;
	int max, min, rem;
	printf("*** �D���ƪ��̤j���]��(GCD)�M�̤p������(LCM) ***");
	printf("\n\n �п�J��ӥ����(�ΪŮ�j�})�G");
	scanf("%d %d",&num1, &num2) ;

	if(num1>num2) {
		max=num1;
		min=num2;
	} else {
		max=num2;
		min=num1;
	}

	while(max%min != 0) {
		rem=max%min;
		max=min;
		min=rem;
	}
	GCD=min;
	LCM=num1*num2/GCD;
	
	printf("\n �p�⵲�G"); 
	printf("\n %d , %d ���̤j���]��(GCD)�� %d", num1, num2, GCD);
	printf("\n %d , %d ���̤p������(LCM)�� %d", num1, num2, LCM);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
