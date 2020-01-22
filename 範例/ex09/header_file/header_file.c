#include <stdio.h>
#include <stdlib.h>
#include "area.h" 
int main(int argc, char *argv[]) {
	printf("PI的值為 %f\n", PI);			/* 顯示PI符號常數的值 */
	printf("邊長為%d的正方形面積為 %d\n", 12, SQUARE_AREA(12));			/* 顯示正方形的面積 */	
	printf("邊長為%f的正方形面積為 %f\n", 12.34, SQUARE_AREA(12.34));			/* 顯示正方形的面積 */
	printf("邊長為%d、%d的長方形面積為 %d\n", 12, 34, RECTANGLE_AREA(12, 34));	/* 顯示長方形的面積 */	
	printf("底為%d、高為%d的三角形面積為 %f\n", 37, 15, TRIANGLE_AREA(37, 15));	/* 顯示三角形的面積 */	
	printf("上底為%d、下底為%d、高為%d的梯形面積為 %f\n",17, 34, 15, TRAPEZOID_AREA(17, 34, 15));	/* 顯示梯形的面積 */
	printf("半徑為%d的圓形面積為 %f\n", 15, CIRCLE_AREA(15));	/* 顯示圓形的面積 */				
	system("PAUSE");
	return 0;
}
