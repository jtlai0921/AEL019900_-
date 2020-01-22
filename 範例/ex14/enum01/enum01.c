#include <stdio.h>
#include <stdlib.h>

enum months {	/* 月份 */
   		Jan=1, Feb, Mar, Apr, May, Jun,  	/* Jan=1, Feb=2, …Dec=12 */
		Jul, Aug, Sep, Oct, Nov, Dec     		   
} ;

int main(int argc, char *argv[]) {
	int year=0,month=0,day=0;
	printf(" 請輸入今天的日期(格式yy/mm/dd)：");
	scanf("%d/%d/%d", &year, &month, &day);  /* scanf_s() for VC++  */
	printf("\n 今天是 %d年 %d月 %d日 ! ... \n", year, month, day);
	switch(month)
	{
		case Jan:
			printf(" %2d月 又是新的一年開始 ...", Jan);
			break;
		case Feb:
			printf(" 西洋情人節在 %2d 月，記得送禮物情人", Feb);
			break;
		case Mar:
			printf(" %2d 月初寒假結束 , 新學期開始 !", Mar);
			break;
		case Apr:
			printf(" %2d 月有春假，好好休息吧 ! ", Apr);
			break;
		case May:
			printf(" %2d / 1 勞動節，勞工的兄弟福氣啦 ! ", May);
			break;
		case Jun:
			printf(" %2d 月 期末考到了 ! ", Jun);
			break;
		case Jul:
		case Aug:
			printf(" 7, 8 月是暑假期間" );
			break;
		case Sep:
		case Oct:
		case Nov:
			printf(" 9, 10, 11月秋高氣爽 " );
			break;
		case Dec:
			printf(" %2d 月來臨，聖誕節快到了", Dec);
			break;
	}
	printf("\n\n");
	system("PAUSE");	
	return 0;
}
