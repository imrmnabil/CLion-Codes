#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,min = -1;
        scanf("%d",&n);
        int a[n + 2], count[20005];
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i = 1; i <= 20005; i++)
        {
            count[i] = 0;
        }
        for(int i = 1; i <= n; i++)
        {
            count[a[i]]++;
        }
        for(int i = 1; i <= 20005; i++)
        {
            printf("count %d %d",i,count[i]);
            if(count[i] == 1)
            {
                min = i;
                break;
            }
        }
        if(min == -1)
        {
            printf("-1\n");
        }
        else
            {
            for (int i = 1; i <= n; i++) {
                if (a[i] == min) {
                    printf("%d\n", &i);
                    break;
                }
            }
        }

    }
    return 0;
}