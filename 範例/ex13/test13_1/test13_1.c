#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct poly{
    float coef;
    int exp;
    struct poly *next;
};
void printpoly(struct poly *);
struct poly *createpoly(int);
void polyadd(void);
struct poly *getnode();
void freepoly(struct poly*);

struct poly *ptr, *poly1, *poly2, *poly3;
int main(int argc, char *argv[]) {
    int keyin=0;
    printf("\n === 多項式相加  =====\n");
    printf("\n 1. 第一個多項式 poly1(x) 共有多少項：");
    scanf("%d", &keyin);
    printf("\n");
    poly1=createpoly(keyin);
    printf("\n");
    printf("\n 2. 第二個多項式 poly2(x) 共有多少項：");
    scanf("%d", &keyin);
    poly2=createpoly(keyin);
    polyadd();
    printf("\n 1. poly1(x)=");
    printpoly(poly1);
    printf("\n 2. poly2(x)=");
    printpoly(poly2);
    printf("\n 3. poly3(x)= poly1(x) + poly2(x)");
    printf("\n    poly3(x)=");
    printpoly(poly3);
    printf("\n\n");
    freepoly(poly1);
    freepoly(poly2);
    freepoly(poly3);
    system("PAUSE");
	return 0;
}
void printpoly(struct poly *po){
    char opr;
    struct poly *p;
    p = po;
    while(p!=NULL){
        if(p->coef > 0){
            opr='+';
        }else{
            opr='-';
        }
        printf(" %c%4.1fx^%d", opr, fabs(p->coef), p->exp);
        p=p->next;
    }
}
struct poly * createpoly(int n){
    float coef=0;
    int exp=0;
    int i=0;
    struct poly *head, *tail, *p;
    head=tail=NULL;
    do{
        i ++;
        p=getnode();
        printf("    輸入第 (%d) 項的 係數 與 指數 (以空白隔開)：", i);
        scanf("%f %d", &coef, &exp);
        p->coef = coef;
        p->exp = exp;
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            tail->next=p;
        tail=p;
    }while(n>i);
    return head;
}
struct poly *getnode(){
    struct poly *T;
    T = malloc(sizeof(struct poly));
    T->next = NULL;
    return(T);
}
void freepoly(struct poly *p){
    struct poly *N, *T;
    for(N=p; N!=NULL;){
        T = N;
        N = N->next;
        free(T);
    }
}
void polyadd(void){
    struct poly *t1, *t2, *prev;
    t1 = poly1;
    t2 = poly2;
    prev = NULL;  
    
    while(t1 != NULL || t2 != NULL){
        ptr=getnode();
        if(t1 != NULL && (t2 == NULL || t1->exp > t2->exp)){
            ptr->coef = t1->coef;
            ptr->exp = t1->exp;
            t1 = t1->next;
        }
        else if(t1 == NULL || t1->exp < t2->exp){
            ptr->coef = t2->coef;
            ptr->exp = t2->exp;
            t2 = t2->next;
        }
        else{
            ptr->coef = t1->coef + t2->coef;
            ptr->exp = t2->exp;
            if(t2 != NULL)
                t2 = t2->next;
            if(t1 != NULL)
                t1 = t1->next;
        }
        if(ptr->coef != 0){
            if(poly3 == NULL)
                poly3 = ptr;
            else
                prev->next = ptr;
            prev = ptr;
        }
        else
            free(ptr);
    }
}

