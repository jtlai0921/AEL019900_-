#include <stdio.h>
#include <stdlib.h>

double avg (int, int);    /* �禡�쫬�ŧi */ 

int main(int argc, char *argv[]) {
	int n1, n2;
	double average;
	printf("�гs���J��Ӿ��(�ΪŮ�j�})�G");
	scanf("%d %d", &n1, &n2) ;
	average=avg(n1, n2);      /* ���Ǧ^�Ȫ��禡�I�s */ 
	printf("���ƪ������Ȭ� %.1f", average);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}

double avg(int n1, int n2) {   /* �Q�I�s���禡�w�q�D�� */ 
    double a;
    a = (n1 + n2)/2.0 ;
    return a;
}
 
