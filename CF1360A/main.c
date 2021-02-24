#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,min,max,ans;
        scanf("%d%d",&a,&b);
        if(a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        if(max < 2 * min)
        {
            ans = 4 * min * min;
        }
        else
        {
            ans = max * max;
        }
        printf("%d\n",ans);
    }
    return 0;
}
