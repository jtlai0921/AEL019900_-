#include <time.h>
void  printffive();
void  printfbiglot();

void printffive()
{
    int i=0;
    printf(" �����|�P�m���X�p�U�G"); 
    srand((unsigned)time(NULL));/*�üƺؤl��*/
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
    srand((unsigned)time(NULL));/*�üƺؤl��*/
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
	   printf("\n �����j�ֳz�}�����X�p�U�G\n");
	   for(i=0; i<6; i++)						/* �L�X�j�ֳz�e6�Ӹ��X */
	   {
		 printf(" %d", choose[i]);
	   }
	   printf("\t �S�O���G %d \n", choose[6]);	/* �L�X�j�ֳz���S�O�� */
}
	   
	  
