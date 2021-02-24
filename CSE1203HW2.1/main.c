#include <stdio.h>
int sq(int x)
{
    return x*x;
}

int main()
{
    int num;
    printf("Input the number :");
    scanf("%d", &num);
    printf("Square of the number is %d\n",sq(num));
    return 0;
}
