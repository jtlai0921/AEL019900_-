#include <stdio.h>
#include <stdlib.h>	/* ���Y�� */
float off = 0.85;   /* �ŧi�馩off�������ܼơA�ó]���=0.85 */
void get_off(int);  /* �ŧiget_off()���۩w�禡 */
int x=1;
int main(int argc, char *argv[]) 
{
	int price = 1600;	/* �ŧiprice������禡���ϰ����ܼƨó]�w��� */
	printf("����� %d ���A�馩�� %.2f \n", price, off);/*��ܭ���M�馩*/
	get_off(price);		/* �I�sget_off�۩w�禡�A�޼Ƭ�price */
	system("PAUSE");	/* �Ȱ�����H�[�ݰ��浲�G */
	return 0;
}

void get_off(int p)	/* �p��馩�᪺���B */
{
	float total;		/* �ŧitotal���ϰ��ܼơA��ƫ��O���B�I�� */
	total = p * off;	/* �N������Hoff�馩�� */
	printf("�馩�� %.1f ��\n", total);  /* ��ܧ馩�᪺���B */  
}

