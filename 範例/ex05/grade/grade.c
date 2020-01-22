#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int score;
	printf("請輸入研習的成就分數： ");
	scanf("%d", &score);
	if (score>=90 && score<=100) { 
		printf("\n研習成績 \'%s\'", "優"); 
		printf("\n評語：%s\n\n", "成就非凡"); 
	} else if (score>=80 && score<=89) {
		printf("\n研習成績 \'%s\'", "甲"); 
		printf("\n評語：%s\n\n", "表現良好"); 
	} else if (score>=70 && score<=79) {
		printf("\n研習成績 \'%s\'", "乙"); 
		printf("\n評語：%s\n\n", "差強人意"); 
	} else if (score>=60 && score<=69) {
		printf("\n研習成績 \'%s\'", "丙"); 
		printf("\n評語：%s\n\n", "仍須努力"); 
	} else if (score>=0 && score<=59) {
		printf("\n研習成績 \'%s\'", "丁");  
		printf("\n評語：%s\n\n", "待加強"); 
    } else {
    	printf("\n輸入錯誤！");  
		printf("\n分數須在0~100之間\n\n"); 
    }
 
	system("PAUSE");
	return 0;
}
