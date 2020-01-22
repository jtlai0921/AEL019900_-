#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun1(int);
int main(int argc, char *argv[]) {
	int keyin; /* 存放輸入值 */
	
	while(1){
		printf("\n請輸入整數數值：");
		scanf("%d", &keyin);
		fun1(keyin);
		if(keyin == 0) /* 如果輸入值為0則結束迴圈 */ 
			break;
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
void fun1(int x){
	static int max = 1; /*局部靜態變數 */ 
	
	if(x > max) /* 如果輸入值大於儲存值，則輸入值取代儲存值 */ 
		max = x;
	if(x == 0){
		printf("\n最大值：%d", max); /* 顯示最大值 */ 
	}
}
