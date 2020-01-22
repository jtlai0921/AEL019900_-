#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
		char data[7][2][20]={{"老張" , "0911443300"},
                             {"Mary" , "0928000001"},
	                         {"發叔" , "0431748484"},
	                         {"Tom"  , "0912345678"},
	                         {"李董" , "0255111111"},
                             {"豪哥" , "0977229900"},
	                         {"小何" , "0928888888"}}; 
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
	
	printf(" 排序後的資料：\n");
	for (i=0; i<7; i++) {
		printf(" %s \t %s \n", data[i][0], data[i][1]);
    }
		
	char name[20];
	printf("\n 輸入查詢的姓名：");
	scanf("%s", &name);
		
	for (i=0; i<7; i++) {
		if(strcmp(name, data[i][0]) == 0) {
			printf(" %s 的電話號碼為 %s \n", name, data[i][1]);
			find=1;
			break;
		}
	}
	
	if(find==0) {
	    printf(" 無 %s 的資料 \n", name);
    }
	
	printf("\n");
	system("PAUSE");
	return 0;
}
