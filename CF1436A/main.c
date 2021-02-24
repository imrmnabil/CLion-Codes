#include <stdio.h>

int main() {
    int t,n,m,arr[1003], i, sum = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(i = 1;i <= n; i++)
        {
            scanf("%d",&arr[i]);
            sum = sum + arr[i];
        }
        if(sum == m)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum = 0;
    }
    return 0;
}
