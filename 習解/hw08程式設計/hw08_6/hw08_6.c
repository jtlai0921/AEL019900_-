#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void printnum(int);

int main(int argc, char *argv[]) {
    int num;
	printf("�D��ơA�п�J�@�ӼơG");
	scanf("%d", &num);
	printnum(num);

	printf("\n\n");
	system("PAUSE");
	return 0;
}

void printnum(int num)
{
	int i, j;
	int flag, line=0;
	printf("\n1-%d����Ʀp�U�G\n\n", num);
	for(i=2; i<=num; i++)
	{
		flag=0;
		for(j=2;j<i; j++)
		{
			if(i%j==0)
				flag=1;
		}
		if(flag==0)
		{
			printf("%5d ", i);
			line++;
			if(line%10==0)
				printf("\n");
		}
	}
}

