#include <stdio.h>
#include <stdlib.h>

#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;			//�ŧi�ɮ׫���fptr 
  	//�r���}�Cfpath�ΨӦs���ɮ׸��|, keyin�ΨӦs��ϥΪ̿�J�n�s�J�ɮת���� 
	char fpath[LEN], keyin[LEN];	  
	int fno, fsize, i;	//�ŧifno�ΨӦs���ɮץN�X�Afsize�ΨӦs���ɮפj�p, i�j��p�ƥ� 
	printf("�п�J�n�}���ɮת�������|���ɦW�G");
	gets(fpath);		//�N��L��J���ɮ׸��|���w��fpath			
	fptr=fopen(fpath, "a+"); 	//�ϥ�fopen()�禡�إߥi���[��ƪ�fptr�ɮ׸��	
	if(fptr==NULL)		//�P�_�O�_���}�ɥ��� 
	{
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
	    system("PAUSE");
		exit(0);		//�����{�� 
	}
	while(1) //���w�L�a�j��A���ϥΪ̥i�s���J��� 
	{
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y')	//�Y��J 'y' �� 'Y' ��ܭn�~��s�W��� 
		{
			printf("\n�п�J�n�s�W����ơG");
			gets(keyin);	//���o�ϥΪ���L��J����ƨë��w��keyin
			//�Nkyein�r���}�C������Ƥ@�Ӧr�@�Ӧr���[����w���ɮפ�	
			for(i=0; i<strlen(keyin) ; i++)
			{
				fputc(keyin[i], fptr);
			}
			fputc('\n', fptr);	//�ɮש�J '\n' ����r�� 
		}
		else
		{
			fclose(fptr);  //�����ɮ� 
			break;	
		}
	}
	printf("\n\n");   
	system("PAUSE");	
	return 0;
}
