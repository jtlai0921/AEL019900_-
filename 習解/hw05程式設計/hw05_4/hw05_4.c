#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year;
	printf("�п�J�@�� 4 ��ƪ��褸�~�G ");
	scanf("%d",&year);
	
	if ((year%4==0) && ((year%100!=0) || (year%400==0)))
        printf("\n�褸 %d �~���|�~�C", year);
    else
        printf("\n�褸 %d �~�����~�C", year);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
