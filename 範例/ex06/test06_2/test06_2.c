#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int guess, ans=72;
	int count=0;
	int isGuess=0;
	printf("**** �q�ƥعC�� ****\n");
	do {
		printf("\n�q 0~100 ���q�@�Ӿ�ơG");
		scanf("%d", &guess);
		if (guess==ans) {
			printf("���G�I �A����F�I ���T���׬O %d", ans); 
			isGuess=1;
		} else {
			if (guess>ans) {
				printf("�q�Ӥj�F�I �A�Ӥ@���I �[��l�I"); 
			} else {
				printf("�q�Ӥp�F�I �A�Ӥ@���I ����k�I"); 
		    }
		}
		count++;
		printf("\n");
	} while (isGuess!=1);
	printf("\n�A�`�@�q�F %d ���I\n\n", count);
	
	system("PAUSE");
	return 0;
}
