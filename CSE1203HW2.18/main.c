#include <stdio.h>

int num;

void bin()
{
    int dig;
    if(num == 0)
    {
        return;
    }
    dig = num %2;
    num = num/2;
    bin();
    printf("%d",dig);
}

int main ()
{
    printf("Input a decimal number:");
    scanf("%d", &num);
    printf("Binary form = ");
    if(num == 0)
    {
        printf("0\n");
    }
    bin();
    return 0;
}
