#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, num;
    int *ptr;
    int t[3] = {0};
    
    printf("�п�J�ǥͤH�ơG");
    scanf("%d", &num);
    ptr = (int *)malloc(num * 3 * sizeof(int));
    if(ptr != NULL){
        printf("\n�п�J��,�^,�Ʀ��Z(�H�r�����j)\n"); 
        for(i = 0; i < num; i ++){
            printf("�y��%2d�ǥͦ��Z�G", i + 1);
            scanf("%d,%d,%d", ptr+i*3+0, ptr+i*3+1, ptr+i*3+2);
        }
        for(i = 0; i < num; i ++){
            t[0] += *(ptr+i*3+0);
            t[1] += *(ptr+i*3+1);
            t[2] += *(ptr+i*3+2);
        }
        printf("���G%.2f �^��G%.2f �ƾǡG%.2f\n", t[0]/(float)num, t[1]/(float)num, t[2]/(float)num);
        free(ptr);
    }
    system("PAUSE");
	return 0;
}
