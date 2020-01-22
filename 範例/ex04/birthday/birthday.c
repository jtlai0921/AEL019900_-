#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year, moon, day;
	printf("請輸入生日(yyyy/mm/dd)：");
	scanf("%d/%d/%d", &year, &moon, &day);
	printf("出生於西元%d年%d月%d日\n\n", year, moon, day);

	system("PAUSE");
	return 0;
}
