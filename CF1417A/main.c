#include <stdio.h>

int main() {
    int t, n, k, a[1004], i, j, swap, sum;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i = 1;i <= n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i = 1;i < n;i++)
        {
            for(j = 1;j < n;j++)
            {
                if(a[j] > a[j+1])
                {
                    swap = a[j+1] ;
                    a[j+1] = a[j];
                    a[j] = swap;
                }
            }
        }
        sum = 0;
        for(i = 2;i <= n;i++)
        {
            sum = sum + ((k-a[i])/a[1]);
        }
        printf("%d\n",sum);
    }
    return 0;
}