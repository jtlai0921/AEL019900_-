#include <stdio.h>
#include <stdlib.h>
#define MAX2(a,b) ((a)>(b)?(a):(b))	/*�ϥΤT���B��l�ӶǦ^��ƪ��̤j��*/ 
#define MAX3(a,b,c) MAX2(a,MAX2(b,c))	/*�Q��MAX2�����өw�qMAX3*/ 
#define MAX4(a,b,c,d) MAX2(MAX2(a,b),MAX2(c,d))	/*�Q��MAX2�����өw�qMAX4*/
#define MAX5(a,b,c,d,e) MAX2(MAX2(a,b),MAX3(c,d,e))	/*�Q��MAX2�MMAX3�����өw�qMAX4*/
int main(int argc, char *argv[]) {
	int a=12,b=8,c=26,d=18,e=5;
	printf("%d�B%d ���̤j�� = %d\n",a,b,MAX2(a,b));
	printf("%d�B%d�B%d ���̤j�� = %d\n",a,b,c,MAX3(a,b,c));
	printf("%d�B%d�B%d�B%d ���̤j�� = %d\n",a,b,c,d,MAX4(a,b,c,d));
	printf("%d�B%d�B%d�B%d�B%d ���̤j�� = %d\n",a,b,c,d,e,MAX5(a,b,c,d,e));			
	system("PAUSE");
	return 0;
}
