#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char data[7][2][20]={{"�ѱi" , "0911443300"},
                         {"Mary" , "0928000001"},
	                     {"�o��" , "0431748484"},
	                     {"Tom"  , "0912345678"},
	                     {"����" , "0255111111"},
                         {"����" , "0977229900"},
	                     {"�p��" , "0928888888"}}; 
	int i, find=0;
	char name[20];
	printf(" ��J�d�ߪ��m�W�G");
	scanf("%s", &name);
	
	for (i=0; i<7; i++) {
		if(strcmp(name, data[i][0]) == 0) {
			printf(" %s ���q�ܸ��X�� %s \n", name, data[i][1]);
			find=1;
			break;
		}
	}
	
	if(find==0) {
	    printf(" �L %s ����� \n", name);
    }
	
	printf("\n");
	system("PAUSE");
	return 0;
}
