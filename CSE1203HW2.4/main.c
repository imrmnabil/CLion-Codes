#include <stdio.h>

void bin(int d)
{
    int i, j, b[1002], count = 0;
    for(i = 1;d > 0;i++)
    {
        b[i]=d%2;
        d=d/2;
        count++;
    }
    printf("The binary form of the given number :");
    for(j = count;j > 0;j--)
    {
        printf("%d",b[j]);
    }
}

int main() {
    int d;
    printf("Input the decimal number:");
    scanf("%d",&d);
    bin(d);
    return 0;
}
