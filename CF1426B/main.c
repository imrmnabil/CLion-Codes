#include <stdio.h>

int main() {
    int t, a, b, c, d, n, m, i,count = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d", &n, &m);
        for(i = 1; i <= n;i++)
        {
            scanf("%d%d%d%d", &a, &b, &c, &d);
            if(b == c)
            {
                count++;
            }
        }
        if(count > 0 && (m*m % 4) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        count = 0;
    }
    return 0;
}
