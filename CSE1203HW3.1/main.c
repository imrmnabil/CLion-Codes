#include <stdio.h>
int main()
{
    int n, m, sum, *p, *q;
    printf("Enter two numbers to add:");
    scanf("%d%d", &n, &m);
    p = &n;
    q = &m;
    sum = *p + *q;
    printf("%d + %d = %d\n", n, m, sum);
    return 0;
}