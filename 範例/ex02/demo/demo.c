#include <stdio.h>
#include <stdlib.h>	/* 標頭檔 */
float off = 0.85;   /* 宣告折扣off為全域變數，並設初值=0.85 */
void get_off(int);  /* 宣告get_off()為自定函式 */
int x=1;
int main(int argc, char *argv[]) 
{
	int price = 1600;	/* 宣告price售價為函式的區域整數變數並設定初值 */
	printf("原價為 %d 元，折扣為 %.2f \n", price, off);/*顯示原價和折扣*/
	get_off(price);		/* 呼叫get_off自定函式，引數為price */
	system("PAUSE");	/* 暫停執行以觀看執行結果 */
	return 0;
}

void get_off(int p)	/* 計算折扣後的金額 */
{
	float total;		/* 宣告total為區域變數，資料型別為浮點數 */
	total = p * off;	/* 將售價乘以off折扣數 */
	printf("折扣後 %.1f 元\n", total);  /* 顯示折扣後的金額 */  
}

