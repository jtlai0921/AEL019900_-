#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct stock{
	struct node *top;
}sk;

void push( int);
void pop();
void printout();
void free_stack();

int main(int argc, char *argv[]) {
    int value;
	char choose;
	
	sk.top = NULL;
	do
	{
		printf(" \n ===  Stack Operation  ===");
		printf(" \n   1. Push Operation ");
		printf(" \n   2. Pop Operation ");
		printf(" \n   3. Printout Stack ");
		printf(" \n   0. Quit ");
		printf(" \n =========================");
		printf(" \n   請選擇 [0-3] : ");
		choose = getche();
		switch (choose)  /* 判斷使用者選擇的選項 */
		{
			case '1':
				printf("\n  請輸入整數：");
				scanf("%d", &value);
				push(value);
				break;
			case '2':
                pop();
				break;
			case '3': 
				printout();
				break;
			case '0':
			    free_stack();
				printf("\n");
				system("PAUSE");	
				return 0;
			default:
				printf("\n 請輸入選項 (0～3) !\n");
				break;
		}
	}while(1);
}

void push(int value){
	struct node *T;
	
	T = (struct node *)malloc(sizeof(struct node));
	if(T == NULL){ /* 配置記憶體失敗 */
		printf("\n 堆疊己經滿了!\n");
    }
    else{
    	T->data = value;
        T->next = sk.top;
        sk.top = T;
    }
}
void pop(){
	struct node *T;

	if(sk.top == NULL){
		printf("\n 堆疊己經空了!\n");
	}
	else{
        printf("\n Pop from Stack : %5d\n", sk.top->data);
        T = sk.top;
    	sk.top = sk.top->next;
        free(T);
    }
}
void printout(){
	struct node *T;
	
	printf("\n  Top <-- Stack --> Bottom\n");
	for(T = sk.top; T != NULL; T = T->next)
		printf("%5d", T->data);
	printf("\n");
}
void free_stack(){
	struct node *N, *Temp;
	
	for(N = sk.top; N != NULL; ){
		Temp = N;
		N = N->next;
		free(Temp);
	} 
}
