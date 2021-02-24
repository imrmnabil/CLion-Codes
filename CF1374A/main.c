#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,n,k,temp;
        scanf("%d%d%d",&x,&y,&n);
        temp = (n / x) * x;
        if(n - temp >= y)
        {
            k = temp + y;
        }
        else
        {
            k = temp - x + y;
        }
        printf("%d\n", k);
    }
    return 0;
}
