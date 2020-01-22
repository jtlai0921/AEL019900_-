#include <stdio.h>
#include <stdlib.h>

#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;			//宣告檔案指標fptr 
	char fpath[LEN] ;	//宣告字元陣列fpath用來存放檔案路徑  
	int fno, fsize;		//宣告fno用來存放檔案代碼，fsize用來存放檔案大小 
	char ch;			//宣告ch字元變數用來存放每一個讀出的字元 
	printf("請輸入要開啟檔案的完整路徑及檔名：");
	gets(fpath);		//將鍵盤輸入的檔案路徑指定給fpath			
	fptr=fopen(fpath, "r"); 	//使用fopen()函式建立可讀取資料的fptr檔案資料	
	if(fptr==NULL)		//判斷是否為開檔失敗 
	{
		printf("\n開檔失敗, %s 可能不存在\n", fpath);
	    system("PAUSE");
		exit(0);		//結束程式 
	}
	fno=fileno(fptr);	//取得檔案代碼對指定給fno			
	fsize=filelength(fno);		//取得檔案大小並指定給fsize 
	printf("\n%s 開檔完成, 檔案大小 %d Bytes\n", fpath, fsize);
	printf("%s 資料檔內容如下\n", fpath);
	//使用while()迴圈配合fgetc()函式逐一取出一個字元並判斷是否不是檔案結尾EOF 
	while((ch=fgetc(fptr))!=EOF)	 
	{
		//若還沒到檔案結尾EOF，則持續印出目前的ch字元 
		printf("%c", ch);
	}
	fclose(fptr);	//關閉檔案 
	printf("\n\n");
	system("PAUSE");	
	return 0;
}
