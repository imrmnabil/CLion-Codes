#include <stdio.h>

int fct(int num)
{
    if(num == 0)
    {
        return 1;
    }
    return num * fct(num -1);
}

int main() {
    int num;
    printf("Input the number:");
    scanf("%d",&num);
    printf("%d! = %d\n", num, fct(num));
    return 0;
}
