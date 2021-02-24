#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *prev,*head,*p;

void print();

int main()
{
    int n,i;
    printf ("Input the number of nodes :");
    scanf("%d",&n);
    head=NULL;
    for(i=1;i<=n;i++)
    {
        p=malloc(sizeof(struct node));
        printf("Input data for node %d :",i);
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }

    p = head;
    printf("Data entered in the list:\n");
    print();
    return 0;
}

void print()
{
    int num;
    if(p == NULL)
    {
        printf("\nThe list in reverse are : \n");
        return;
    }
    num = p ->data;
    printf("Data = %d\n", num);
    p = p -> next;
    print();
    printf("Data = %d\n", num);
}

