#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person
{
       char id[10];
       char name[10];
       char tel[12];
};

struct company
{
       char id[10];
       char name[30];
       char fax[12];
       char tel[12];
};

union unmember
{
      struct person unperson;
      struct company uncompany;
};

int main(int argc, char *argv[]) {
	union unmember myunion;
	char ch;
	printf("�аݱz�O��´�O->1.���q  2.�ӤH�G");
	ch=getche();
	printf("\n\n");
	printf("�п�J���\n");
	if(ch=='1')
	{
		printf("�νs�G");
		gets(myunion.uncompany.id);
		printf("���q�G");
		gets(myunion.uncompany.name);
		printf("�ǯu�G");
		gets(myunion.uncompany.fax);
		printf("�q�ܡG");
		gets(myunion.uncompany.tel);
		printf("�z��J�����->�νs%s, ���q%s, �ǯu%s, �q��%s", 
			myunion.uncompany.id, myunion.uncompany.name, 
			myunion.uncompany.fax, myunion.uncompany.tel);
	}
	else if(ch=='2')
	{
	printf("�s���G");
	gets(myunion.unperson.id);
	printf("�m�W�G");
	gets(myunion.unperson.name);
	printf("�ǯu�G");
	gets(myunion.unperson.tel);
	printf("�z��J�����->�s��%s, �m�W%s, �q��%s", 
		myunion.unperson.id, myunion.unperson.name, myunion.unperson.tel); 
	}
	else
	{
		printf("�L������...");
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
