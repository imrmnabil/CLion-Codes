#include <stdio.h>

int chkfibo(int n)
{
    if( n == 1)
    {
        return 0;
    }
    if( n == 2)
    {
        return 1;
    }
    return chkfibo(n - 2) + chkfibo(n - 1);

}

int main() {
    int n, i;
    printf("Input the total elements of this fibonacci series :");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    for(i = 1; i <= n; i++)
    {
        printf(" %d",chkfibo(i));
        if(i != n){printf(",");}
    }
    return 0;
}
