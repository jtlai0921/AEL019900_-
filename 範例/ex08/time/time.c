#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    char tQuit;
    time_t t1, t2;
    clock_t ck1, ck2;
    
    ck1=clock();
	t1=time(NULL);
    printf("\n 現在系統的時間 : %d 秒", t1);
	printf("\n 現在CPU的時間 : %d Ticks", ck1);
    printf("\n\n 開始計時，按 '/' 停止計時...."); 
    while (tQuit != '/')  {
        tQuit = getch();
	}
	
	t2=time(NULL);
	ck2=clock();
	printf("\n\n 計時結束!!\n"); 
	printf("\n 現在系統的時間 : %d 秒", t2);
	printf("\n 現在CPU的時間 : %d Ticks", ck2);
     printf("\n\n 系統共經過 %d 秒 ", (int)difftime(t2,t1));
	printf("\n CPU共經過 %d Ticks ", ck2-ck1);
   
    printf("\n\n");
    system("PAUSE");
	return 0;
}
