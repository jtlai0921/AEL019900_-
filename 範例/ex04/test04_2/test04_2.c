#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char gname[16];          //�~�W�r���}�C 
    float price, money;       //���,���B�ܼ� 
    int num;                 //�ƶq�ܼ�
    printf("��J�f���~�W�G ");
    gets(gname);
    printf("��J����G ");
    scanf("%f",&price);
    printf("��J�ƶq�G ");
    scanf("%d", &num);
    money = price*num;
    printf("\n");
    printf("�~�W�G %s\n", gname);
    printf("����G %f\n", price);
    printf("�ƶq�G %d\n", num);
    printf("���B�G %.1f\n\n", money);
	
    system("PAUSE");
    return 0;
}

