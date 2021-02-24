#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d%d", &n, &k);
        if(n >= k)
        {
            if((n - k) % 2 == 0)
            {
                if(n >= k*k)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}