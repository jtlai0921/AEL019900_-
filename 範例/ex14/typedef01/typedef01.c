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

typedef struct score COURSE;	/* COURSE 取代 struct score	*/

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
    /* 指定第一位同學的課程成績 */
	COURSE no1;
	no1 = average("David", 81, 80, 80);
	/* 指定第二位同學的課程成績 */
	COURSE no2;
	no2 = average("Jasper", 65, 100, 45);
	printf(" 姓名\t作業\t期中考\t期末考\t平均\n");
	printf("======================================\n");
	/* 印出第一位同學的課程成績 */
	printf(" %s\t%d\t%d\t%d\t%5.2f\n", 
	   no1.name, no1.hw, no1.mid, no1.final, no1.avg);
	/* 印出第二位同學的課程成績 */
	printf(" %s\t%d\t%d\t%d\t%5.2f\n", 
	   no2.name, no2.hw, no2.mid, no2.final, no2.avg);
	system("PAUSE");	
	return 0;
}
