#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, num;
    int *ptr;
    int t[3] = {0};
    
    printf("請輸入學生人數：");
    scanf("%d", &num);
    ptr = (int *)malloc(num * 3 * sizeof(int));
    if(ptr != NULL){
        printf("\n請輸入國,英,數成績(以逗號分隔)\n"); 
        for(i = 0; i < num; i ++){
            printf("座號%2d學生成績：", i + 1);
            scanf("%d,%d,%d", ptr+i*3+0, ptr+i*3+1, ptr+i*3+2);
        }
        for(i = 0; i < num; i ++){
            t[0] += *(ptr+i*3+0);
            t[1] += *(ptr+i*3+1);
            t[2] += *(ptr+i*3+2);
        }
        printf("國文：%.2f 英文：%.2f 數學：%.2f\n", t[0]/(float)num, t[1]/(float)num, t[2]/(float)num);
        free(ptr);
    }
    system("PAUSE");
	return 0;
}
