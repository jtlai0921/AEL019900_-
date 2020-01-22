#include <stdio.h>
#include <stdlib.h>

#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;			//宣告檔案指標fptr 
  	//字元陣列fpath用來存放檔案路徑, keyin用來存放使用者輸入要存入檔案的資料 
	char fpath[LEN], keyin[LEN];	  
	int fno, fsize, i;	//宣告fno用來存放檔案代碼，fsize用來存放檔案大小, i迴圈計數用 
	printf("請輸入要開啟檔案的完整路徑及檔名：");
	gets(fpath);		//將鍵盤輸入的檔案路徑指定給fpath			
	fptr=fopen(fpath, "a+"); 	//使用fopen()函式建立可附加資料的fptr檔案資料	
	if(fptr==NULL)		//判斷是否為開檔失敗 
	{
		printf("\n開檔失敗, %s 可能不存在\n", fpath);
	    system("PAUSE");
		exit(0);		//結束程式 
	}
	while(1) //指定無窮迴圈，讓使用者可連續輸入資料 
	{
		printf("\n請問是否要繼續新增資料(Y/N)：");
		if(toupper(getche())=='Y')	//若輸入 'y' 或 'Y' 表示要繼續新增資料 
		{
			printf("\n請輸入要新增的資料：");
			gets(keyin);	//取得使用者鍵盤輸入的資料並指定給keyin
			//將kyein字元陣列內的資料一個字一個字附加到指定的檔案內	
			for(i=0; i<strlen(keyin) ; i++)
			{
				fputc(keyin[i], fptr);
			}
			fputc('\n', fptr);	//檔案放入 '\n' 換行字元 
		}
		else
		{
			fclose(fptr);  //關閉檔案 
			break;	
		}
	}
	printf("\n\n");   
	system("PAUSE");	
	return 0;
}
