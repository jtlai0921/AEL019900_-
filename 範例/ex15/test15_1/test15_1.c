#include <stdio.h>
#include <stdlib.h>
#define infile "in1.txt"

void rotate(int[10][10], int *, int *);      //旋轉自定函數
void turn(int[10][10], int, int);            //翻轉自定函數
void print(int[10][10], int, int);           //輸出自定函數

int main(int argc, char *argv[]) {
    int A[10][10], B[10];
    int R, C, M, i, j, k;
	
    FILE *fp;
    fp = fopen(infile, "r");
    fscanf(fp, "%d %d %d", &R, &C, &M);
    printf("輸入\n");
    printf("%d %d %d\n", R, C, M);
    for(i = 0; i < R; i ++){
        for(j = 0; j < C; j ++){
            fscanf(fp, "%d", &A[i][j]);
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for(k = 0; k < M; k ++){
        fscanf(fp, "%d", &B[k]);
        printf("%d ", B[k]);
    }
    printf("\n\n");
    fclose(fp);
	
    for(k=M-1; k>=0; k--) {
        switch(B[k]) {
            case 0:      //rotate(旋轉)
                rotate(A, &R, &C);
                printf("旋轉\n");
                print(A, R, C);
                break;
            case 1:      //turn(翻轉)
                turn(A, R, C);
                printf("翻轉\n");
                print(A, R, C);
                break;
        }
    }
	
    printf("正確輸出\n");
    print(A, R, C);

    system("PAUSE");
    return 0;
}

void rotate(int A[10][10], int *R, int *C) {
    int rA[10][10];
    int rR=*C, rC=*R;
    int i, j;
    for(i=0; i<rR; i++) {
        for(j=0; j<rC; j++) {
            rA[i][j] = A[j][rR-i-1];
        }
    }
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            A[i][j] = rA[i][j];
        }
    }
    *R=rR;
    *C=rC;
}

void turn(int A[10][10], int R, int C) {
    int tA[10][10];
    int i, j;
    for(i=0; i<R; i++) {
        for(j=0; j<C; j++) {
            tA[i][j] = A[R-i-1][j];
        }
    }
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            A[i][j] = tA[i][j];
        }
    }
}

void print(int A[10][10], int R, int C) {
    printf("%d %d\n", R, C);
    int i, j;
    for(i = 0; i < R; i++){
        for(j = 0; j < C; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

