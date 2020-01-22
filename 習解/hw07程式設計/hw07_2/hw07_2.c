#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	 int num, k=0, n=5, t;
    int i, j;
    char s[6];
    char name[][6]= { "老張", "發叔", "李董", "豪哥", "小何"};
    int age[]= {54, 46, 50, 40, 38};
    
    printf(" 1. 由小到大排序   2. 由大到小排序\n") ;
  	printf(" 請輸入選項：") ;
	scanf("%d", &num);
	printf("\n");
		
	if (num==1)	{
		for (i=n-2 ; i>=0 ; i--) {
			for(j=0 ; j<=i ; j++) {
			   if (age[j] > age[j + 1]) {
					t = age[j];	age[j] = age[j + 1]; age[j + 1] = t;
					strcpy(s, name[j]);	strcpy(name[j], name[j+1]); strcpy(name[j+1], s);
				}
		    }
		}
		printf(" 由小到大排序後：\n") ;
	} else {
		for (i=n-2 ; i>=0 ; i--) {
			for(j=0 ; j<=i ; j++) {
				if (age[j] < age[j + 1]) {
					t = age[j]; age[j] = age[j + 1]; age[j + 1] = t;
					strcpy(s, name[j]);	strcpy(name[j], name[j+1]);	strcpy(name[j+1], s);
				}
			}
		}
		printf(" 由大到小排序後：\n") ;
	}
	for(i=0 ; i<5 ; i++)
		printf("%s：%d  ",name[i],age[i]) ;
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
