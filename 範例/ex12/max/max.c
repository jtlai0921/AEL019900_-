#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int max = 0;
    int i, val;
    
    for(i = 1; i < argc; i ++){
        val = atoi(argv[i]);
        if(val > max)        
            max = val;
    }
	return max;
}
