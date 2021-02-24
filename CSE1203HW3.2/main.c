#include <stdio.h>

int add(int * p, int * q)
{
    int sum;
    sum = *p + *q;
    return sum;
}

int main() {
    int n1, n2;
    int *p, *q;
    p = &n1;
    q = &n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("The sum is = %d",add(p, q));
    return 0;
}
