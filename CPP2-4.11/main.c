#include <stdio.h>

int fact_call;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    fact_call++;
    return n * factorial(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n < 0)
    {
        printf("Undefined\n");
        return 0;
    }
    printf("Factorial of %d is %d\n",n,factorial(n));
    printf("%d\n",fact_call);
    return 0;
}
