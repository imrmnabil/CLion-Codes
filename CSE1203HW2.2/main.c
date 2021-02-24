#include <stdio.h>

void oechecker(int n);

int main()
{
    int num;

    printf("Input the number:");
    scanf("%d",&num);
    oechecker(num);

    return 0;
}

void oechecker(int n)
{
    if(n%2) {printf("%d is an odd number\n",n);}
    else {printf("%d is an even number\n",n);}
}