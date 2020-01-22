#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[50][3];
    int i, num;
    int t[3] = {0};
    
    printf("請輸入學生人數：");
    scanf("%d", &num);
    printf("\n請輸入國,英,數成績(以逗號分隔)\n"); 
    for(i = 0; i < num; i ++){
        printf("座號%2d學生成績：", i + 1);
        scanf("%d,%d,%d", a[i]+0, a[i]+1, a[i]+2);
        t[0] += *(a[i]+0);
        t[1] += *(a[i]+1);
        t[2] += *(a[i]+2);
    }
    printf("國文：%.2f 英文：%.2f 數學：%.2f\n", t[0]/(float)num, t[1]/(float)num, t[2]/(float)num);
    system("PAUSE");
	return 0;
}
