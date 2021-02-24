#include <stdio.h>

int s = 0;

int sum(int num)
{
    if(num == 0)
    {
        return s;
    }
    s = s + num%10;
    num = num/10;
    sum(num);
    return s;
}

int main ()
{
    int num;
    printf("Input the number:");
    scanf("%d", &num);
    printf("Sum of digits of the number = %d",sum(num));
    return 0;
}