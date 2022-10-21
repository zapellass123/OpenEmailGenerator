#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int sum(struct Node *p)
{
    int s=0;
    while(p!=0)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);

    printf("Sum is %d ", sum(first));
    return 0;
}
