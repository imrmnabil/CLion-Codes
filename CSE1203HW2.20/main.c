#include <stdio.h>

int inc = 0,x;

int lcm(int lrg , int sml)
{
    if(x % lrg == 0 && x % sml == 0)
    {
        return inc;
    }
    inc++;
    x++;
    lcm(lrg, sml);
    return inc;
}

int main ()
{
    int num1, num2;
    printf("Input two integer numbers:");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        x =num1;
        printf("LCM of %d and %d = %d", num1, num2, lcm(num1, num2) + num1);
    }
    else
    {
        x = num2;
        printf("LCM of %d and %d = %d",num1, num2, lcm(num2, num1) + num2);
    }
    return 0;
}