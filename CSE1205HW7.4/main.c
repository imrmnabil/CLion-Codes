#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    node *prev, *head, *pNode, *tempnext;
    int n, i, x, node_count = 0;;
    printf ("Input the number of nodes :");
    scanf("%d",&n);
    head = NULL;
    for(i = 1; i <= n; i++)
    {
        pNode = malloc(sizeof(struct node));
        printf("Input data for node %d :",i);
        scanf("%d", &pNode -> data);
        pNode->next = NULL;
        if(head == NULL)
        {
            head = pNode;
        }
        else
        {
            prev -> next = pNode;
        }
        prev = pNode;
    }
    pNode = head;
    printf("\nData entered in the list :\n");
    while(pNode != NULL)
    {
        printf("Data = %d %p\n", pNode -> data, pNode);
        pNode = pNode -> next;
    }
    printf("\nInput the position of node to delete :");
    scanf("%d", &x);
    pNode = head;
    while(pNode != NULL)
    {
        node_count++;
        if(node_count == x)
        {
            tempnext = (struct node *)malloc(sizeof(struct node));
            tempnext = pNode->next;
            printf("%p", tempnext);
            break;
        }
        pNode = pNode -> next;
    }
    pNode = head;
    while(pNode != NULL)
    {
        node_count++;
        if(node_count == x - 1)
        {
            pNode->next = tempnext;
            break;
        }
        pNode = pNode -> next;
    }
    pNode = head;
    printf("\nDeletion completed successfully. \n");
    printf("The new list are :\n");
    while(pNode != NULL)
    {
        printf("Data = %d\n", pNode -> data);
        pNode = pNode -> next;
    }
    return 0;
}
