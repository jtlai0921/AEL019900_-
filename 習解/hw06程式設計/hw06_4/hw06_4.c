#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2;
	printf(" �п�J��Ӿ��(�ΪŮ�j�},�ĤG��Ƥ��i�� 0)�G ");
	scanf("%d %d", &n1, &n2);
	printf("\n ***** �[�k�B�� *****"); 
	printf("\n    1. �[�k�B��"); 
	printf("\n    2. ��k�B��"); 
	printf("\n    3. ���k�B��"); 
	printf("\n    4. ���k�B��"); 
	printf("\n    0. ���}�B��"); 
	
	char ch1,ch2;
	int loop=1;
	while (loop!=0) {
		printf("\n\n %d, %d ��ƭn�i��󶵹B��(0~4)�G", n1, n2); 	
		ch1=getche();
		switch(ch1) {
			case '0':
				printf("\n ���}���{�� ...\n\n");
				loop=0;
				break;
			case '1':
				printf("\n %d + %d = %d", n1, n2, n1+n2);
				break;
			case '2':	
				printf("\n %d - %d = %d", n1, n2, n1-n2);
				break;
			case '3':	
				printf("\n %d * %d = %d", n1, n2, n1*n2);
				break;	
			case '4':	
			    printf("\n %d / %d = %d", n1, n2, n1/n2);
				break;
			default:
				printf("\n ������~�A�п�� 0��4 !");
		}
	}

    system("PAUSE");
    return 0;
}
