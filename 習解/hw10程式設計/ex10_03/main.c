#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun1(int);
int main(int argc, char *argv[]) {
	int keyin; /* �s���J�� */
	
	while(1){
		printf("\n�п�J��ƼƭȡG");
		scanf("%d", &keyin);
		fun1(keyin);
		if(keyin == 0) /* �p�G��J�Ȭ�0�h�����j�� */ 
			break;
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
void fun1(int x){
	static int max = 1; /*�����R�A�ܼ� */ 
	
	if(x > max) /* �p�G��J�Ȥj���x�s�ȡA�h��J�Ȩ��N�x�s�� */ 
		max = x;
	if(x == 0){
		printf("\n�̤j�ȡG%d", max); /* ��̤ܳj�� */ 
	}
}
