#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
		char data[7][2][20]={{"�ѱi" , "0911443300"},
                             {"Mary" , "0928000001"},
	                         {"�o��" , "0431748484"},
	                         {"Tom"  , "0912345678"},
	                         {"����" , "0255111111"},
                             {"����" , "0977229900"},
	                         {"�p��" , "0928888888"}}; 
	int i, j, find=0;
	char st[20];
	for(i=1; i<7; i++) {
		for(j=0; j<(7-i); j++) {
			if(strcmp(data[j][0], data[j+1][0]) == 1) {
		    	strcpy(st,data[j][0]); strcpy(data[j][0],data[j+1][0]); strcpy(data[j+1][0],st);
		    	strcpy(st,data[j][1]); strcpy(data[j][1],data[j+1][1]); strcpy(data[j+1][1],st);
		    }
		}
	}
	
	printf(" �Ƨǫ᪺��ơG\n");
	for (i=0; i<7; i++) {
		printf(" %s \t %s \n", data[i][0], data[i][1]);
    }
		
	char name[20];
	printf("\n ��J�d�ߪ��m�W�G");
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
