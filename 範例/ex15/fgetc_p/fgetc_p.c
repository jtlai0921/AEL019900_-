#include <stdio.h>
#include <stdlib.h>

#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;			//�ŧi�ɮ׫���fptr 
	char fpath[LEN] ;	//�ŧi�r���}�Cfpath�ΨӦs���ɮ׸��|  
	int fno, fsize;		//�ŧifno�ΨӦs���ɮץN�X�Afsize�ΨӦs���ɮפj�p 
	char ch;			//�ŧich�r���ܼƥΨӦs��C�@��Ū�X���r�� 
	printf("�п�J�n�}���ɮת�������|���ɦW�G");
	gets(fpath);		//�N��L��J���ɮ׸��|���w��fpath			
	fptr=fopen(fpath, "r"); 	//�ϥ�fopen()�禡�إߥiŪ����ƪ�fptr�ɮ׸��	
	if(fptr==NULL)		//�P�_�O�_���}�ɥ��� 
	{
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
	    system("PAUSE");
		exit(0);		//�����{�� 
	}
	fno=fileno(fptr);	//���o�ɮץN�X����w��fno			
	fsize=filelength(fno);		//���o�ɮפj�p�ë��w��fsize 
	printf("\n%s �}�ɧ���, �ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	//�ϥ�while()�j��t�Xfgetc()�禡�v�@���X�@�Ӧr���çP�_�O�_���O�ɮ׵���EOF 
	while((ch=fgetc(fptr))!=EOF)	 
	{
		//�Y�٨S���ɮ׵���EOF�A�h����L�X�ثe��ch�r�� 
		printf("%c", ch);
	}
	fclose(fptr);	//�����ɮ� 
	printf("\n\n");
	system("PAUSE");	
	return 0;
}
