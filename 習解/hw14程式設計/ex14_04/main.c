#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct
{
	char name[10];
	int chi, eng, math, avg;	
}student;

int main(int argc, char *argv[]) {
	student stu[5]={
	               {"peter", 45,45,98,0}, 
	               {"tim", 45,85,98,0}, 
	               {"lung", 75,65,98,0}, 
	               {"Jhon", 75,55,98,0}, 
	               {"Mary", 77,68,11,0}, 
	              };
        
	int i=0, j=0, avg, t;
	char ch, name[10]; 
	printf("排序前...\n");  
	printf("姓名\t國文\t英文\t數學\t平均\n");       
	for (i=0; i<5; i++)
	{
		stu[i].avg=(stu[i].chi+stu[i].eng+stu[i].math)/3;
		printf("%s\t%d\t%d\t%d\t%d\n", 
			stu[i].name, stu[i].chi, stu[i].eng, stu[i].math, stu[i].avg);
	}
  
	printf("\n");
	printf(" 1.平均由小由到排序   2.平均由大到小排序：");
	ch=getche();
	printf("\n\n");
	
	if(ch=='1')
	{
		for(i=3;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				if(stu[j].avg>stu[j+1].avg)
				{
					strcpy(name, stu[j].name);
					strcpy(stu[j].name, stu[j+1].name);
					strcpy(stu[j+1].name, name);
					
					t=stu[j].chi;
					stu[j].chi=stu[j+1].chi;
					stu[j+1].chi=t;
					
					t=stu[j].eng;
					stu[j].eng=stu[j+1].eng;
					stu[j+1].eng=t;
					
					t=stu[j].math;
					stu[j].math=stu[j+1].math;
					stu[j+1].math=t;
					
					t=stu[j].avg;
					stu[j].avg=stu[j+1].avg;
					stu[j+1].avg=t;
				}
			}
		}
		printf("排序後...\n");  
		printf("姓名\t國文\t英文\t數學\t平均\n");       
		for (i=0; i<5; i++)
		{
			printf("%s\t%d\t%d\t%d\t%d\n", 
				stu[i].name, stu[i].chi, stu[i].eng, stu[i].math, stu[i].avg);
		}
	}
	else if(ch=='2')
	{
		for(i=3;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				if(stu[j].avg<stu[j+1].avg)
				{
					strcpy(name, stu[j].name);
					strcpy(stu[j].name, stu[j+1].name);
					strcpy(stu[j+1].name, name);
					
					t=stu[j].chi;
					stu[j].chi=stu[j+1].chi;
					stu[j+1].chi=t;
					
					t=stu[j].eng;
					stu[j].eng=stu[j+1].eng;
					stu[j+1].eng=t;
					
					t=stu[j].math;
					stu[j].math=stu[j+1].math;
					stu[j+1].math=t;
					
					t=stu[j].avg;
					stu[j].avg=stu[j+1].avg;
					stu[j+1].avg=t;
				}
			}
		}
		printf("排序後...\n");  
		printf("姓名\t國文\t英文\t數學\t平均\n");       
		for (i=0; i<5; i++)
		{
			printf("%s\t%d\t%d\t%d\t%d\n", 
				stu[i].name, stu[i].chi, stu[i].eng, stu[i].math, stu[i].avg);
		}      
	}
	else
	{
		printf(" 無此功能!!");
	}
    
    printf("\n");
    system("PAUSE");
	return 0;
}
