#include <stdio.h>

int factorial(int a)
{
    int i, f = 1;
    for(i = 1;i <= a;i++)
    {
        f = f * i;
    }
    return f;
}

int main() {
    int i, sum = 0;
    printf("The sum of the given series = ");
    for(i = 1;i <= 5;i++)
    {
        sum = sum + (factorial(i)/i);
    }
    printf("%d",sum);
    return 0;
}
