#include <stdio.h>

int num, x, ans = 1;

int pwr()
{
    if(x == 0)
    {
        return ans;
    }
    ans = ans * num;
    x--;
    return pwr();
}

int main ()
{
    int org_x;
    printf("Input the number and its power(n,x):");
    scanf("%d%d", &num, &x);
    org_x = x;
    printf("%d to the power %d = %d",num, org_x, pwr());
    return 0;
}
