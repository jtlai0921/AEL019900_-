#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 10, j, *iptr;
    
    printf("�ܼƦW��    ��}     ��Ƥ��e\n");
    printf("======== ==========  =========\n");
    printf("  i\t  %X\t%d\n", &i, i);
    printf("  j\t  %X\t%d\n", &j, j);
    printf("  iptr\t  %X\t%X\n", &iptr, iptr);
    iptr = &i;
    printf("  iptr\t  %X\t%X\n", &iptr, iptr);
    j = *iptr;
    printf("  j\t  %X\t%d\n", &j, j);
    system("PAUSE");
	return 0;
}
