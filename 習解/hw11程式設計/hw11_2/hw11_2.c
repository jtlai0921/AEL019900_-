#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[50][3];
    int i, num;
    int t[3] = {0};
    
    printf("�п�J�ǥͤH�ơG");
    scanf("%d", &num);
    printf("\n�п�J��,�^,�Ʀ��Z(�H�r�����j)\n"); 
    for(i = 0; i < num; i ++){
        printf("�y��%2d�ǥͦ��Z�G", i + 1);
        scanf("%d,%d,%d", a[i]+0, a[i]+1, a[i]+2);
        t[0] += *(a[i]+0);
        t[1] += *(a[i]+1);
        t[2] += *(a[i]+2);
    }
    printf("���G%.2f �^��G%.2f �ƾǡG%.2f\n", t[0]/(float)num, t[1]/(float)num, t[2]/(float)num);
    system("PAUSE");
	return 0;
}
