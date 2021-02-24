#include <stdio.h>

int main() {
    int n1,n2, *p, *q;
    p = &n1;
    q = &n2;
    printf("Enter two numbers:");
    scanf("%d%d",p,q);
    if(*p > *q)
    {
        printf("%d is the maximum number.\n",*p);
    }
    else if(*p < *q)
    {
        printf("%d is the maximum number.\n", *q);
    }
    else
    {
        printf("The numbers are equal.\n");
    }
    return 0;
}
