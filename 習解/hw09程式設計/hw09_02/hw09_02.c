#include <stdio.h>
#include <stdlib.h>
#define MAX2(a,b) ((a)>(b)?(a):(b))	/*ㄏノじ笲衡ㄓ肚ㄢ计程*/ 
#define MAX3(a,b,c) MAX2(a,MAX2(b,c))	/*ノMAX2エ栋ㄓ﹚竡MAX3*/ 
#define MAX4(a,b,c,d) MAX2(MAX2(a,b),MAX2(c,d))	/*ノMAX2エ栋ㄓ﹚竡MAX4*/
#define MAX5(a,b,c,d,e) MAX2(MAX2(a,b),MAX3(c,d,e))	/*ノMAX2㎝MAX3エ栋ㄓ﹚竡MAX4*/
int main(int argc, char *argv[]) {
	int a=12,b=8,c=26,d=18,e=5;
	printf("%d%d 程 = %d\n",a,b,MAX2(a,b));
	printf("%d%d%d 程 = %d\n",a,b,c,MAX3(a,b,c));
	printf("%d%d%d%d 程 = %d\n",a,b,c,d,MAX4(a,b,c,d));
	printf("%d%d%d%d%d 程 = %d\n",a,b,c,d,e,MAX5(a,b,c,d,e));			
	system("PAUSE");
	return 0;
}
