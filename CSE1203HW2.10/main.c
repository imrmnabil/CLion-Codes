#include <stdio.h>

int sum(int n)
{
    if( n == 1)
    {
        return 1;
    }
   return n + sum(n - 1);

}

int main() {
    int n;
    printf("Input the value of 'n' :");
    scanf("%d",&n);
    printf("The sum of the series = %d\n",sum(n));
    return 0;
}
