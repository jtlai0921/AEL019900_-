#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ID 1

#if ID==1
 #include "binary.h"
#else
 #include "linear.h"
#endif

int main(int argc, char *argv[]) {
	int data[]={2,21,36,44,5,6};
	int input, i;
	
	printf("�}�C���->");
	for(i=0; i<6;i++)
	{
		printf("%3d", data[i]);
	}
	printf("\n\n�п�J�n�M�䪺��ơG");
	scanf("%d", &input);
	search(data, 6, input);
	
	printf("\n");
	system("PAUSE");
	return 0;
}
