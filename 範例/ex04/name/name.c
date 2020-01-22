#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char cname[20], ename[20];
  printf("請輸入中文姓名: " );
  scanf("%s",&cname);
  printf("你的中文名字為 %s \n", cname);
  printf("\n");
  printf("請輸入英語姓名: " );
  scanf("%s",&ename);
  printf("你的英語名字為 %s \n\n", ename);
 
  system("PAUSE");
  return 0;
}
