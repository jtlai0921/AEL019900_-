#include <stdio.h>
#include <stdlib.h>

struct month{
    char monName[12];
    char monAbbre[4];
    char monDDay;
    char monNum;
}months[] = {"January","Jan",31,1, "February","Feb",28,2,
    "March","Mar",31,3,"April","Apr",30,4,"May","May",31,5,"June","Jun",30,6,
    "July","Jul",31,7,"August","Aug",31,8,"September","Sep",30,9,
    "October","Oct",31,10,"November","Nov",30,11,"December","Dec",31,12};
    
int main(int argc, char *argv[]) {
    int i, x = 0;
    
    printf("請輸入月份(1～12)："); 
    scanf("%d", &i);
    for(i -= 1; i >= 0; i --){
        x += months[i].monDDay;
    }
    printf("總天數＝%d\n", x);
    
    system("PAUSE");
	return 0;
}
