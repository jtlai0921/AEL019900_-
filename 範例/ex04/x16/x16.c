#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i;
  printf("請輸入十六進制整數："); 
  scanf("%x",&i);
  printf("十六進制的 %#x = 十進制的 %d \n", i, i);
  printf("十進制的 %d = 八進制的 %#o \n\n", i, i);
  
  system("PAUSE");
  return 0;
}
