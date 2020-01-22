#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int eng,math;
	char grade;
	printf("請輸入學生的英文成績 > ");
	scanf("%d",&eng);
	printf("請輸入學生的數學成績 > ");
	scanf("%d", &math);
	if (eng>=70 && math>=70) 
	    grade = 'A';
	else if (eng<60 && math<60)
	    grade = 'C';
	else 
	    grade = 'B';
	
	printf("\n該學生的英文成績 %d 分，數學成績 %d 分，其等級為 %c", eng, math, grade);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
