#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char gname[16];             //珇じ皚 
    float price, money;          //虫基,肂跑计 
    int num;                    //计秖跑计
    printf("块砯珇 ");
    gets(gname);
    printf("块虫基 ");
    scanf("%f", &price);
    printf("块计秖 ");
    scanf("%d", &num);
    money = price*num;
    printf("\n");
    printf(" 珇\t\t 虫基\t 计秖\t 肂\n");
    printf("=======================================\n");
    printf(" %s\t %.3f\t %d\t %.1f\n", gname, price, num, money);
    printf("\n");	

    system("PAUSE");
    return 0;
}

