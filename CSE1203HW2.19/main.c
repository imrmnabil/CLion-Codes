#include <stdio.h>

int num, i = 2, count = 0;

int prime()
{
    if(num == 2)
    {
        return count;
    }
    if(num % i == 0 || num < 2)
    {
        count++;
        return count;
    }
    if (i * i > num)
    {
        return count;
    }
    i = i + 1;
    prime();
    return count;
}

int main ()
{
    printf("Input the number:");
    scanf("%d", &num);
    if(!prime())
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}
