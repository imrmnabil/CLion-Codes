#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n,count = 0;
        scanf("%lld",&n);
        if(n <= 3)
        {
            printf("%lld\n",n-1);
        }
        else
        {
            if(n % 2 == 0)
            {
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }
        }
    }
    return 0;
}
