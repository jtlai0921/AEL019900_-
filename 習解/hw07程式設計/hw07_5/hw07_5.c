#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char data[7][2][20]={{"老張" , "0911443300"},
                         {"Mary" , "0928000001"},
	                     {"發叔" , "0431748484"},
	                     {"Tom"  , "0912345678"},
	                     {"李董" , "0255111111"},
                         {"豪哥" , "0977229900"},
	                     {"小何" , "0928888888"}}; 
	int i, find=0;
	char name[20];
	printf(" 輸入查詢的姓名：");
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
