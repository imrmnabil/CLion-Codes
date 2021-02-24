#include <stdio.h>
#include <math.h>

int main() {
    int t,n,x,ans;
    double d;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &x);
        if (n == 1 || n == 2)
        {
            printf("1\n");
            continue;
        }
        d = (double)(n-2)/(double)x + 1;
        ans = ceil(d);
        printf("%d\n",ans);
    }
    return 0;
}

