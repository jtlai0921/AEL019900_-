#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char gname[16];             //�~�W�r���}�C 
    float price, money;          //���,���B�ܼ� 
    int num;                    //�ƶq�ܼ�
    printf("��J�f���~�W�G ");
    gets(gname);
    printf("��J����G ");
    scanf("%f", &price);
    printf("��J�ƶq�G ");
    scanf("%d", &num);
    money = price*num;
    printf("\n");
    printf(" �~�W\t\t ���\t �ƶq\t ���B\n");
    printf("=======================================\n");
    printf(" %s\t %.3f\t %d\t %.1f\n", gname, price, num, money);
    printf("\n");	

    system("PAUSE");
    return 0;
}

