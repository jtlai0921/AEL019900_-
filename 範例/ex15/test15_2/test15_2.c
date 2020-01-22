#include <stdio.h>
#include <stdlib.h>
#define infile "in1.txt"

int main(int argc, char *argv[]) {
    int man[200000];
    int n, m, k;
    int i, j, ptr, pre;
	
    FILE *fptr;
    fptr = fopen(infile, "r");
    fscanf(fptr, "%d %d %d", &n, &m, &k);
    fclose(fptr);
    for(i = 0; i < n; i ++){
        man[i] = i + 1;
    }
    man[n - 1] = 0;
    pre = n - 1;
    ptr = 0;
    for(i = 0; i < k; i ++){
        for(j = 0; j < m - 1; j ++){
            pre = ptr;
            ptr = man[ptr];
        }
        man[pre] = man[ptr];
        pre = ptr;
        ptr = man[ptr];
    }
    printf("%d\n", ptr + 1);
    system("PAUSE");
    return 0;
}

