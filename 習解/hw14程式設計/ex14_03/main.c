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
	printf("請問您是組織是->1.公司  2.個人：");
	ch=getche();
	printf("\n\n");
	printf("請輸入資料\n");
	if(ch=='1')
	{
		printf("統編：");
		gets(myunion.uncompany.id);
		printf("公司：");
		gets(myunion.uncompany.name);
		printf("傳真：");
		gets(myunion.uncompany.fax);
		printf("電話：");
		gets(myunion.uncompany.tel);
		printf("您輸入的資料->統編%s, 公司%s, 傳真%s, 電話%s", 
			myunion.uncompany.id, myunion.uncompany.name, 
			myunion.uncompany.fax, myunion.uncompany.tel);
	}
	else if(ch=='2')
	{
	printf("編號：");
	gets(myunion.unperson.id);
	printf("姓名：");
	gets(myunion.unperson.name);
	printf("傳真：");
	gets(myunion.unperson.tel);
	printf("您輸入的資料->編號%s, 姓名%s, 電話%s", 
		myunion.unperson.id, myunion.unperson.name, myunion.unperson.tel); 
	}
	else
	{
		printf("無此項目...");
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
