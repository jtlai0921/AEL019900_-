#include <stdio.h>
#include <stdlib.h>

struct stru{
    char ch, ascii;
};

int main(int argc, char *argv[]) {
    struct stru sa[10];
    int i;
    for(i = 0; i < 10; i ++){
        sa[i].ch = (char)33+i;
        sa[i].ascii = 33+i;
    }
    for(i = 0; i < 10; i ++){
        printf("¦r¤¸¡u%c¡vASCII½X=%d\n", sa[i].ch, sa[i].ascii);    
    }
    system("PAUSE");
	return 0;
}
