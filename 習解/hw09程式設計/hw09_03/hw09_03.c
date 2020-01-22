#include <stdio.h>
#include <stdlib.h>
#include "average.h"	/*含入average.h自訂標頭檔*/ 
int main(int argc, char *argv[]) {
	int a=12,b=27,c=7,d=59;
	printf("%d、%d的平均數為 %f\n",a,b,AVERAGE2(a,b));
	printf("%d、%d、%d的平均數為 %f\n",a,b,c,AVERAGE3(a,b,c));
	printf("%d、%d、%d、%d的平均數為 %f\n",a,b,c,d,AVERAGE4(a,b,c,d));	
	system("PAUSE");
	return 0;
}
