#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int eng,math;
	char grade;
	printf("�п�J�ǥͪ��^�妨�Z > ");
	scanf("%d",&eng);
	printf("�п�J�ǥͪ��ƾǦ��Z > ");
	scanf("%d", &math);
	if (eng>=70 && math>=70) 
	    grade = 'A';
	else if (eng<60 && math<60)
	    grade = 'C';
	else 
	    grade = 'B';
	
	printf("\n�Ӿǥͪ��^�妨�Z %d ���A�ƾǦ��Z %d ���A�䵥�Ŭ� %c", eng, math, grade);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
