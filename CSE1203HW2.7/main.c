#include <stdio.h>
#include <math.h>

void armochk(int num,int count, int *dig)
{
    int sum = 0, i;
    for(i = 1; i <= count; i++)
    {
        sum = sum + pow(dig[i],3);
    }
    if (sum == num)
    {
        printf("%d is armstrong (but/and) ",num);
    }
    else
    {
        printf("%d is not armstrong (but/and) ",num);
    }
}

void prfctchk(int n)
{
    int sum = 0, i;
    for(i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("is a perfect number.\n");
    }
    else
    {
        printf("is not a perfect number.\n");
    }
}

int main() {
    int num, i, dig[102], temp, count = 0;

    printf("Input a number:");
    scanf("%d",&num);
    temp = num;

    for(i = 1;temp != 0 ; i++)
    {
        dig[i] = temp % 10;
        temp /= 10;
        count++;
    }

    armochk(num, count, dig);
    prfctchk(num);

    return 0;
}
