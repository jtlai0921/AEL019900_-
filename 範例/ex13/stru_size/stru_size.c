#include <stdio.h>
#include <stdlib.h>

struct stru1{
    char c[4];
    int i;
    float f;
}stru_1;
struct stru2{
    char c;
    short int si;
    int i;
    float f;
}stru_2;
int main(int argc, char *argv[]) {
    printf("char佔用的記憶體空間=%d\n", sizeof(char));
    printf("short int佔用的記憶體空間=%d\n", sizeof(short int));
    printf("int佔用的記憶體空間=%d\n", sizeof(int));
    printf("float佔用的記憶體空間=%d\n", sizeof(float));
    printf("結構stru1佔用的記憶體空間=%d\n", sizeof(stru_1));
    printf("結構stru2佔用的記憶體空間=%d\n", sizeof(stru_2));
    system("PAUSE");
	return 0;
}
