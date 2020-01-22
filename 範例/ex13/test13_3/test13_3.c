#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
int main(int argc, char *argv[]) {
	int n, m, k, i, j;
	struct node * ptr, *head, *prev;
	scanf("%d %d %d", &n, &m, &k);
    head = (struct node*)malloc(n * sizeof(struct node));
    for(i = 0; i < n; i++){
        head[i].data = i + 1;
        if(i < n - 1)
            head[i].next = &head[i + 1];
        else
            head[i].next = &head[0];
    }
    ptr = head;
    prev = &head[n -1];
    for(i = 0; i < k; i++){
        for(j = 0; j < m - 1; j ++){
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = ptr->next;
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
    free(head);
    system("PAUSE");
	return 0;
}
