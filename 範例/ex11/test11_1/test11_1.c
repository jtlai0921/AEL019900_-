#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5
int * getrand(int x){
    static int a[8];
    int i;
    for(i = 0; i < 8; i ++){
        a[i] = rand() % x;
    }
    return a;
}
        
int main(int argc, char *argv[]) {
    int i, j;
    int x, y;
    int * a;
    int array[MAXSIZE][MAXSIZE]={0};
    
    a = getrand(MAXSIZE);
    for(i = 0; i < 8; i += 2){
        array[*(a+i)][*(a+i+1)] = -1;
    }
    for(;;){
        scanf("%d,%d", &x, &y);
        if(x < 0 || y < 0)
            break;
        if(x >= MAXSIZE || y >= MAXSIZE){
            printf("�W�X�ѽL�A�ФU��L��m\n");
            continue; 
        }
        if(*(array[x]+ y) != 0){
            if(*(array[x]+ y) == 1){
                printf("�w���Ѥl�A�ФU��L��m\n");
                continue; 
            }
            else{
                printf("���a�p�F�A�����{��\n");
                break; 
            }
        }
        *(array[x]+ y) = 1;
    }
    printf("   ");
    for(i = 0; i < MAXSIZE; i ++){
        printf(" %d ", i);
    }
    printf("\n\n");
	for(i = 0; i < MAXSIZE; i ++){
	    printf("%d :", i);
	    for(j = 0; j < MAXSIZE; j ++){
	        if(array[i][j] == 1)
	           printf(" O ");
	        else if(array[i][j] == -1)
	           printf(" X ");
	        else
	           printf("   ");
        }
        printf("\n");
    }
    system("PAUSE");
	return 0;
}

