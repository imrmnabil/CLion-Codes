#include <stdio.h>

int prfctchk(int n)
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    int min,max,i;
    printf("The lower limit of the range =");
    scanf("%d",&min);
    printf("The upper limit of the range =");
    scanf("%d",&max);
    printf("All perfect numbers in the given range:");
    for(i = min; i <= max; i++)
    {
        if(prfctchk(i))
        {
            printf("  %d,",i);
        }
    }
    return 0;
}
