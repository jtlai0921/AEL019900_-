#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <io.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *stream1;
	int letter[26]={0};
	char ch;
	
	int lot[49]={0}, s[49]={0};		
	int choose[7];		
	int min=1, max=49, num=7;
	int max_dim, choice;
	int i, j;
	int k;	 
	stream1=fopen("lot.txt","w");
	if (stream1==NULL)
	{
		printf("檔案開啟失敗!!\n");
		system("PAUSE");
		return 0;
	}
	else
	{
		srand((unsigned)time(NULL));/*亂數種子器*/
		for(k=1; k<=10; k++)
		{	
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
			fprintf(stream1, "\n 第 %2d 組大樂透開獎號碼如下：\n", k);
			for(i=0; i<6; i++)						/* 印出大樂透前6個號碼 */
			{
				fprintf(stream1, " %d", choose[i]);
			}
			fprintf(stream1, "\t 特別號： %d \n", choose[6]);	/* 印出大樂透的特別號 */
		}
	}
	printf("10組樂透彩號碼己經寫入lot.txt檔了...");
	fclose(stream1);

	system("PAUSE");
	return 0;
}
