#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(int argc, char *argv[]) {
    char name[20];
    int score, i;
    
    printf("�п�J�^��m�W�G");
    fgets(name, sizeof(name), stdin);
    printf("�п�J�^�妨�Z�G");
    scanf("%d", &score);
    i = strlen(name);
    name[i - 1] = '\0';
    printf("%s �A�n�I�A���^�妨�Z�O%d\n", name, score);
    system("PAUSE");

	return 0;
}
