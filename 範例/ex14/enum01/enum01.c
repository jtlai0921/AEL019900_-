#include <stdio.h>
#include <stdlib.h>

enum months {	/* ��� */
   		Jan=1, Feb, Mar, Apr, May, Jun,  	/* Jan=1, Feb=2, �KDec=12 */
		Jul, Aug, Sep, Oct, Nov, Dec     		   
} ;

int main(int argc, char *argv[]) {
	int year=0,month=0,day=0;
	printf(" �п�J���Ѫ����(�榡yy/mm/dd)�G");
	scanf("%d/%d/%d", &year, &month, &day);  /* scanf_s() for VC++  */
	printf("\n ���ѬO %d�~ %d�� %d�� ! ... \n", year, month, day);
	switch(month)
	{
		case Jan:
			printf(" %2d�� �S�O�s���@�~�}�l ...", Jan);
			break;
		case Feb:
			printf(" ��v���H�`�b %2d ��A�O�o�e§�����H", Feb);
			break;
		case Mar:
			printf(" %2d ���H������ , �s�Ǵ��}�l !", Mar);
			break;
		case Apr:
			printf(" %2d �릳�K���A�n�n�𮧧a ! ", Apr);
			break;
		case May:
			printf(" %2d / 1 �Ұʸ`�A�Ҥu���S�̺֮�� ! ", May);
			break;
		case Jun:
			printf(" %2d �� �����Ҩ�F ! ", Jun);
			break;
		case Jul:
		case Aug:
			printf(" 7, 8 ��O��������" );
			break;
		case Sep:
		case Oct:
		case Nov:
			printf(" 9, 10, 11����n " );
			break;
		case Dec:
			printf(" %2d ����{�A�t�ϸ`�֨�F", Dec);
			break;
	}
	printf("\n\n");
	system("PAUSE");	
	return 0;
}
