#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, data[6];
	for (i=0; i<6; i++) {
        printf("�п�J�� %d �Ӿ�Ƹ�ƨ�}�C���G", i+1);
        scanf("%d", &data[i]);
    }   

    printf("\n");
    system("PAUSE");
	return 0;
}

