#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    char tQuit;
    time_t t1, t2;
    clock_t ck1, ck2;
    
    ck1=clock();
	t1=time(NULL);
    printf("\n �{�b�t�Ϊ��ɶ� : %d ��", t1);
	printf("\n �{�bCPU���ɶ� : %d Ticks", ck1);
    printf("\n\n �}�l�p�ɡA�� '/' ����p��...."); 
    while (tQuit != '/')  {
        tQuit = getch();
	}
	
	t2=time(NULL);
	ck2=clock();
	printf("\n\n �p�ɵ���!!\n"); 
	printf("\n �{�b�t�Ϊ��ɶ� : %d ��", t2);
	printf("\n �{�bCPU���ɶ� : %d Ticks", ck2);
     printf("\n\n �t�Φ@�g�L %d �� ", (int)difftime(t2,t1));
	printf("\n CPU�@�g�L %d Ticks ", ck2-ck1);
   
    printf("\n\n");
    system("PAUSE");
	return 0;
}
