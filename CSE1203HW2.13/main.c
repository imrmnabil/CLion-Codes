#include <stdio.h>

int cntdig(int n)
{
    static int count = 0;
    if(n == 0)
    {
        return count;
    }
    count++;
    n = n/10;
    cntdig(n);
    return count;
}

int main ()
{
    int num;
    printf("Input the number:");
    scanf("%d", &num);
    printf("Total number of digits = %d",cntdig(num));
    return 0;
}
