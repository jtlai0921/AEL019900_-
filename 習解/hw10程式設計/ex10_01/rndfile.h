#include <time.h>
void  printffive();
void  printfbiglot();

void printffive()
{
    int i=0;
    printf(" 本期四星彩號碼如下："); 
    srand((unsigned)time(NULL));/*亂數種子器*/
    for(i=1; i<=4; i++)
    {
       printf("%3d", rand()%10);
    }
    printf("\n\n");
}

void printfbiglot()
{
    int lot[49]={0}	;	
	int choose[7];		
	int min=1, max=49, num=7;
	int max_dim, choice;
	int i, j;
	int k;	 
    srand((unsigned)time(NULL));/*亂數種子器*/
	   max_dim=max-min+1;
	   for(i=0;i<max_dim;i++)
	   {
		lot[i]=min+i;
	   }

	   for(i=0;i<num;i++)
	   {
	     choice=rand()%max_dim;
		 choose[i]=lot[choice];
		 for(j=choice;j<max_dim;j++)
		 {
			lot[j]=lot[j+1];
		 }
		 max_dim--;
       }
	   printf("\n 本期大樂透開獎號碼如下：\n");
	   for(i=0; i<6; i++)						/* 印出大樂透前6個號碼 */
	   {
		 printf(" %d", choose[i]);
	   }
	   printf("\t 特別號： %d \n", choose[6]);	/* 印出大樂透的特別號 */
}
	   
	  
