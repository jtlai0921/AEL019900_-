#include <stdio.h>
#include <stdlib.h>
#define CIRCLE 1
#if CIRCLE == 1	/*根據CIRCLE巨集定義值，來定義不同的AREA巨集*/ 
	#define AREA(a) (3.14*(a)*(a))
	#define MSG "圓形半徑："
#else
	#define AREA(a) ((a)*(a))
	#define MSG "正方形邊長："
#endif

int main(int argc, char *argv[]) {
	int x;	
	printf("請輸入%s",MSG);
	scanf("%d",&x);
	#if CIRCLE == 1	/*因為敘述的內容不同，所以用條件式編譯*/
		printf("圓形面積等於：%.2f\n",AREA(x));
	#else
		printf("正方形面積等於：%d\n",AREA(x));	
	#endif
	system("PAUSE");
	return 0;
}
