#include <stdio.h>
#include <stdlib.h>
#include "area.h" 
int main(int argc, char *argv[]) {
	printf("PI���Ȭ� %f\n", PI);			/* ���PI�Ÿ��`�ƪ��� */
	printf("�����%d������έ��n�� %d\n", 12, SQUARE_AREA(12));			/* ��ܥ���Ϊ����n */	
	printf("�����%f������έ��n�� %f\n", 12.34, SQUARE_AREA(12.34));			/* ��ܥ���Ϊ����n */
	printf("�����%d�B%d������έ��n�� %d\n", 12, 34, RECTANGLE_AREA(12, 34));	/* ��ܪ���Ϊ����n */	
	printf("����%d�B����%d���T���έ��n�� %f\n", 37, 15, TRIANGLE_AREA(37, 15));	/* ��ܤT���Ϊ����n */	
	printf("�W����%d�B�U����%d�B����%d����έ��n�� %f\n",17, 34, 15, TRAPEZOID_AREA(17, 34, 15));	/* ��ܱ�Ϊ����n */
	printf("�b�|��%d����έ��n�� %f\n", 15, CIRCLE_AREA(15));	/* ��ܶ�Ϊ����n */				
	system("PAUSE");
	return 0;
}
