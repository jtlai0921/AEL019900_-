#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int score;
	printf("�п�J��ߪ����N���ơG ");
	scanf("%d", &score);
	if (score>=90 && score<=100) { 
		printf("\n��ߦ��Z \'%s\'", "�u"); 
		printf("\n���y�G%s\n\n", "���N�D�Z"); 
	} else if (score>=80 && score<=89) {
		printf("\n��ߦ��Z \'%s\'", "��"); 
		printf("\n���y�G%s\n\n", "��{�}�n"); 
	} else if (score>=70 && score<=79) {
		printf("\n��ߦ��Z \'%s\'", "�A"); 
		printf("\n���y�G%s\n\n", "�t�j�H�N"); 
	} else if (score>=60 && score<=69) {
		printf("\n��ߦ��Z \'%s\'", "��"); 
		printf("\n���y�G%s\n\n", "�����V�O"); 
	} else if (score>=0 && score<=59) {
		printf("\n��ߦ��Z \'%s\'", "�B");  
		printf("\n���y�G%s\n\n", "�ݥ[�j"); 
    } else {
    	printf("\n��J���~�I");  
		printf("\n���ƶ��b0~100����\n\n"); 
    }
 
	system("PAUSE");
	return 0;
}
