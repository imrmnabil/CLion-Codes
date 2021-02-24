#include <stdio.h>

int x;

int gcd(int lrg , int sml)
{
    static int i = 0;
    if(lrg % (x-i) == 0 && sml % (x-i) == 0)
    {
        return x-i ;
    }
    i++;
    gcd(lrg, sml);
    return x - i;
}

int main ()
{
    int num1, num2;
    printf("Input two integer numbers:");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        x = num2;
        printf("GCD of %d and %d = %d",num1,num2,gcd(num1, num2));
    }
    else
    {
        x = num1;
        printf("GCD of %d and %d = %d",num1,num2,gcd(num2, num1));
    }
    return 0;
}
