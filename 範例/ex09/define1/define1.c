#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416		/* �ŧi�Ÿ��`�� */
#define AREA PI*r*r		/* �ŧi�ƾǤ��� */
#define BEGIN_B {		/* �ŧi�Ÿ����N */
#define END_B }			/* �ŧi�Ÿ����N */
#define INPUT_MSG "�п�J��Ϊ��b�|�G"		/* �ŧi�r����N */
#define OUTPUT_MSG "��Ϊ����n���� %.2f\n"	/* �ŧi�榡���N */
#define PAUSE system("PAUSE") 	/* �ŧi���O���N */

int main(int argc, char *argv[]) 
BEGIN_B 
	int r;
	printf(INPUT_MSG);
	scanf("%d",&r);
	printf(OUTPUT_MSG, AREA);
	PAUSE; 
	return 0;
END_B 
