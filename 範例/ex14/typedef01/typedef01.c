#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char STRING[10];
typedef int INTEGER;
typedef float REAL;
struct score
{
	 STRING name;		/* char name[10];	*/
	 INTEGER hw; 	 	/* int hw;    		*/
	 INTEGER mid;    	/* int mid;   		*/
	 INTEGER final;  	/* int final;		*/
	 REAL avg;      	/* float avg;		*/
};

typedef struct score COURSE;	/* COURSE ���N struct score	*/

COURSE average(STRING tname,int thw,int tmid,int tfinal)
{
	COURSE tbcc;
	strcpy(tbcc.name,tname);	
	tbcc.hw = thw;
	tbcc.mid = tmid;
	tbcc.final=tfinal;
	tbcc.avg=(tbcc.hw*0.3+tbcc.mid*0.3+tbcc.final*0.4);
	return tbcc;
}

int main(int argc, char *argv[]) {
    /* ���w�Ĥ@��P�Ǫ��ҵ{���Z */
	COURSE no1;
	no1 = average("David", 81, 80, 80);
	/* ���w�ĤG��P�Ǫ��ҵ{���Z */
	COURSE no2;
	no2 = average("Jasper", 65, 100, 45);
	printf(" �m�W\t�@�~\t������\t������\t����\n");
	printf("======================================\n");
	/* �L�X�Ĥ@��P�Ǫ��ҵ{���Z */
	printf(" %s\t%d\t%d\t%d\t%5.2f\n", 
	   no1.name, no1.hw, no1.mid, no1.final, no1.avg);
	/* �L�X�ĤG��P�Ǫ��ҵ{���Z */
	printf(" %s\t%d\t%d\t%d\t%5.2f\n", 
	   no2.name, no2.hw, no2.mid, no2.final, no2.avg);
	system("PAUSE");	
	return 0;
}
