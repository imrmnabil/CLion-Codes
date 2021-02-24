#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    node *prev,*head,*p;
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
    while(p != NULL)
    {
        printf("Data = %d\n",p -> data);
        p = p -> next;
    }
    return 0;
}

