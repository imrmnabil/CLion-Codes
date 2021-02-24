#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, el,i,max;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    el = (int*) malloc(sizeof(int)*n);
    printf("Input the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",(el+i));
    }
    max = *el;
    for (i = 1; i < n; i++)
    {
        if(*(el+i) > max)
        {
            max = *(el+i);
        }
    }
    printf("Largest element is %d\n", max);
    return 0;
}
