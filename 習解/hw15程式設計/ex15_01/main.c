#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <io.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *stream1;
	int letter[26]={0},i;
	char ch;

	stream1=fopen("news.txt","r");
	if (stream1==NULL)
	{
		printf("檔案開啟失敗!!\n");
		system("PAUSE");
		return 0;
	}
	else
	{
		while ((ch=fgetc(stream1))!=EOF)
		{
			if (ch>='A' && ch<='Z')      
			{
				i=(int)ch-65;              
				letter[i]++;               
			}
			else if (ch>='a' && ch<='z') 
			{
				i=(int)ch-97;             
				letter[i]++;               
			}
		}	
		for(i=0;i<26;i++)              
		printf(" %c , %c : %d 個\n",65+i,97+i,letter[i]);
		fclose(stream1);
	}
  
	system("PAUSE");
	return 0;
}
