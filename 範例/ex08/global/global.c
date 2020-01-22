#include <stdio.h>
#include <stdlib.h>

int v1=3, v2=8;              	 /* 全域變數 */ 
int main(int argc, char *argv[]) {
	printf(" v1 \t v2 \t v3 \t v4 \t v5 \t v6 \n");
	printf(" ==== \t ==== \t ==== \t ==== \t ==== \t ==== \n");
	printf(" %d \t %d \n", v1, v2);
	int v3=11, v4=15;    	/* main()主函數大範圍的區域變數 */ 
	v1++; v2++; v3++; v4++;
	printf(" %d \t %d \t %d \t %d \n", v1, v2, v3, v4);
	while (1) {               
		int v3=24, v5=27;    	/* 迴圈結構小範圍的區域變數 */
		v1++; v2++; v3++; v4++; v5++;
		printf(" %d \t %d \t %d \t %d \t %d \n", v1, v2, v3, v4, v5);
		if (1) {
			int v1=33, v6=38;   /* 選擇結構較小範圍的區域變數 */
			v1++; v2++; v3++; v4++; v5++; v6++;
		    printf(" %d \t %d \t %d \t %d \t %d \t %d \n", v1, v2, v3, v4, v5, v6);
		}
		printf(" %d \t %d \t %d \t %d \t %d \n", v1, v2, v3, v4, v5);
		break;
	}
	printf(" %d \t %d \t %d \t %d \n", v1, v2, v3, v4);
	
	printf("\n");
	system("PAUSE");
	return 0;
}
