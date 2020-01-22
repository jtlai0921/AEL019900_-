#include <stdio.h>
#include <stdlib.h>

struct student{
    char no[8];
    char name[16];
    int score;
};
int search(int, struct student []);
void show(struct student [], int);

int main(int argc, char *argv[]) {
    struct student p[] = {{"8101", "Tom", 80}, 
        {"8102", "John", 88}, {"8103", "Kent", 95}};
    int i;
    
    i = search(sizeof(p), p);
    show(p, i);
    printf("\n");
    system("PAUSE");
	return 0;
}
int search(int arysize, struct student tary[]){
    int i, max, num, count;
    struct student * ptr = tary;
    count = arysize/sizeof(struct student);
    max = num = 0;
    for(i = 0; i < count; i ++, ptr ++){
        if(ptr->score > max){
            max = ptr->score;
            num = i;
        }
    }
    return num;
}
void show(struct student tary[], int i){
    printf("%s\t%s\t%d", tary[i].no, tary[i].name, tary[i].score);
}
